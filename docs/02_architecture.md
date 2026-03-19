# 02 — System Architecture Narrative

## The Big Picture

The Mecanumbot is a multi-layered system split across two compute platforms. The Raspberry Pi on the robot runs the real-time-critical packages: hardware I/O, sensor processing, LiDAR driver, and the robot model publisher. An external PC (connected over the same ROS2 DDS network using CycloneDDS middleware with `ROS_DOMAIN_ID=19`) runs the perception pipeline, the behaviour trees, and teleoperation tools.

---

## Layer 1 — Hardware Communication

The hardware communication layer is built around two serial connections.

**OpenCR (primary):** `/dev/ttyACM0` connects to an OpenCR microcontroller that drives the four DYNAMIXEL-compatible wheel motors and three accessory servo motors (neck + two gripper fingers). Communication uses a custom binary protocol:
- **Incoming** (OpenCR → Pi): 2-byte magic header `0x55AA` + 1-byte sequence + payload (`<27h14f` or `<23h14f` depending on firmware) + CRC8. Carries all motor feedback and full IMU data.
- **Outgoing** (Pi → OpenCR): Simple 7-element int16 array `<7h`: [BL_vel, BR_vel, FL_vel, FR_vel, N_pos, GL_pos, GR_pos].

**Arduino Nano (secondary):** `/dev/arduino_nano` controls four independent corner LED strips. A separate 12-byte packet protocol with XOR checksum is used. GPIO pin 27 on the Pi acts as an RS-485 half-duplex direction control signal (toggled HIGH before writing, LOW after a 100 ms delay).

---

## Layer 2 — Sensor Processing & Odometry

`mecanumbot_sensorproc_node` converts raw OpenCR telemetry into standard ROS2 messages at 100 Hz:
- Wheel velocity ticks → body velocity via mecanum forward kinematics → integrated odometry
- IMU quaternion, angular velocity, linear acceleration → `sensor_msgs/Imu`
- Battery voltage → `sensor_msgs/BatteryState`
- Servo tick positions → joint angles → `sensor_msgs/JointState`

Odometry and TF (`odom → base_footprint`) feed into **Nav2**, which runs AMCL particle filter localization using the pre-built map. AMCL publishes the robot's estimated map-frame pose as `/amcl_pose`. This is the **only localization source**—there is no GPS or visual-inertial odometry.

---

## Layer 3 — Perception

The DR-SPAAM node (`mecanumbot_sensorprocess_smart`) runs on the PC and subscribes to `/mecanumbot/scan`. For each scan:
1. Fill invalid points with neighbor-average interpolation
2. Resample to 240 points (hardcoded model requirement)
3. Run PyTorch DR-SPAAM inference
4. Filter by confidence ≥ 0.85
5. Transform detections from sensor frame to map frame via TF
6. Publish the **first** detection as `/mecanumbot/subject_pose` — the person the robot is supposed to guide

---

## Layer 4 — Navigation

Nav2 handles all path planning and obstacle avoidance. The behaviour tree does **not** compute paths itself — it only sends high-level goals to `/goal_pose`. Nav2 translates those into `/cmd_vel` commands, which flow through `mecanumbot_io_node` to the physical wheels.

---

## Layer 5 — Behaviour (High-Level Intelligence)

Three `py_trees` behaviour tree configurations implement different experiment conditions for the "robot guide" task:

| Tree | File | Description |
|---|---|---|
| `bottom_up_tree_node` | `bottom_up_tree.py` | LED-based guiding (light signals only) |
| `bottom_up_tree_node` | `ctrl_tree.py` | Simple approach + turn sequence, no signals |
| `doglike_leading_bt_node` | `dog_tree.py` | Full dog-like guiding with neck/gripper gestures |

The **dog_tree** is the most complete. Its protocol:
1. Approach the subject, perform an attention-catching gesture (neck nods)
2. Select the nearest checkpoint along the pre-configured path
3. Walk toward the checkpoint; periodically check the subject is still following (distance comparison)
4. When turning toward a target, perform directional indication gestures (gripper open/close)
5. Repeat until subject reaches `target_position`

The tree reads all configuration from the **py_trees blackboard**, which is populated from `behaviour_setting_constants.yaml` at startup by `ConstantParamsToBlackboard`.

---

## Data Flow Summary

```
LiDAR (LD08)
  └─► /mecanumbot/scan
        ├─► Nav2 (costmaps, obstacle avoidance)
        └─► DR-SPAAM node
              └─► /mecanumbot/subject_pose

OpenCR (serial)
  └─► mecanumbot_io_node
        └─► /mecanumbot/opencr_state
              └─► mecanumbot_sensorproc_node
                    ├─► /mecanumbot/odom  ──► Nav2 (AMCL)
                    ├─► /mecanumbot/imu
                    ├─► /mecanumbot/joint_states
                    └─► TF: odom → base_footprint

Nav2 AMCL
  └─► /amcl_pose ──► Behaviour Tree behaviours

Behaviour Tree
  ├─► /goal_pose ──► Nav2
  ├─► /set_led_status ──► mecanumbot_led_service_node ──► Arduino (serial) ──► LEDs
  └─► /cmd_accessory_pos ──► mecanumbot_io_node ──► OpenCR (serial) ──► Neck/Gripper

Nav2
  └─► /cmd_vel ──► mecanumbot_io_node ──► OpenCR (serial) ──► Wheels
```
