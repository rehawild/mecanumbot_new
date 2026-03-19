# Mecanumbot Codebase Report

---

## 1. What This System Does

Mecanumbot is a ROS2 (Humble) project for a custom robot built on the TurtleBot3 platform that uses a mecanum wheel drivetrain for omnidirectional movement. In addition to four independently driven mecanum wheels, the robot has a camera on a servo neck and a two-finger gripper. The system handles hardware I/O (serial communication with an OpenCR microcontroller for motor control, a separate Arduino Nano for corner LED strips), sensor processing (odometry, IMU, battery, joint states), a 2D LiDAR-based person detector (DR-SPAAM deep learning model), and high-level behaviour trees for a "robot guide" use case—detecting a human, approaching them, and physically leading them to a target location using LED signals and expressive body movements.

---

## 2. Package Overview

### On-Robot Packages (`src/mecanumbot/`)

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot` | Meta-package, no code | — |
| `mecanumbot_bringup` | Launch files that assemble the robot at startup | Python launch |
| `mecanumbot_core` | Hardware I/O and sensor processing nodes | Python |
| `mecanumbot_description` | URDF robot model, maps, parameter YAML files | XML/YAML |
| `mecanumbot_led` | ROS2 service wrapper for Arduino Nano LED controller | Python |
| `mecanumbot_monitor` | Debug/test nodes to exercise motors and accessories | Python |

### Custom Messages (`src/mecanumbot_msgs/`)

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_msgs` | Custom msg and srv definitions for this robot | CMake/ROS IDL |

### Behaviour Packages (`src/mecanumbot_behaviours/`)

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_behaviours` | Meta-package | — |
| `mecanumbot_leading_behaviour` | py_trees behaviour trees for human-following and guiding | Python |

### Remote/PC Packages (`src/mecanumbot_remote/`)

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_ledgui` | Tkinter GUI to control LEDs from PC | Python |
| `mecanumbot_sensorprocess_smart` | DR-SPAAM 2D LiDAR person detection node | Python |
| `mecanumbot_teleop` | Keyboard and joystick teleoperation | Python |

---

## 3. Node Encyclopedia

---

### `mecanumbot_io_node`
**Package:** `mecanumbot_core`

**What it does:** The central hardware bridge between ROS2 and the OpenCR microcontroller. It receives velocity commands from the ROS network, converts them into mecanum drive wheel speeds via inverse kinematics, serializes them into a binary packet, and sends them over serial. Simultaneously it runs a background reader thread that continuously reads telemetry packets from the OpenCR, validates them (CRC + plausibility checks), and publishes the parsed state to the ROS network. Also controls a GPIO pin (GPIO 27 via `wiringpi`) as an RS-485 direction signal—setting it HIGH before writing to the serial and LOW afterward (a 100 ms delay is used).

**Subscriptions:**
- `/cmd_vel` (`geometry_msgs/Twist`): Receives linear x, y and angular z velocity commands. Converts to 4 individual wheel speeds via mecanum kinematics. Clamped to ±300 ticks. GPIO 27 set HIGH on receipt.
- `/cmd_accessory_pos` → remapped from `/mecanumbot/cmd_accessory_pos` (`mecanumbot_msgs/AccessMotorCmd`): Receives desired neck and gripper positions (in radians, scaled ×100 before sending). GPIO 27 set HIGH on receipt.

**Publications:**
- `/mecanumbot/opencr_state` (`mecanumbot_msgs/OpenCRState`): Publishes at 100 Hz (10 ms timer) from the latest validated serial packet. Contains all wheel velocities/positions/currents/errors, IMU data, battery voltage, and neck/gripper positions.

**Parameters:**

| Parameter | Default | Description |
|---|---|---|
| `dev_params.device_name` | `/dev/ttyACM0` (Linux), `COM3` (Windows) | Serial port for OpenCR |
| `dev_params.baudrate` | `1000000` | Serial baud rate |
| `robot_params.wheel.radius` | `0.0325` m | Wheel radius (32.5 mm) |
| `robot_params.wheel.separation_x` | `0.129` m | Front-back wheel separation |
| `robot_params.wheel.separation_y` | `0.300` m | Left-right wheel separation |
| `robot_params.wheel.vel_tick` | `0.229` | One tick = this many rot/min |
| `robot_params.accessory.neck_default` | `850` | Default neck servo position |
| `robot_params.accessory.grabber_default` | `512` | Default grabber position |
| `packet_params.payload_fmt` | `<27h14f` | Struct format for incoming packet (27 int16 + 14 float32) |
| `packet_params.magic` | `55AA` | Packet header magic bytes |
| `plausibility_params.max_wheel_speed` | `10000` | Max valid wheel tick value |
| `plausibility_params.min_pos` | `-1000` | Min valid servo position |
| `plausibility_params.max_pos` | `10000` | Max valid servo position |
| `plausibility_params.max_float_abs` | `1e7` | Max valid float magnitude |

**Key logic:**

*Inverse kinematics (vel_cmd_callback):* Standard mecanum drive formulas. Given Vx (forward), Vy (lateral), Wz (rotational):
- `BL = (Vx + Vy - Wz * wheel_dist_scale) / scale`
- `BR = (Vx - Vy + Wz * wheel_dist_scale) / scale`
- `FL = (Vx - Vy - Wz * wheel_dist_scale) / scale`
- `FR = (Vx + Vy + Wz * wheel_dist_scale) / scale`

where `scale = vel_tick/60 * 2π * wheel_radius` (converts m/s to ticks) and `wheel_dist_scale = (sep_x + sep_y)/2`.

*Outgoing serial packet:* 7 × int16 packed as `<7h`: [BL_vel, BR_vel, FL_vel, FR_vel, N_pos, GL_pos, GR_pos].

*Incoming serial parser (read_thread_fn):* Runs in a daemon thread. Accumulates bytes in a rolling buffer (max 4096 bytes). Searches for magic header `0x55AA`. On finding it, checks if enough bytes are present for a full packet. Validates CRC8 (CCITT). Validates plausibility (wheel speeds, servo positions, float sanity). Stores good payload in `self.vals` under a lock.

*CRC8:* Polynomial 0x07, computed over all bytes except the last (checksum byte).

---

### `mecanumbot_sensorproc_node`
**Package:** `mecanumbot_core`

**What it does:** Subscribes to raw `OpenCRState` and transforms the hardware data into standard ROS2 sensor messages: odometry (with TF broadcast), IMU, joint states, and battery state. Publishes at 100 Hz (10 ms timer).

**Subscriptions:**
- `/mecanumbot/opencr_state` (`mecanumbot_msgs/OpenCRState`): Raw hardware telemetry from the IO node.

**Publications:**
- `/mecanumbot/odom` (`nav_msgs/Odometry`): Estimated robot pose and velocity.
- `/mecanumbot/imu` (`sensor_msgs/Imu`): Orientation, angular velocity, linear acceleration from OpenCR IMU.
- `/mecanumbot/joint_states` (`sensor_msgs/JointState`): 7 joints: 4 wheels + neck + 2 gripper fingers.
- `/mecanumbot/battery_state` (`sensor_msgs/BatteryState`): Voltage, capacity, percentage.
- TF: Broadcasts `odom → base_footprint` transform at 100 Hz.

**Parameters:**

| Parameter | Default | Description |
|---|---|---|
| `robot_params.wheel.vel_tick` | `0.229` | One tick in rot/min |
| `robot_params.wheel.radius` | `0.0325` m | Wheel radius |
| `robot_params.wheel.sep_x` | `0.129` m | Front-back separation |
| `robot_params.wheel.sep_y` | `0.300` m | Left-right separation |
| `robot_params.battery.min_voltage` | `9.9` V | 0% battery reference |
| `robot_params.battery.max_voltage` | `12.6` V | 100% battery reference |
| `odom_params.frame_id` | `odom` | Odometry frame |
| `odom_params.child_frame_id` | `base_footprint` | Robot body frame |
| `odom_params.from_imu` | `false` | If true, use IMU quaternion for yaw (TODO) |
| `imu_params.frame_id` | `imu_link` | IMU frame ID |

**Key logic:**

*Odometry forward kinematics:* From 4 wheel velocity ticks, derives body velocity:
- `Vx = (BL + BR + FL + FR) / 4 * scale`
- `Vy = (BL - BR - FL + FR) / 4 * scale`
- `Wz = (-BL + BR - FL + FR) / 4 * scale / wheel_dist_scale`

Position is integrated: `x += cos(yaw)*Vx*dt - sin(yaw)*Vy*dt`, `y += sin(yaw)*Vx*dt + cos(yaw)*Vy*dt`.

*Joint states:* Wheel joint positions are reported as 0.0 (not tracked). Neck and gripper positions are converted from OpenCR ticks using `TICK_TO_RAD = 0.005061` and `MIDPOINT_COMPENSATE_CONSTANT = 2.618` (150° offset to align servo midpoint with URDF zero).

*Battery:* Percentage = `(V - min) / (max - min)`.

Two constants are hardcoded at module level: `TICK_TO_RAD = 0.005061` and `MIDPOINT_COMPENSATE_CONSTANT = 2.618`.

---

### `mecanumbot_led_service_node`
**Package:** `mecanumbot_led`

**What it does:** Provides ROS2 services to set and get the state of the four corner LED strips (FL, FR, BL, BR) by communicating with an Arduino Nano over serial at `/dev/arduino_nano` at 115200 baud.

**Services:**
- `/set_led_status` (`mecanumbot_msgs/srv/SetLedStatus`): Receives mode and color for each of the 4 LED corners, builds a 12-byte serial packet, and sends it to the Arduino.
- `/get_led_status` (`mecanumbot_msgs/srv/GetLedStatus`): Sends a single `REQUEST_BYTE (0xAC)` to the Arduino and reads back a 9-byte feedback packet (8 data bytes + checksum).

**Key logic:**

*Outgoing packet format:* `[0xAA, FL_mode, FL_color, FR_mode, FR_color, BL_mode, BL_color, BR_mode, BR_color, tL, tH, checksum]`. Duration is hardcoded to `duration_ms = 1000`. Checksum is XOR of all data bytes (not start byte, not duration bytes... actually XOR of all 8 mode/color bytes + tL + tH).

*Incoming feedback:* Looks for `0xAB` start byte, then reads 9 bytes (8 data + XOR checksum). A stateful function `read_feedback()` uses a static dictionary to persist state between calls (a Python trick for static function variables).

*LED modes:* 1=WAVE_RIGHT, 2=WAVE_LEFT, 3=PULSE, 4=SOLID (from GUI code).
*LED colors:* 0=BLACK, 1=WHITE, 2=GREEN, 3=RED, 4=BLUE, 5=CYAN, 6=PINK, 7=YELLOW (from GUI code).

---

### `accessory_monitor`
**Package:** `mecanumbot_monitor`

**What it does:** A test/debug node that runs a scripted sequence of accessory (neck + gripper) movements, repeating 7 times. Not intended for production use—this is a hardware exerciser.

**Publications:**
- `cmd_accessory_pos` (`mecanumbot_msgs/AccessMotorCmd`): Publishes neck and gripper position commands.

**Key logic:** Uses a state machine driven by a 0.5s timer. Each loop cycle: idle for 5 counts (2.5 s), then execute 4 accessory states in sequence: (0) cam up, (1) gripper half-open, (2) cam to midpoint, (3) gripper half-close. Constants: `MECANUMBOT_MIN_GRIPPER_POS=1.6`, `MECANUMBOT_FRONT_GRIPPER_POS=5.12`, `MECANUMBOT_MAX_GRIPPER_POS=8.54`, `MECANUMBOT_MIN_CAM_POS=2.0`, `MECANUMBOT_MAX_CAM_POS=8.6`.

Note: `main()` is recursively called at the end of `finally` block—this is a bug.

---

### `wheel_monitor`
**Package:** `mecanumbot_monitor`

**What it does:** A test/debug node that sweeps forward velocity from 0 to ~0.27 m/s in steps of 0.01 m/s per 0.5 s tick, repeating 6 times.

**Publications:**
- `cmd_vel` (`geometry_msgs/Twist`): Publishes velocity commands.

---

### `mecanumbot_lidar_detect_people` (DrSpaamNode)
**Package:** `mecanumbot_sensorprocess_smart`

**What it does:** Runs the DR-SPAAM deep learning detector on 2D LiDAR scans to detect and localize people. Transforms detections into map frame using TF. In `leading_mode`, publishes the nearest detection as the "subject" pose for the behaviour tree to follow.

**Subscriptions:**
- `/mecanumbot/scan` (`sensor_msgs/LaserScan`): Raw LiDAR scan data.

**Publications:**
- `/mecanumbot/dets` (`geometry_msgs/PoseArray`): All detected person poses in sensor frame.
- `/mecanumbot/dets_marker` (`visualization_msgs/Marker`): RViz visualization circles around each detection.
- `/mecanumbot/subject_pose` (`geometry_msgs/PoseStamped`): (leading_mode only) Map-frame pose of the first (nearest?) detected person.

**Parameters:**

| Parameter | Default | Description |
|---|---|---|
| `weight_file` | `dr_spaam_5_on_frog.pth` | PyTorch model checkpoint filename |
| `conf_thresh` | `0.85` | Confidence threshold to accept a detection |
| `stride` | `1` | DR-SPAAM inference stride |
| `scan_topic` | `scan` | Input laser scan topic |
| `detections_topic` | `dets` | Output detections topic |
| `rviz_topic` | `dets_marker` | Output RViz marker topic |
| `leading_mode` | `true` | Whether to publish subject_pose |

**Key logic:**

Pre-processing pipeline for each scan:
1. Replace zeros/NaN/Inf in scan with neighbor-average interpolation (`fill_with_neighbor_average`).
2. Resample scan to exactly 240 points (`interpolate_scan`), since DR-SPAAM was configured with that count (hardcoded in callback signature default).
3. Run `self.detector(scan)` to get `dets_xy`, `dets_cls`.
4. Filter by confidence ≥ 0.85.
5. Negate xy: `dets_xy = -1 * dets_xy` (coordinate system flip).
6. Transform first detection to map frame via TF lookup (`mecanumbot/base_scan` → `map`).
7. Publish `subject_pose` as the map-frame position of detection index 0.

The model file is `dr_spaam_5_on_frog.pth`—a DR-SPAAM model trained on a dataset called "frog" (unclear from source what dataset this is).

---

### `mecanumbot_joystick` (MecanumbotJoyTeleop)
**Package:** `mecanumbot_teleop`

**What it does:** Reads joystick input and converts it to velocity and accessory position commands for the robot.

**Subscriptions:**
- `/joy` (`sensor_msgs/Joy`): Joystick input.

**Publications:**
- `/cmd_vel` (`geometry_msgs/Twist`): Wheel velocity commands at 3 Hz.
- `/cmd_accessory_pos` (`mecanumbot_msgs/AccessMotorCmd`): Neck and gripper positions at 3 Hz.

**Parameters:** Configurable axis/button mappings, max velocities (0.234 m/s linear, 1.092 rad/s angular), deadzone (0.05), publish rate (3 Hz).

**Key logic:** Left stick Y → linear x, left stick X → linear y, right stick X → angular z. Y button → cam max (8.6), A button → cam mid (5.3). X button → gripper open, B button → gripper close. Back button → emergency stop.

---

### `mecanumbot_ledgui_client` (App/LedClient)
**Package:** `mecanumbot_ledgui`

**What it does:** A Tkinter desktop GUI running on the PC operator's machine. Allows interactive control of the four LED corners (color and mode) via dropdowns, with the ability to save/load named configurations from `led_configs.json`. Calls `set_led_status` and `get_led_status` services.

---

### Behaviour Tree Nodes

All behaviour tree nodes are in `mecanumbot_leading_behaviour`. They are not standalone ROS2 nodes—they are `py_trees.behaviour.Behaviour` subclasses that run inside a `py_trees_ros.trees.BehaviourTree`, which does have a ROS node.

Three tree configurations exist:
- `bottom_up_tree_node` (from `bottom_up_tree.py`) — LED-based guiding
- `ctrl_tree_node` (from `ctrl_tree.py`) — simple approach/turn sequence, runs as `bottom_up_tree_node`
- `doglike_leading_bt_node` (from `dog_tree.py`) — full dog-like guiding with gripper/neck gestures

The node name used by all three trees in setup is `bottom_up_tree_node`, which means all three use the same `behaviour_setting_constants.yaml` parameter key.

**Behaviour classes:**

- **`ConstantParamsToBlackboard`**: Reads `behaviour_setting_constants.yaml` at setup time and populates all shared blackboard keys. Also creates a `set_led_status` service client and fires the initial LED command on `initialise()`. Always returns SUCCESS.

- **`DistanceToBlackboard`**: Subscribes to `/amcl_pose` and `/mecanumbot/subject_pose`. Computes 3 Euclidean distances: robot↔subject, robot↔target, subject↔target. Writes them and boolean threshold checks to the blackboard. Returns SUCCESS when all data is available.

- **`TurnToward`**: Publishes a `PoseStamped` goal to `/goal_pose` (Nav2's goal topic) with the robot's current map position but rotated to face either the subject or a fixed target. Monitors `/navigate_to_pose/_action/status` to track goal completion. Returns SUCCESS when Nav2 reports SUCCEEDED.

- **`Approach`**: Similar to `TurnToward` but computes a goal position (not just orientation). Two modes: `"exact"` (go all the way to `stop_threshold` distance from target) and `"fixed_distance"` (take steps of `robot_approach_distance` at a time). Also handles the case where the subject has not been seen for `visibility_time_threshold` seconds—falls back to approaching the most directionally-aligned checkpoint.

- **`CheckSubjectTargetSuccess`**: Subscribes to `/mecanumbot/subject_pose` and checks whether the subject is within `target_reached_threshold` of the `target_position` blackboard key. Returns SUCCESS if yes, FAILURE if no.

- **`LEDBehaviourSequence`**: Steps through a sequence of `SetLedStatus` service calls with configurable delays between them. Three modes: `indicate_target` (white blink), `catch_attention` (white pulse), `indicate_close_target` (yellow blink). Returns SUCCESS when all steps complete.

- **`DogBehaviourSequence`**: Steps through a sequence of `AccessMotorCmd` messages (neck+gripper poses) with configurable delays. Two modes: `indicate_target` (gripper open/close rapidly) and `catch_attention` (neck nod up/down). Returns SUCCESS when all steps complete.

- **`DogCheckFollowing`**: Checks if the subject is "following" the robot by comparing current distance to `last_distance`. Returns FAILURE if the distance increased by more than `Dog_following_max_threshold` or the subject has wandered more than `Dog_max_wander_allowed` times. Returns SUCCESS if distance is stable or decreasing.

- **`DogSelectTarget`**: Uses `/amcl_pose` to find the robot's current map position, then selects the closest checkpoint from `Dog_checkpoints` (incremented by 1 if not at max). Writes `Dog_current_checkpoint` to blackboard.

---

## 4. Topic & Service Map

### Topics

| Topic | Type | Publisher → Subscriber(s) |
|---|---|---|
| `/mecanumbot/opencr_state` | `mecanumbot_msgs/OpenCRState` | `mecanumbot_io_node` → `mecanumbot_sensorproc_node` |
| `/cmd_vel` | `geometry_msgs/Twist` | teleop / behaviour tree → `mecanumbot_io_node` |
| `/cmd_accessory_pos` | `mecanumbot_msgs/AccessMotorCmd` | teleop / behaviour tree → `mecanumbot_io_node` |
| `/mecanumbot/odom` | `nav_msgs/Odometry` | `mecanumbot_sensorproc_node` → Nav2 |
| `/mecanumbot/imu` | `sensor_msgs/Imu` | `mecanumbot_sensorproc_node` → Nav2 |
| `/mecanumbot/joint_states` | `sensor_msgs/JointState` | `mecanumbot_sensorproc_node` → robot_state_publisher |
| `/mecanumbot/battery_state` | `sensor_msgs/BatteryState` | `mecanumbot_sensorproc_node` → (operator monitoring) |
| `/mecanumbot/scan` | `sensor_msgs/LaserScan` | `ld08_driver` → `DrSpaamNode` / Nav2 |
| `/mecanumbot/dets` | `geometry_msgs/PoseArray` | `DrSpaamNode` → (visualization) |
| `/mecanumbot/dets_marker` | `visualization_msgs/Marker` | `DrSpaamNode` → RViz |
| `/mecanumbot/subject_pose` | `geometry_msgs/PoseStamped` | `DrSpaamNode` → behaviour tree behaviours |
| `/goal_pose` | `geometry_msgs/PoseStamped` | behaviour tree → Nav2 |
| `/amcl_pose` | `geometry_msgs/PoseWithCovarianceStamped` | Nav2 AMCL → behaviour tree behaviours |
| `/navigate_to_pose/_action/status` | `action_msgs/GoalStatusArray` | Nav2 → `TurnToward`, `Approach` |
| `/joy` | `sensor_msgs/Joy` | joy driver → `MecanumbotJoyTeleop` |

### Services

| Service | Type | Server → Client(s) |
|---|---|---|
| `/set_led_status` | `mecanumbot_msgs/SetLedStatus` | `mecanumbot_led_service_node` ← GUI, `LEDBehaviourSequence`, `ConstantParamsToBlackboard` |
| `/get_led_status` | `mecanumbot_msgs/GetLedStatus` | `mecanumbot_led_service_node` ← GUI |

### Data Flow Narrative

The robot's operation starts with `mecanumbot_io_node` opening a serial port to the OpenCR microcontroller. The OpenCR continuously sends telemetry packets; the IO node's reader thread picks them up, validates them, and stores the latest in `self.vals`. Every 10 ms, the timer callback reads `self.vals` and publishes it as `OpenCRState`.

`mecanumbot_sensorproc_node` receives `OpenCRState` and converts it into standard ROS messages at 100 Hz. Odometry and TF are fed into Nav2, which uses them for AMCL localization and path planning.

The LD08 LiDAR driver publishes `LaserScan`. The DR-SPAAM node on the PC subscribes to this, runs the neural network, and publishes the closest person's map-frame pose as `/mecanumbot/subject_pose`.

The behaviour tree subscribes to `subject_pose` and `/amcl_pose`. Based on the state of the tree, it either sends navigation goals to Nav2 (via `/goal_pose`), fires LED sequences (via `/set_led_status` service calls), or sends accessory commands (via `/cmd_accessory_pos`) for expressive gestures. Nav2 translates navigation goals into `/cmd_vel` commands, which flow through `mecanumbot_io_node` to the physical wheels.

---

## 5. Launch File Breakdown

### `launch_mecanumbot_base.launch.py`
**Purpose:** Full robot bringup (runs on the Raspberry Pi).
**Nodes started:**
- `mecanumbot_io_node` (package: `mecanumbot_core`) — hardware I/O, namespace `mecanumbot`
- `mecanumbot_sensorproc_node` (package: `mecanumbot_core`) — sensor processing, namespace `mecanumbot`
- `ld08_driver` (package: `ld08_driver`) — LiDAR driver, namespace `mecanumbot`, port `/dev/ttyUSB0`, frame_id `mecanumbot/base_scan`
- Includes `mecanumbot_state_publisher.launch.py`

**Parameters:** Both core nodes load `mecanumbot_description/param/mecanumbot_core_parameters.yaml`. Remappings bring `/mecanumbot/cmd_vel` → `/cmd_vel` and `/mecanumbot/cmd_accessory_pos` → `/cmd_accessory_pos`.

**Launch args:** `namespace` (default: `mecanumbot`), `use_sim_time` (default: `false`).

---

### `mecanumbot_state_publisher.launch.py`
**Purpose:** Publishes static robot description (URDF) and TF tree.
**Nodes started:** `robot_state_publisher` with the URDF from `mecanumbot_description`.

---

### `mapping.launch.py`
**Purpose:** SLAM mapping session.
**Likely starts:** SLAM toolbox or cartographer + robot base. (Exact content not read—inferred from name and presence of slam parameter file.)

---

### `map.launch.py`
**Purpose:** Navigation with a pre-built map (AMCL localization + Nav2).

---

### `camera.launch.py`
**Purpose:** PiCamera launch.

---

### `rviz2.launch.py`
**Purpose:** Opens RViz2 with a pre-configured `model.rviz` layout for visualization.

---

### `mecanumbot_peopledetect.launch.py`
**Purpose:** Runs the DR-SPAAM person detector on the PC.
**Nodes started:** `mecanumbot_lidar_detect_people` (namespace `mecanumbot`), loads `lidar_peopledetect_config.yaml`.

---

### `launch_bottomup.launch.py`
**Purpose:** Runs the LED-based "bottom-up" guiding behaviour tree.
**Nodes started:** `bottom_up_tree_node` (package: `mecanumbot_leading_behaviour`).
**Remappings:** `/mecanumbot/cmd_vel` → `/cmd_vel`, `/mecanumbot/cmd_accessory_pos` → `/cmd_accessory_pos`.

---

### `launch_doglike_sequence.launch.py`
**Purpose:** Runs the dog-like guiding behaviour tree with neck/gripper gestures.
**Nodes started:** `doglike_leading_bt_node` (package: `mecanumbot_leading_behaviour`).

---

### `launch_control_sequence.launch.py`
**Purpose:** Runs the simpler ctrl_tree (approach + turn only, no gestures).
**Nodes started:** `bottom_up_tree_node` (ctrl_tree variant).

---

### `launch_LED_sequence.launch.py`
**Purpose:** Runs the LED-only sequence tree.

---

### `launch_joy_teleop.launch.py`
**Purpose:** Starts joystick teleop (remote package).

---

### `mecanumbot_ledgui.launch.py`
**Purpose:** Starts the Tkinter LED GUI on the PC.

---

## 6. Configuration & Parameters

### `mecanumbot_description/param/mecanumbot.yaml`
The primary runtime configuration for on-robot nodes. Key settings operators change:

- **Serial port / baud rate** for OpenCR: `dev_params.device_name = /dev/ttyACM0`, `baudrate = 57600`. Note: the node code defaults to `1000000` baud—the YAML overrides to `57600`.
- **Packet format** `payload_fmt = <23h14f`: This differs from the code default `<27h14f`. If the OpenCR firmware version sends only 23 shorts instead of 27, this file must match. Operators must keep this in sync with OpenCR firmware.
- **Wheel geometry**: radius `0.0325 m`, sep_x `0.129 m`, sep_y `0.300 m`. Change if physical robot dimensions change.
- **Odometry source**: `from_imu: true` — uses IMU quaternion for heading. The node code has a `#TODO` comment on this path.
- **Battery thresholds**: `min_voltage: 11.0 V` (higher than the code default 9.9 V).

### `mecanumbot_description/param/mecanumbot_core_parameters.yaml`
Used by `launch_mecanumbot_base.launch.py`. The actual content was not found on disk (file referenced in launch but `param/mecanumbot_core_parameters.yaml` path returned empty). May be the same content as `mecanumbot.yaml`.

### `mecanumbot_description/param/nav2_params.yaml`
Nav2 navigation stack configuration (planner, controller, costmaps). Not read in detail.

### `mecanumbot_description/param/mecanumbot_slam_mapping.yaml`
SLAM toolbox configuration for mapping sessions.

### `mecanumbot_description/param/mecanumbot_custom_nav2.yaml`
Custom Nav2 parameters overriding defaults for this robot.

### `mecanumbot_sensorprocess_smart/config/lidar_peopledetect_config.yaml`
DR-SPAAM detector settings: weight file, confidence threshold (0.85), stride (1), topic names.

### `mecanumbot_leading_behaviour/config/behaviour_setting_constants.yaml`
All behaviour tree tuning parameters. Operators change this to configure the guiding mission:
- `target_position`: Map coordinates of the destination (currently `[-2.76527, -6.12262, 0.0]`).
- `Dog_checkpoints`: Waypoints along the path the robot walks (6 points in the current config).
- `robot_closeness_threshold`: Minimum approach distance (0.25 m).
- `target_reached_threshold`: Subject considered to have reached target if within 0.75 m.
- `visibility_time_threshold`: Seconds without seeing the subject before falling back to checkpoint navigation (5 s).
- `Dog_following_max_threshold`: Max allowed distance increase per step while checking following (0.20 m).
- LED sequences: Lists of mode/color dicts for each LED condition.
- Dog sequences: Lists of neck/gripper positions for each gesture.

---

## 7. Message & Service Types

### `mecanumbot_msgs/msg/OpenCRState.msg`
The main hardware telemetry message. All wheel data uses raw integer tick units. Fields:

| Field | Type | Meaning |
|---|---|---|
| `header` | `std_msgs/Header` | Timestamp |
| `cmd_vel_bl/br/fl/fr` | `int16` | Commanded wheel velocities (ticks, from robot's motor controller) |
| `vel_bl/br/fl/fr` | `int16` | Measured wheel velocities (ticks) |
| `pos_bl/br/fl/fr` | `int16` | Measured wheel encoder positions (ticks) |
| `curr_bl/br/fl/fr` | `int16` | Measured motor currents |
| `acc_bl/br/fl/fr` | `int16` | Measured wheel accelerations |
| `pos_n` | `int16` | Neck servo measured position (ticks) |
| `pos_gl` | `int16` | Left grabber servo measured position (ticks) |
| `pos_gr` | `int16` | Right grabber servo measured position (ticks) |
| `err_bl/br/fl/fr` | `int16` | Motor error codes |
| `battery_voltage` | `float32` | Battery voltage in Volts |
| `imu_angular_vel_x/y/z` | `float32` | Gyroscope data (rad/s) |
| `imu_linear_acc_x/y/z` | `float32` | Accelerometer data (m/s²) |
| `imu_magnetic_x/y/z` | `float32` | Magnetometer data |
| `imu_orientation_w/x/y/z` | `float32` | Orientation quaternion from OpenCR IMU |

---

### `mecanumbot_msgs/msg/AccessMotorCmd.msg`
Command message for the neck and gripper actuators.

| Field | Type | Meaning |
|---|---|---|
| `n_pos` | `float32` | Neck servo target position (radians, scaled ×100 before serial) |
| `gl_pos` | `float32` | Left gripper servo target position (radians, scaled ×100 before serial) |
| `gr_pos` | `float32` | Right gripper servo target position (radians, scaled ×100 before serial) |

---

### `mecanumbot_msgs/msg/SensorState.msg`
A legacy message inherited from TurtleBot3. Contains bumper, cliff, sonar, illumination, LED, button states, torque flag, 4 wheel encoders, and battery. Not currently published by any node in this repo—appears to be retained for compatibility.

---

### `mecanumbot_msgs/srv/SetLedStatus.srv`
**Request:**

| Field | Type | Meaning |
|---|---|---|
| `fl_mode/color` | `int8` | Front-left LED mode and color |
| `fr_mode/color` | `int8` | Front-right LED mode and color |
| `br_mode/color` | `int8` | Back-right LED mode and color |
| `bl_mode/color` | `int8` | Back-left LED mode and color |

Mode: 1=WAVE_RIGHT, 2=WAVE_LEFT, 3=PULSE, 4=SOLID
Color: 0=BLACK, 1=WHITE, 2=GREEN, 3=RED, 4=BLUE, 5=CYAN, 6=PINK, 7=YELLOW

**Response:** `bool success`, `string message`

---

### `mecanumbot_msgs/srv/GetLedStatus.srv`
**Request:** (empty)
**Response:** Same 8 mode/color fields as SetLedStatus request.

---

## 8. System Architecture Narrative

The Mecanumbot is a multi-layered system split across two compute platforms. The Raspberry Pi on the robot runs the real-time-critical packages: hardware I/O, sensor processing, LiDAR driver, and the robot model publisher. An external PC (connected over the same ROS2 DDS network using CycloneDDS middleware with `ROS_DOMAIN_ID=19`) runs the perception pipeline, the behaviour trees, and teleoperation tools.

The hardware communication layer is built around two serial connections. The primary one (`/dev/ttyACM0`) connects to an OpenCR microcontroller that drives the four DYNAMIXEL-compatible wheel motors and three accessory servo motors (neck + two gripper fingers). Communication uses a custom binary protocol: a 2-byte magic header `0x55AA`, a 1-byte sequence number, a variable-length payload, and a CRC8 checksum byte. The incoming telemetry payload (`<27h14f` or `<23h14f` depending on firmware version) carries all motor feedback and full IMU data. The outgoing command is a simple 7-element int16 array. A secondary serial connection (`/dev/arduino_nano`) communicates with an Arduino Nano that controls four independent WS2812-style LED strips at the robot's corners.

The odometry pipeline converts wheel velocity ticks to body velocities using standard mecanum drive forward kinematics, then integrates those velocities over time. The heading can come either from dead-reckoning integration (default) or from the OpenCR IMU quaternion (configurable via parameter, though the IMU path has a `#TODO` comment suggesting it is experimental). Odometry feeds into Nav2's AMCL particle filter localization, which provides the robot's estimated map-frame pose via `/amcl_pose`. This is the only localization source—there is no GPS or visual-inertial odometry.

The perception pipeline uses the DR-SPAAM neural network to detect people in 2D LiDAR scans. The model (`dr_spaam_5_on_frog.pth`) runs on CPU (though CUDA is used if available). Each scan is preprocessed: invalid readings are filled by neighbor interpolation, then resampled to exactly 240 points (a hardcoded assumption matching the model's training configuration). Detections above the 0.85 confidence threshold are transformed from sensor frame to map frame via TF and the first detection is published as the "subject pose"—the person the robot is supposed to guide.

The high-level intelligence lives in the py_trees behaviour trees. Three tree configurations exist for different experiment conditions. The most sophisticated (`dog_tree.py`) implements a complete guiding protocol: first approach the subject and perform an attention-catching gesture (neck nods), then select the nearest checkpoint along a pre-configured path, walk to it while periodically checking the subject is following (using distance comparisons on the blackboard), and perform directional indication gestures (gripper open/close) when turning toward the target. The tree is "event-driven" in the sense that it reacts to changes in the subject's distance, but all control flow decisions are made via the py_trees SUCCESS/FAILURE/RUNNING return codes from individual behaviour nodes. Nav2 handles all actual path planning and obstacle avoidance—the behaviour tree only sends high-level nav goals to `/goal_pose`.

---

## 9. Things That Are Non-Obvious or Interesting

1. **Packet format mismatch between YAML and code.** The code default for `payload_fmt` is `<27h14f` (27 int16 + 14 float32 = 82 bytes), but `mecanumbot.yaml` sets it to `<23h14f` (23 int16 + 14 float32 = 74 bytes). This strongly implies two different OpenCR firmware versions are in use. The `OpenCRState.msg` defines 27 int16 fields (including 4 error fields), so when using the 23-int16 format, the `err_bl/br/fl/fr` fields in the message would never be populated. The launch file uses the YAML, so at runtime the 23-field format is active.

2. **GPIO 27 as RS-485 direction pin.** The IO node uses `wiringpi.wiringPiSetupGpio()` and `wiringpi.pinMode(27, 1)` to control GPIO pin 27. This toggles HIGH before serial write and LOW after with a 100 ms sleep. This is a classic RS-485 half-duplex direction control (DE/RE pin). The 100 ms delay in `update_motor_cmds_out()` is a surprisingly long wait inside what is a locked write operation—it effectively limits command rate to ~10 Hz.

3. **`read_feedback` uses a Python static-variable hack.** The LED node's `read_feedback()` function stores its state machine variables in `read_feedback.__dict__` (assigning to `read_feedback.state` via the `static = read_feedback.__dict__` alias). This is a Python idiom for static local variables, but it creates global-singleton state—only one call to `read_feedback` can be active at a time.

4. **DR-SPAAM `xy` axis swap.** In `_dets_to_pose_array`, the `x` and `y` values from DR-SPAAM are intentionally swapped: `p.position.x = xy[1]`, `p.position.y = xy[0]`. This, combined with the `dets_xy = -1 * dets_xy` sign flip, adjusts for the detector's coordinate convention vs. ROS convention.

5. **Behaviour tree node name collision.** All three behaviour tree configurations (`ctrl_tree.py`, `bottom_up_tree.py`, `dog_tree.py`) call `tree_node.setup(node_name="bottom_up_tree_node")`. This means all three trees use the same ROS node name and therefore load parameters from the same YAML key `bottom_up_tree_node`. Running two of them simultaneously on the same machine would cause a node name collision.

6. **`accessory_monitor` has a recursive `main()` bug.** At line 79 in `accessory_monitor.py`, inside the `finally` block, `main()` is called again recursively. This will cause unbounded stack growth if the node is interrupted. `wheel_monitor.py` does not have this bug.

7. **The `DogSelectTarget` logic has an off-by-one.** In `select_closest_ckpt`, after finding the closest checkpoint index, it increments by 1 (`closest_index += 1`) unless it is at `Dog_max_checkpoint`. This means the robot always targets the checkpoint *after* the closest one—a design decision to ensure forward progress, but it could cause unexpected jumps.

8. **Velocity clamping to ±300 ticks.** In `vel_cmd_callback`, wheel velocities are clamped to ±300. Given `vel_tick = 0.229 rot/min` and `scale = vel_tick/60 * 2π * 0.0325`, a command of 0.234 m/s (teleop max) produces roughly `0.234 / (0.229/60 * 2π * 0.0325) ≈ 300` ticks. So the clamp matches the teleop maximum exactly, but there is no warning if the clamp fires—silent velocity saturation.

9. **The `SensorState.msg` is orphaned.** It defines constants and fields that appear to come directly from TurtleBot3's original `turtlebot3_msgs`. No node in this repo publishes or subscribes to it. It likely exists for potential future use or was retained during the port from TurtleBot3.

10. **DR-SPAAM always publishes the first detection as "subject".** `_parse_subject_pose` uses `dets_msg.poses[0]`—the first pose in the array. DR-SPAAM returns detections in order of appearance in the scan, not by confidence or proximity. In a multi-person scene, the "subject" could jump between people. There is no tracking or assignment logic.

11. **`teleop_keyboard.py` exists but was not examined** (file was present in the file listing). It likely provides keyboard-based teleoperation similar to TurtleBot3's keyboard teleop.

12. **LED `duration_ms` is hardcoded to 1000.** In `LedServiceNode.__init__`, `self.duration_ms = 1000` is set and never changed. The `SetLedStatus` service has no `duration` field, but the LED packet includes a 2-byte duration field. If the Arduino firmware uses this for animation timing, changing the duration requires modifying the Python source.

13. **Behaviour tree tick rate differences.** `bottom_up_tree.py` ticks at 100 Hz (`period_ms=10.0`), while `dog_tree.py` ticks at 10 Hz (`period_ms=100.0`). Since `ctrl_tree.py` also uses `period_ms=10.0`, the dog behaviour gets 10x less frequent state evaluation—likely intentional to avoid flooding Nav2 with goals.
