# 01 — What This System Does & Package Overview

## What This System Does

Mecanumbot is a ROS2 (Humble) project for a custom robot built on the TurtleBot3 platform that uses a mecanum wheel drivetrain for omnidirectional movement. In addition to four independently driven mecanum wheels, the robot has a camera on a servo neck and a two-finger gripper. The system handles hardware I/O (serial communication with an OpenCR microcontroller for motor control, a separate Arduino Nano for corner LED strips), sensor processing (odometry, IMU, battery, joint states), a 2D LiDAR-based person detector (DR-SPAAM deep learning model), and high-level behaviour trees for a "robot guide" use case—detecting a human, approaching them, and physically leading them to a target location using LED signals and expressive body movements.

---

## Package Overview

The codebase is split across four top-level source directories under `src/`:

### On-Robot Packages (`src/mecanumbot/`)
These run on the **Raspberry Pi** mounted on the robot.

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot` | Meta-package, no code | — |
| `mecanumbot_bringup` | Launch files that assemble the robot at startup | Python launch |
| `mecanumbot_core` | Hardware I/O and sensor processing nodes | Python |
| `mecanumbot_description` | URDF robot model, maps, parameter YAML files | XML/YAML |
| `mecanumbot_led` | ROS2 service wrapper for the Arduino Nano LED controller | Python |
| `mecanumbot_monitor` | Debug/test nodes to exercise motors and accessories | Python |

### Custom Messages (`src/mecanumbot_msgs/`)

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_msgs` | Custom `.msg` and `.srv` definitions for this robot | CMake/ROS IDL |

### Behaviour Packages (`src/mecanumbot_behaviours/`)
These implement the high-level guiding intelligence, run on the **PC**.

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_behaviours` | Meta-package | — |
| `mecanumbot_leading_behaviour` | py_trees behaviour trees for human-following and guiding | Python |

### Remote/PC Packages (`src/mecanumbot_remote/`)
These run on the **operator's PC**, connected over the network.

| Package | Purpose | Language |
|---|---|---|
| `mecanumbot_ledgui` | Tkinter GUI to control LEDs interactively | Python |
| `mecanumbot_sensorprocess_smart` | DR-SPAAM 2D LiDAR person detection node | Python |
| `mecanumbot_teleop` | Keyboard and joystick teleoperation | Python |

---

## Hardware Summary

| Hardware | Interface | Purpose |
|---|---|---|
| OpenCR microcontroller | `/dev/ttyACM0` serial @ 57600 baud | Drives 4 mecanum wheel motors + neck + 2 gripper servos |
| Arduino Nano | `/dev/arduino_nano` serial @ 115200 baud | Controls 4 corner LED strips (WS2812-style) |
| LD08 2D LiDAR | `/dev/ttyUSB0` | 360° laser scan for navigation and person detection |
| Raspberry Pi GPIO 27 | wiringpi | RS-485 direction signal (DE/RE pin) for the OpenCR serial line |
| PiCamera | camera driver | RGB camera on the servo neck |
