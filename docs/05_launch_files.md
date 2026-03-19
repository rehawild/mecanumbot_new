# 05 — Launch File Breakdown

All launch files and what they start. Organized by where they run (robot vs. PC).

---

## Robot Launch Files (`src/mecanumbot/mecanumbot_bringup/launch/`)

### `launch_mecanumbot_base.launch.py`
**Use this to:** Start the robot. Run this on the Raspberry Pi at bringup.

Nodes started:
- `mecanumbot_io_node` — hardware I/O, namespace `mecanumbot`, loads `mecanumbot_core_parameters.yaml`
- `mecanumbot_sensorproc_node` — sensor processing, namespace `mecanumbot`, loads same YAML
- `ld08_driver` — LiDAR driver, namespace `mecanumbot`, port `/dev/ttyUSB0`, frame `mecanumbot/base_scan`
- Includes `mecanumbot_state_publisher.launch.py` (see below)

Remappings: `/mecanumbot/cmd_vel` → `/cmd_vel`, `/mecanumbot/cmd_accessory_pos` → `/cmd_accessory_pos`

Launch args:
- `namespace` (default: `mecanumbot`)
- `use_sim_time` (default: `false`)

Alias on robot: `start_robot` or `start_robot_with_led`

---

### `mecanumbot_state_publisher.launch.py`
**Use this to:** Publish the robot URDF and TF tree. Always included by `launch_mecanumbot_base`.

Nodes started:
- `robot_state_publisher` — reads the URDF from `mecanumbot_description`, publishes static TF frames and joint transforms

---

### `mapping.launch.py`
**Use this to:** Create a new map of the environment using SLAM.

Likely starts SLAM toolbox or cartographer with `mecanumbot_slam_mapping.yaml`. *(Full content not read—inferred from name and param file.)*

---

### `map.launch.py`
**Use this to:** Navigate with a pre-built map (AMCL localization + Nav2 planner/controller).

---

### `camera.launch.py`
**Use this to:** Start the PiCamera stream.

---

### `rviz2.launch.py`
**Use this to:** Open RViz2 with the pre-configured `model.rviz` layout for visualization.

---

## Behaviour Tree Launch Files (`src/mecanumbot_behaviours/mecanumbot_leading_behaviour/launch/`)

### `launch_bottomup.launch.py`
**Use this to:** Run the **LED-based guiding** behaviour tree (light signals only, no gestures).

Nodes started:
- `bottom_up_tree_node` (executable from `mecanumbot_leading_behaviour`)

Parameters: loads `behaviour_setting_constants.yaml`

Remappings: `/mecanumbot/cmd_vel` → `/cmd_vel`, `/mecanumbot/cmd_accessory_pos` → `/cmd_accessory_pos`

Launch args:
- `params` (default: `behaviour_setting_constants.yaml`)
- `namespace` (default: `mecanumbot`)

---

### `launch_doglike_sequence.launch.py`
**Use this to:** Run the **full dog-like guiding** behaviour tree with neck/gripper gestures.

Nodes started:
- `doglike_leading_bt_node` (executable from `mecanumbot_leading_behaviour`)

Same parameters and remappings as `launch_bottomup`.

---

### `launch_control_sequence.launch.py`
**Use this to:** Run the **simpler control tree** — approach + turn only, no LED or gesture signals.

Nodes started:
- `bottom_up_tree_node` (but using `ctrl_tree.py` logic)

---

### `launch_LED_sequence.launch.py`
**Use this to:** Run the **LED-only sequence** tree (no movement). *(Full content not read.)*

---

## Remote/PC Launch Files (`src/mecanumbot_remote/`)

### `mecanumbot_peopledetect.launch.py`
**Use this to:** Start the DR-SPAAM person detector on the PC.

Nodes started:
- `mecanumbot_lidar_detect_people` (namespace `mecanumbot`), loads `lidar_peopledetect_config.yaml`

Must be running for the behaviour trees to receive `/mecanumbot/subject_pose`.

---

### `launch_joy_teleop.launch.py`
**Use this to:** Start joystick teleoperation from the PC.

Nodes started: `mecanumbot_joystick` (teleop_joystick.py). Requires a joy driver (e.g., `ros2 run joy joy_node`) to be running separately.

---

### `mecanumbot_ledgui.launch.py`
**Use this to:** Open the Tkinter LED control GUI on the PC.

Nodes started: `mecanumbot_ledgui_client`

---

## Typical Startup Sequences

### Manual teleoperation
```bash
# On robot (Pi):
ros2 launch mecanumbot_bringup launch_mecanumbot_base.launch.py
ros2 run mecanumbot_led mecanumbot_led_service   # optional, for LEDs

# On PC:
ros2 run joy joy_node
ros2 launch mecanumbot_teleop launch_joy_teleop.launch.py
# or keyboard:
ros2 run mecanumbot_teleop mecanumbot_keyboard
```

### Autonomous guiding (dog-like)
```bash
# On robot (Pi):
ros2 launch mecanumbot_bringup launch_mecanumbot_base.launch.py
ros2 run mecanumbot_led mecanumbot_led_service
ros2 launch mecanumbot_bringup map.launch.py   # Nav2 + AMCL

# On PC:
ros2 launch mecanumbot_sensorprocess_smart mecanumbot_peopledetect.launch.py
ros2 launch mecanumbot_leading_behaviour launch_doglike_sequence.launch.py
```
