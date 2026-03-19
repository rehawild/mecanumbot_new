# 03 — Node Encyclopedia

Every ROS2 node in the codebase, with full detail on what it does, its topics, parameters, and key logic.

---

## `mecanumbot_io_node`
**Package:** `mecanumbot_core` | **File:** `mecanumbot_core/mecanumbot_IO_node.py`

**What it does:** The central hardware bridge between ROS2 and the OpenCR microcontroller. Receives velocity and accessory commands from the ROS network, converts them to motor commands, and sends them over serial. Simultaneously runs a background reader thread that continuously reads telemetry packets from the OpenCR, validates them (CRC + plausibility checks), and makes the parsed state available to publish. Also controls GPIO pin 27 via `wiringpi` as an RS-485 direction signal.

### Subscriptions
| Topic | Type | What happens |
|---|---|---|
| `/cmd_vel` (remapped from `/mecanumbot/cmd_vel`) | `geometry_msgs/Twist` | Converted to 4 wheel speeds via mecanum inverse kinematics, clamped to ±300 ticks, sent over serial |
| `/cmd_accessory_pos` (remapped from `/mecanumbot/cmd_accessory_pos`) | `mecanumbot_msgs/AccessMotorCmd` | Neck and gripper positions scaled ×100 and sent over serial |

### Publications
| Topic | Type | Rate | Content |
|---|---|---|---|
| `/mecanumbot/opencr_state` | `mecanumbot_msgs/OpenCRState` | 100 Hz | All wheel velocities/positions/currents/errors, IMU data, battery voltage, neck/gripper positions |

### Parameters
| Parameter | Default | Description |
|---|---|---|
| `dev_params.device_name` | `/dev/ttyACM0` (Linux) / `COM3` (Win) | Serial port for OpenCR |
| `dev_params.baudrate` | `1000000` (overridden to `57600` by YAML) | Serial baud rate |
| `robot_params.wheel.radius` | `0.0325` m | Wheel radius |
| `robot_params.wheel.separation_x` | `0.129` m | Front-back wheel separation |
| `robot_params.wheel.separation_y` | `0.300` m | Left-right wheel separation |
| `robot_params.wheel.vel_tick` | `0.229` | Meaning of one tick in rot/min |
| `robot_params.accessory.neck_default` | `850` | Default neck servo position |
| `robot_params.accessory.grabber_default` | `512` | Default grabber servo position |
| `packet_params.payload_fmt` | `<27h14f` (overridden to `<23h14f` by YAML) | Struct format for incoming packet |
| `packet_params.magic` | `55AA` | Packet header magic bytes |
| `plausibility_params.max_wheel_speed` | `10000` | Max valid wheel tick value |
| `plausibility_params.min_pos` | `-1000` | Min valid servo position |
| `plausibility_params.max_pos` | `10000` | Max valid servo position |
| `plausibility_params.max_float_abs` | `1e7` | Max valid float magnitude |

### Key Logic

**Mecanum inverse kinematics** — given Vx (forward), Vy (lateral), Wz (rotational):
```
BL = (Vx + Vy - Wz * wheel_dist_scale) / scale
BR = (Vx - Vy + Wz * wheel_dist_scale) / scale
FL = (Vx - Vy - Wz * wheel_dist_scale) / scale
FR = (Vx + Vy + Wz * wheel_dist_scale) / scale
```
where `scale = vel_tick/60 * 2π * wheel_radius` and `wheel_dist_scale = (sep_x + sep_y)/2`.

**Outgoing serial packet:** 7 × int16 packed as `<7h`: `[BL_vel, BR_vel, FL_vel, FR_vel, N_pos, GL_pos, GR_pos]`.

**Incoming serial parser (`read_thread_fn`):** Daemon thread. Accumulates bytes in a rolling buffer (max 4096 bytes, trimmed to last 2048 if exceeded). Searches for magic header `0x55AA`. On finding it, waits until a full packet is available. Validates CRC8-CCITT (polynomial 0x07). Validates plausibility. Stores good payload in `self.vals` under a lock. Timer callback reads `self.vals` and publishes every 10 ms.

**GPIO 27:** Set HIGH before any serial write. 100 ms sleep inside the write, then set LOW. This is RS-485 half-duplex direction control.

---

## `mecanumbot_sensorproc_node`
**Package:** `mecanumbot_core` | **File:** `mecanumbot_core/mecanumbot_sensorproc_node.py`

**What it does:** Subscribes to raw `OpenCRState` and transforms the hardware data into standard ROS2 sensor messages at 100 Hz: odometry (with TF broadcast), IMU, joint states, and battery state.

### Subscriptions
| Topic | Type | What happens |
|---|---|---|
| `/mecanumbot/opencr_state` | `mecanumbot_msgs/OpenCRState` | Stored as `self.cr_state`, processed every 10 ms |

### Publications
| Topic | Type | Rate | Content |
|---|---|---|---|
| `/mecanumbot/odom` | `nav_msgs/Odometry` | 100 Hz | Estimated robot pose and velocity |
| `/mecanumbot/imu` | `sensor_msgs/Imu` | 100 Hz | Orientation, angular velocity, linear acceleration |
| `/mecanumbot/joint_states` | `sensor_msgs/JointState` | 100 Hz | 7 joints: 4 wheels + neck + 2 gripper fingers |
| `/mecanumbot/battery_state` | `sensor_msgs/BatteryState` | 100 Hz | Voltage, capacity, percentage |
| TF `odom → base_footprint` | — | 100 Hz | Odometry transform |

### Parameters
| Parameter | Default | Description |
|---|---|---|
| `robot_params.wheel.vel_tick` | `0.229` | One tick in rot/min |
| `robot_params.wheel.radius` | `0.0325` m | Wheel radius |
| `robot_params.wheel.sep_x` | `0.129` m | Front-back separation |
| `robot_params.wheel.sep_y` | `0.300` m | Left-right separation |
| `robot_params.battery.min_voltage` | `9.9` V (YAML: `11.0`) | 0% battery reference |
| `robot_params.battery.max_voltage` | `12.6` V | 100% battery reference |
| `odom_params.frame_id` | `odom` | Odometry frame |
| `odom_params.child_frame_id` | `base_footprint` | Robot body frame |
| `odom_params.from_imu` | `false` (YAML: `true`) | Use IMU quaternion for yaw instead of integration |
| `imu_params.frame_id` | `imu_link` | IMU frame ID |

### Key Logic

**Mecanum forward kinematics** — from 4 wheel velocity ticks:
```
Vx = (BL + BR + FL + FR) / 4 * scale
Vy = (BL - BR - FL + FR) / 4 * scale
Wz = (-BL + BR - FL + FR) / 4 * scale / wheel_dist_scale
```

**Odometry integration:**
```
x += cos(yaw) * Vx * dt - sin(yaw) * Vy * dt
y += sin(yaw) * Vx * dt + cos(yaw) * Vy * dt
yaw += Wz * dt
```

**Joint states:** Wheel positions reported as `0.0` (not tracked). Neck/gripper converted from ticks:
`angle = MIDPOINT_COMPENSATE_CONSTANT - pos_ticks * TICK_TO_RAD`
where `TICK_TO_RAD = 0.005061` and `MIDPOINT_COMPENSATE_CONSTANT = 2.618` (150° offset).

**Battery percentage:** `(V - min_voltage) / (max_voltage - min_voltage)`

---

## `mecanumbot_led_service_node`
**Package:** `mecanumbot_led` | **File:** `mecanumbot_led/led_control_node.py`

**What it does:** Provides ROS2 services to set and get the state of the four corner LED strips by communicating with an Arduino Nano over serial at `/dev/arduino_nano` (115200 baud). The device path is hardcoded (not a parameter).

### Services
| Service | Type | What happens |
|---|---|---|
| `/set_led_status` | `mecanumbot_msgs/srv/SetLedStatus` | Builds a 12-byte serial packet and sends to Arduino. `duration_ms` hardcoded to 1000. |
| `/get_led_status` | `mecanumbot_msgs/srv/GetLedStatus` | Sends `REQUEST_BYTE (0xAC)`, reads back 9-byte feedback packet (8 data + XOR checksum) |

### Key Logic

**Outgoing packet:** `[0xAA, FL_mode, FL_color, FR_mode, FR_color, BL_mode, BL_color, BR_mode, BR_color, tL, tH, checksum]`
- `tL/tH` = low/high byte of `duration_ms` (hardcoded 1000)
- `checksum` = XOR of all 8 mode/color bytes + tL + tH

**Incoming feedback:** Looks for `0xAB` start byte. State machine in `read_feedback()` accumulates 9 bytes then validates XOR checksum.

**LED Modes:** 1=WAVE_RIGHT, 2=WAVE_LEFT, 3=PULSE, 4=SOLID

**LED Colors:** 0=BLACK, 1=WHITE, 2=GREEN, 3=RED, 4=BLUE, 5=CYAN, 6=PINK, 7=YELLOW

---

## `accessory_monitor`
**Package:** `mecanumbot_monitor` | **File:** `mecanumbot_monitor/accessory_monitor.py`

**What it does:** A debug/test node. Runs a scripted sequence of neck + gripper movements 7 times, then stops. Not for production use.

### Publications
| Topic | Type | Content |
|---|---|---|
| `cmd_accessory_pos` | `mecanumbot_msgs/AccessMotorCmd` | Neck and gripper position commands |

### Key Logic
State machine on a 0.5 s timer. Each loop: idle 5 counts (2.5 s) → execute 4 states:
- State 0: cam up (`n_pos = 8.6`)
- State 1: gripper half-open
- State 2: cam to midpoint (`n_pos = 5.3`)
- State 3: gripper half-close

Repeats 7 times. **Bug:** `main()` is called recursively inside the `finally` block (line 79).

---

## `wheel_monitor`
**Package:** `mecanumbot_monitor` | **File:** `mecanumbot_monitor/wheel_monitor.py`

**What it does:** A debug/test node. Sweeps forward velocity from 0 to ~0.27 m/s in 0.01 m/s steps every 0.5 s, repeating 6 times.

### Publications
| Topic | Type | Content |
|---|---|---|
| `cmd_vel` | `geometry_msgs/Twist` | Linearly increasing forward velocity |

---

## `mecanumbot_lidar_detect_people` (DrSpaamNode)
**Package:** `mecanumbot_sensorprocess_smart` | **File:** `mecanumbot_sensorprocess_smart/mecanumbot_lidar_detect_people.py`

**What it does:** Runs the DR-SPAAM deep learning detector on 2D LiDAR scans to detect and localize people. Transforms detections into map frame via TF. In `leading_mode`, publishes the first detection as the "subject" pose for the behaviour tree.

### Subscriptions
| Topic | Type | What happens |
|---|---|---|
| `/mecanumbot/scan` (`scan` param) | `sensor_msgs/LaserScan` | Preprocessed and fed to DR-SPAAM detector |

### Publications
| Topic | Type | Content |
|---|---|---|
| `/mecanumbot/dets` | `geometry_msgs/PoseArray` | All detected person poses in sensor frame |
| `/mecanumbot/dets_marker` | `visualization_msgs/Marker` | RViz circles around each detection |
| `/mecanumbot/subject_pose` | `geometry_msgs/PoseStamped` | Map-frame pose of first detection (leading_mode only) |

### Parameters
| Parameter | Default | Description |
|---|---|---|
| `weight_file` | `dr_spaam_5_on_frog.pth` | PyTorch model checkpoint |
| `conf_thresh` | `0.85` | Confidence threshold |
| `stride` | `1` | DR-SPAAM inference stride |
| `scan_topic` | `scan` | Input scan topic |
| `detections_topic` | `dets` | Output topic for all detections |
| `rviz_topic` | `dets_marker` | Output topic for RViz visualization |
| `leading_mode` | `true` | Whether to publish `subject_pose` |

### Key Logic
Per-scan pipeline:
1. Replace zeros/NaN/Inf with neighbor-average interpolation
2. Resample to exactly **240 points** (hardcoded — must match model training config)
3. Run `self.detector(scan)` → `dets_xy`, `dets_cls`
4. Filter by `conf_thresh ≥ 0.85`
5. Apply `dets_xy = -1 * dets_xy` (coordinate system flip)
6. Look up TF transform `mecanumbot/base_scan → map`
7. Publish `subject_pose` using `dets_msg.poses[0]` (always first detection, no tracking)

---

## `mecanumbot_joystick` (MecanumbotJoyTeleop)
**Package:** `mecanumbot_teleop` | **File:** `mecanumbot_teleop/script/teleop_joystick.py`

**What it does:** Reads joystick input and publishes velocity and accessory commands at 3 Hz.

### Subscriptions
| Topic | Type | What happens |
|---|---|---|
| `/joy` | `sensor_msgs/Joy` | Axes mapped to velocity, buttons to accessories |

### Publications
| Topic | Type | Rate |
|---|---|---|
| `/cmd_vel` | `geometry_msgs/Twist` | 3 Hz |
| `/cmd_accessory_pos` | `mecanumbot_msgs/AccessMotorCmd` | 3 Hz |

### Key Logic
- Left stick Y axis → `linear.x` (max 0.234 m/s)
- Left stick X axis → `linear.y` (max 0.234 m/s)
- Right stick X axis → `angular.z` (max 1.092 rad/s)
- Deadzone: 0.05 (inputs below this are zeroed)
- Y button → cam max position (8.6)
- A button → cam mid position (5.3)
- X button → gripper open
- B button → gripper close
- Back button → emergency stop (zero all velocities)

---

## `mecanumbot_ledgui_client` (App + LedClient)
**Package:** `mecanumbot_ledgui` | **File:** `mecanumbot_ledgui/mecanumbot_ledgui.py`

**What it does:** Tkinter desktop GUI on the operator's PC. Shows dropdowns for color and mode per LED corner (FL, FR, BL, BR). Can save/load named configurations to `led_configs.json`. Calls `set_led_status` and `get_led_status` services. Launches with `ros2 launch mecanumbot_ledgui mecanumbot_ledgui.launch.py`.

---

## Behaviour Tree Nodes (mecanumbot_leading_behaviour)

These are **not standalone ROS2 nodes**. They are `py_trees.behaviour.Behaviour` subclasses that run inside a `py_trees_ros.trees.BehaviourTree`. The tree itself has one ROS node.

Three tree configurations exist — see `tree_nodes/`:

| Executable | File | Tick rate | Description |
|---|---|---|---|
| `bottom_up_tree_node` | `bottom_up_tree.py` | 100 Hz | LED-based guiding |
| `bottom_up_tree_node` | `ctrl_tree.py` | 100 Hz | Simple approach + turn, no signals |
| `doglike_leading_bt_node` | `dog_tree.py` | 10 Hz | Full dog-like guiding with gestures |

### Behaviour Classes

**`ConstantParamsToBlackboard`** (`blackboard_managers.py`)
Reads `behaviour_setting_constants.yaml` at tree setup and populates all blackboard keys. Fires the initial LED command (`LED_start_setting`) on `initialise()`. Always returns SUCCESS.

**`DistanceToBlackboard`** (`blackboard_managers.py`)
Subscribes to `/amcl_pose` and `/mecanumbot/subject_pose`. Computes and writes to blackboard:
- `robot_distance_from_subject`, `subject_within_robot_threshold`
- `distance_from_target`, `target_within_robot_threshold`
- `target_distance_from_subject`, `target_within_subject_threshold`

**`TurnToward`** (`movement_managers.py`)
Publishes a `PoseStamped` goal to `/goal_pose` with the robot's current position but oriented to face either the subject or the target. Monitors `/navigate_to_pose/_action/status` to detect completion. Returns SUCCESS when Nav2 reports SUCCEEDED.

**`Approach`** (`movement_managers.py`)
Navigates toward a target position. Two modes:
- `"exact"`: go all the way to within `robot_closeness_threshold`
- `"fixed_distance"`: take one step of `robot_approach_distance` at a time

If subject not seen for `visibility_time_threshold` seconds, falls back to the checkpoint most aligned with the last known subject direction.

**`CheckSubjectTargetSuccess`** (`movement_managers.py`)
Returns SUCCESS if the subject is within `target_reached_threshold` of `target_position`, FAILURE otherwise.

**`LEDBehaviourSequence`** (`LED_behaviours.py`)
Steps through a list of `SetLedStatus` service calls with delays. Three modes:
- `indicate_target`: white blink (1s per state)
- `catch_attention`: white pulse (1.5s on, 0.5s off)
- `indicate_close_target`: yellow blink (0.5s per state)

**`DogBehaviourSequence`** (`dog_behaviours.py`)
Steps through a list of `AccessMotorCmd` messages (neck + gripper poses) with delays. Two modes:
- `indicate_target`: rapid gripper open/close (0.25s steps)
- `catch_attention`: neck nod up/down (0.25s steps)

**`DogCheckFollowing`** (`dog_behaviours.py`)
Compares current subject distance to `last_distance`. Returns FAILURE if distance increased by more than `Dog_following_max_threshold`, or if subject has wandered more than `Dog_max_wander_allowed` times.

**`DogSelectTarget`** (`dog_behaviours.py`)
Finds the closest checkpoint to the robot's current AMCL pose, then sets `Dog_current_checkpoint` to that index + 1 (to always target the next checkpoint forward).
