# 06 — Configuration & Parameters

All YAML parameter files in the codebase, what they control, and what operators typically need to change.

---

## `mecanumbot_description/param/mecanumbot.yaml`
**Loaded by:** `launch_mecanumbot_base.launch.py` (via `mecanumbot_core_parameters.yaml` reference)
**Affects:** `mecanumbot_io_node`, `mecanumbot_sensorproc_node`

This is the primary runtime configuration for on-robot nodes.

### Serial / Hardware
```yaml
mecanumbot_io_node:
  ros__parameters:
    dev_params:
      device_name: "/dev/ttyACM0"   # Change if port changes
      baudrate: 57600               # Must match OpenCR firmware (code default is 1000000!)
    packet_params:
      payload_fmt: "<23h14f"        # Must match OpenCR firmware (code default is <27h14f)
      magic: "55AA"
```
> **Warning:** `baudrate` and `payload_fmt` differ from the code defaults. The YAML values are what actually runs. If you update the OpenCR firmware, you may need to change both of these.

### Wheel Geometry
```yaml
robot_params:
  wheel:
    radius: 0.0325          # meters — change if wheels replaced
    separation_x: 0.129     # front-to-back distance between wheel centers (m)
    separation_y: 0.300     # left-to-right distance between wheel centers (m)
    vel_tick: 0.299         # meaning of one tick in rot/min
```
These values feed both the inverse kinematics (IO node) and forward kinematics (sensorproc node). If the physical robot dimensions change, update all four.

### Odometry
```yaml
mecanumbot_sensorproc_node:
  ros__parameters:
    odom_params:
      from_imu: true         # Use IMU quaternion for heading instead of integration
      frame_id: "odom"
      child_frame_id: "base_footprint"
```
> **Note:** `from_imu: true` is set but the IMU code path has a `#TODO` comment in the source. The behaviour may differ from pure wheel odometry integration.

### Battery
```yaml
    robot_params:
      battery:
        min_voltage: 11.0   # 0% reference (code default: 9.9 V)
        max_voltage: 12.6   # 100% reference
```

---

## `mecanumbot_sensorprocess_smart/config/lidar_peopledetect_config.yaml`
**Loaded by:** `mecanumbot_peopledetect.launch.py`
**Affects:** `DrSpaamNode`

```yaml
mecanumbot_lidar_detect_people:
  ros__parameters:
    weight_file: dr_spaam_5_on_frog.pth   # Model checkpoint filename
    conf_thresh: 0.85                      # Raise to reduce false positives
    stride: 1                              # DR-SPAAM inference stride
    scan_topic: scan
    detections_topic: dr_spaam/dets
    rviz_topic: dr_spaam/marker
```
**To swap the model:** Place a new `.pth` file in `mecanumbot_sensorprocess_smart/models/` and update `weight_file`.

**To tune detection sensitivity:** Lower `conf_thresh` (more detections, more false positives) or raise it (fewer false positives, may miss people).

---

## `mecanumbot_leading_behaviour/config/behaviour_setting_constants.yaml`
**Loaded by:** All three behaviour tree launch files
**Affects:** All behaviour tree nodes via the py_trees blackboard

This is the main file operators edit to configure a guiding mission.

### Mission Target
```yaml
target_position:
  - -2.76527    # X in map frame (meters)
  - -6.12262    # Y in map frame (meters)
  - 0.000       # Z (always 0 for 2D)
```
Change this to point to a different destination on the map.

### Checkpoints (Dog Mode)
```yaml
Dog_checkpoints:
  - "{'X':0.452756, 'Y':-0.713444, 'Z':0.0 }"
  - "{'X':-0.469606, 'Y':-0.640191, 'Z':0.0 }"
  - ...  # 6 points total
```
Waypoints the robot walks along when guiding. The last checkpoint should be near `target_position`. Must be in map coordinates (use RViz to read poses).

### Distance Thresholds
```yaml
robot_closeness_threshold: 0.25    # Robot stops this far from subject/target (m)
target_reached_threshold: 0.75     # Subject considered at target if within this distance (m)
robot_approach_distance: 1.0       # Step size in fixed_distance approach mode (m)
visibility_time_threshold: 5       # Seconds without seeing subject before fallback (s)
```

### Dog-Following Parameters
```yaml
Dog_following_max_threshold: 0.20  # Max distance increase per step before "lost" (m)
Dog_max_wander_allowed: 5          # Max number of wander events before giving up
```

### LED Sequences
Three sequences of `{fl, fr, bl, br} x {mode, color}` dicts:
- `LED_indicate_target_seq` + `LED_indicate_target_times`: White blink when showing target direction
- `LED_catch_attention_seq` + `LED_catch_attention_times`: White pulse when trying to get attention
- `LED_indicate_close_target_seq` + `LED_indicate_close_target_times`: Yellow blink when subject is close to target

Current config blinks all LEDs white (modes 1/4, color 1) or yellow (color 7).

### Dog Gesture Sequences
Two sequences of `{n_pos, gl_pos, gr_pos}` dicts (neck + gripper positions in radians):
- `Dog_indicate_target_seq`: Rapid gripper open/close (7 steps, 0.25s each)
- `Dog_catch_attention_seq`: Neck nod up/down (6 steps, 0.25s each)

---

## `mecanumbot_description/param/nav2_params.yaml`
**Affects:** Nav2 navigation stack (planner, controller, costmaps, AMCL)

Standard Nav2 parameter file. Key things operators may tune:
- Costmap inflation radius
- Planner type (NavFn, Smac)
- Controller type and speed limits
- AMCL particle count and sensor model

*(Full content not read — refer to Nav2 documentation for parameter reference.)*

---

## `mecanumbot_description/param/mecanumbot_slam_mapping.yaml`
**Affects:** SLAM toolbox during mapping sessions

Controls scan matching, loop closure, and map resolution. Modify if the map quality is poor.

---

## `mecanumbot_description/param/mecanumbot_custom_nav2.yaml`
**Affects:** Nav2 (custom overrides on top of `nav2_params.yaml`)

Used to apply robot-specific tuning without modifying the base Nav2 config.

---

## `mecanumbot_description/param/picamera_config.yaml`
**Affects:** PiCamera driver node

Camera resolution, framerate, and other capture settings.

---

## Summary: What to Change for Common Tasks

| Task | File | Parameter |
|---|---|---|
| Change destination | `behaviour_setting_constants.yaml` | `target_position` |
| Change waypoint path | `behaviour_setting_constants.yaml` | `Dog_checkpoints` |
| Adjust approach distance | `behaviour_setting_constants.yaml` | `robot_closeness_threshold`, `robot_approach_distance` |
| Tune person detection sensitivity | `lidar_peopledetect_config.yaml` | `conf_thresh` |
| Update OpenCR baud rate | `mecanumbot.yaml` | `dev_params.baudrate` |
| Update OpenCR firmware packet format | `mecanumbot.yaml` | `packet_params.payload_fmt` |
| Change wheel dimensions | `mecanumbot.yaml` | `robot_params.wheel.*` |
| Disable IMU-based heading | `mecanumbot.yaml` | `odom_params.from_imu: false` |
