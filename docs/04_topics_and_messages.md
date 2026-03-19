# 04 — Topics, Services & Message Types

---

## Topic Map

| Topic | Message Type | Publisher → Subscriber(s) |
|---|---|---|
| `/mecanumbot/opencr_state` | `mecanumbot_msgs/OpenCRState` | `mecanumbot_io_node` → `mecanumbot_sensorproc_node` |
| `/cmd_vel` | `geometry_msgs/Twist` | teleop / Nav2 / behaviour tree → `mecanumbot_io_node` |
| `/cmd_accessory_pos` | `mecanumbot_msgs/AccessMotorCmd` | teleop / behaviour tree → `mecanumbot_io_node` |
| `/mecanumbot/odom` | `nav_msgs/Odometry` | `mecanumbot_sensorproc_node` → Nav2 |
| `/mecanumbot/imu` | `sensor_msgs/Imu` | `mecanumbot_sensorproc_node` → Nav2 |
| `/mecanumbot/joint_states` | `sensor_msgs/JointState` | `mecanumbot_sensorproc_node` → `robot_state_publisher` |
| `/mecanumbot/battery_state` | `sensor_msgs/BatteryState` | `mecanumbot_sensorproc_node` → (operator monitoring) |
| `/mecanumbot/scan` | `sensor_msgs/LaserScan` | `ld08_driver` → `DrSpaamNode` + Nav2 |
| `/mecanumbot/dets` | `geometry_msgs/PoseArray` | `DrSpaamNode` → (visualization) |
| `/mecanumbot/dets_marker` | `visualization_msgs/Marker` | `DrSpaamNode` → RViz |
| `/mecanumbot/subject_pose` | `geometry_msgs/PoseStamped` | `DrSpaamNode` → behaviour tree behaviours |
| `/goal_pose` | `geometry_msgs/PoseStamped` | behaviour tree (`TurnToward`, `Approach`) → Nav2 |
| `/amcl_pose` | `geometry_msgs/PoseWithCovarianceStamped` | Nav2 AMCL → behaviour tree behaviours |
| `/navigate_to_pose/_action/status` | `action_msgs/GoalStatusArray` | Nav2 → `TurnToward`, `Approach` |
| `/joy` | `sensor_msgs/Joy` | joy driver → `MecanumbotJoyTeleop` |

---

## Service Map

| Service | Type | Server | Clients |
|---|---|---|---|
| `/set_led_status` | `mecanumbot_msgs/SetLedStatus` | `mecanumbot_led_service_node` | `LEDBehaviourSequence`, `ConstantParamsToBlackboard`, `mecanumbot_ledgui` |
| `/get_led_status` | `mecanumbot_msgs/GetLedStatus` | `mecanumbot_led_service_node` | `mecanumbot_ledgui` |

---

## Data Flow Narrative

The robot's operation starts with `mecanumbot_io_node` opening a serial port to the OpenCR microcontroller. The OpenCR continuously sends telemetry packets; the IO node's reader thread picks them up, validates them, and stores the latest. Every 10 ms, the timer callback publishes it as `OpenCRState`.

`mecanumbot_sensorproc_node` receives `OpenCRState` and converts it into standard ROS messages at 100 Hz. Odometry and TF are fed into Nav2, which uses them for AMCL localization and path planning.

The LD08 LiDAR driver publishes `LaserScan`. The DR-SPAAM node on the PC subscribes to this, runs the neural network, and publishes the closest person's map-frame pose as `/mecanumbot/subject_pose`.

The behaviour tree subscribes to `subject_pose` and `/amcl_pose`. Based on the state of the tree, it either sends navigation goals to Nav2 (via `/goal_pose`), fires LED sequences (via `/set_led_status` service calls), or sends accessory commands (via `/cmd_accessory_pos`) for expressive gestures. Nav2 translates navigation goals into `/cmd_vel` commands, which flow through `mecanumbot_io_node` to the physical wheels.

---

## Custom Message Types

### `mecanumbot_msgs/msg/OpenCRState`
The main hardware telemetry message. All wheel data is in raw integer **tick** units.

| Field | Type | Meaning |
|---|---|---|
| `header` | `std_msgs/Header` | Timestamp |
| `cmd_vel_bl/br/fl/fr` | `int16` | Commanded wheel velocities (ticks) |
| `vel_bl/br/fl/fr` | `int16` | Measured wheel velocities (ticks) |
| `pos_bl/br/fl/fr` | `int16` | Measured wheel encoder positions (ticks) |
| `curr_bl/br/fl/fr` | `int16` | Measured motor currents |
| `acc_bl/br/fl/fr` | `int16` | Measured wheel accelerations |
| `pos_n` | `int16` | Neck servo measured position (ticks) |
| `pos_gl` | `int16` | Left grabber servo measured position (ticks) |
| `pos_gr` | `int16` | Right grabber servo measured position (ticks) |
| `err_bl/br/fl/fr` | `int16` | Motor error codes (only present in 27-field firmware) |
| `battery_voltage` | `float32` | Battery voltage in Volts |
| `imu_angular_vel_x/y/z` | `float32` | Gyroscope (rad/s) |
| `imu_linear_acc_x/y/z` | `float32` | Accelerometer (m/s²) |
| `imu_magnetic_x/y/z` | `float32` | Magnetometer |
| `imu_orientation_w/x/y/z` | `float32` | Orientation quaternion from OpenCR IMU |

---

### `mecanumbot_msgs/msg/AccessMotorCmd`
Command message for the neck and gripper actuators. Values are in **radians** (scaled ×100 inside `mecanumbot_io_node` before being sent over serial).

| Field | Type | Meaning |
|---|---|---|
| `n_pos` | `float32` | Neck servo target position (rad) |
| `gl_pos` | `float32` | Left gripper servo target position (rad) |
| `gr_pos` | `float32` | Right gripper servo target position (rad) |

Useful position constants (from teleop/monitor code):
- Camera min: `2.0`, mid: `5.3`, max: `8.6`
- Gripper min: `1.6`, front/neutral: `5.12`, max: `8.54`

---

### `mecanumbot_msgs/msg/SensorState`
**Orphaned** — not published or subscribed to by any node in this repo. Inherited from the original TurtleBot3 port. Contains bumper, cliff, sonar, illumination, LED, button states, torque flag, 4 wheel encoders, and battery voltage.

---

## Custom Service Types

### `mecanumbot_msgs/srv/SetLedStatus`
**Request:**

| Field | Type | Meaning |
|---|---|---|
| `fl_mode` | `int8` | Front-left LED animation mode |
| `fl_color` | `int8` | Front-left LED color |
| `fr_mode` | `int8` | Front-right LED animation mode |
| `fr_color` | `int8` | Front-right LED color |
| `br_mode` | `int8` | Back-right LED animation mode |
| `br_color` | `int8` | Back-right LED color |
| `bl_mode` | `int8` | Back-left LED animation mode |
| `bl_color` | `int8` | Back-left LED color |

**Response:** `bool success`, `string message`

**Mode values:** 1=WAVE_RIGHT, 2=WAVE_LEFT, 3=PULSE, 4=SOLID

**Color values:** 0=BLACK, 1=WHITE, 2=GREEN, 3=RED, 4=BLUE, 5=CYAN, 6=PINK, 7=YELLOW

---

### `mecanumbot_msgs/srv/GetLedStatus`
**Request:** (empty)

**Response:** Same 8 mode/color fields as `SetLedStatus` request.

---

## Quick Reference: Test Commands

```bash
# Get current LED state
ros2 service call /get_led_status mecanumbot_msgs/srv/GetLedStatus "{}"

# Set all LEDs to solid red
ros2 service call /set_led_status mecanumbot_msgs/srv/SetLedStatus "{
  fl_mode: 4, fl_color: 3,
  fr_mode: 4, fr_color: 3,
  br_mode: 4, br_color: 3,
  bl_mode: 4, bl_color: 3
}"
```
