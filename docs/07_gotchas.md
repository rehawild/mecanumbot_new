# 07 — Gotchas, Bugs & Non-Obvious Things

Things that will surprise you if you don't know about them. Read this before touching any code.

---

## 1. Packet Format Mismatch Between YAML and Code
**Files:** `mecanumbot_IO_node.py` vs `mecanumbot.yaml`

The code default for `payload_fmt` is `<27h14f` (27 × int16 + 14 × float32 = 82 bytes of payload), but `mecanumbot.yaml` overrides it to `<23h14f` (23 × int16 + 14 × float32 = 74 bytes).

This implies two different OpenCR firmware versions exist. The `OpenCRState.msg` defines 27 int16 fields (including `err_bl/br/fl/fr`), so when running with the 23-field format (which is what actually runs via the YAML), the four error fields are **never populated**.

Similarly, `baudrate` defaults to `1000000` in code but the YAML sets it to `57600`. The YAML always wins when launched via `launch_mecanumbot_base.launch.py`.

> **Rule:** If you update the OpenCR firmware, check both `payload_fmt` and `baudrate` in `mecanumbot.yaml`.

---

## 2. The 100 ms Serial Write Delay Limits Command Rate
**File:** `mecanumbot_IO_node.py`, `update_motor_cmds_out()`

Inside the serial write, there is a `time.sleep(0.1)` (100 ms) call while a `cmd_lock` is held. This means:
- Motor commands can only be sent at ~10 Hz maximum
- Any thread trying to acquire `cmd_lock` during this sleep will block for up to 100 ms
- GPIO 27 is toggled HIGH before the write and LOW after the sleep — this is RS-485 direction control

This is probably intentional for RS-485 timing, but it means the effective motor command rate is 10 Hz even though the velocity subscription can fire faster.

---

## 3. All Three Behaviour Trees Share the Same Node Name
**Files:** `bottom_up_tree.py`, `ctrl_tree.py`, `dog_tree.py`

All three trees call `tree_node.setup(node_name="bottom_up_tree_node")`. This means:
- All three read parameters from the YAML key `bottom_up_tree_node`
- Running two trees simultaneously on the same machine will cause a **node name collision**
- The `ctrl_tree.py` and `bottom_up_tree.py` executables are both named `bottom_up_tree_node` even though they do different things

---

## 4. `accessory_monitor` Calls `main()` Recursively
**File:** `mecanumbot_monitor/accessory_monitor.py`, line ~79

Inside the `finally` block:
```python
finally:
    executor.shutdown()
    monitor_node.destroy_node()
    if rclpy.ok():
        rclpy.shutdown()
    main()   # <--- BUG: recursive call
```
Every keyboard interrupt or error will call `main()` again, growing the stack. `wheel_monitor.py` does not have this bug.

---

## 5. DR-SPAAM Always Uses the First Detection as the Subject
**File:** `mecanumbot_lidar_detect_people.py`, `_parse_subject_pose()`

```python
ps_msg.position.x = dets_msg.poses[0].position.x
ps_msg.position.y = dets_msg.poses[0].position.y
```

DR-SPAAM returns detections in scan order, not sorted by confidence or proximity. In a multi-person environment, `poses[0]` can jump between different people as they move around the scan. **There is no person tracking or identity assignment.**

---

## 6. DR-SPAAM XY Axes Are Swapped and Negated
**File:** `mecanumbot_lidar_detect_people.py`

```python
dets_xy = -1 * dets_xy          # sign flip
# ...
p.position.x = xy[1]            # swap x and y
p.position.y = xy[0]
```

Both operations together adjust for the detector's internal coordinate convention vs. ROS convention (x forward, y left). If you change the LiDAR mount orientation or swap to a different detector, this will need to be revisited.

---

## 7. `read_feedback()` Has Global Singleton State
**File:** `mecanumbot_led/led_control_node.py`

```python
def read_feedback(ser):
    static = read_feedback.__dict__   # function's own dict used as static storage
    if "state" not in static:
        static["state"] = 0
        static["buf"] = []
```

This stores the state machine variables on the function object itself. It works, but means only one instance of `read_feedback` can be active at a time—if you create multiple `LedServiceNode` instances, they share the same state machine.

---

## 8. LED `duration_ms` Is Hardcoded and Cannot Be Changed via Service
**File:** `mecanumbot_led/led_control_node.py`

```python
self.duration_ms = 1000   # hardcoded, never changes
```

The `SetLedStatus` service request has no `duration` field. The 2-byte duration in the Arduino serial packet is always 1000 ms (1 second). If the Arduino firmware uses this for timing LED animations, you must modify the Python source to change it.

---

## 9. `DogSelectTarget` Always Targets the Next Checkpoint, Not the Closest
**File:** `mecanumbot_leading_behaviour/behaviours/dog_behaviours.py`, `select_closest_ckpt()`

```python
if closest_index != self.blackboard.Dog_max_checkpoint:
    closest_index += 1
```

After finding the closest checkpoint to the robot, the index is incremented by 1. The robot always drives to the checkpoint *after* the nearest one. This ensures forward progress but can cause unexpected large jumps if the robot is placed out of sequence.

---

## 10. Velocity Clamping Is Silent
**File:** `mecanumbot_IO_node.py`, `vel_cmd_callback()`

```python
self.cmd_outputs['BL_vel'] = max(min(bl_raw, 300), -300)
```

Wheel velocities are clamped to ±300 ticks with no warning logged. The teleop maximum (0.234 m/s) produces exactly ~300 ticks, so under normal teleoperation this clamp never fires. But if a behaviour sends a large velocity command, it will be silently saturated.

---

## 11. The Scan Is Resampled to 240 Points — Hardcoded
**File:** `mecanumbot_lidar_detect_people.py`

```python
def scan_callback(self, msg: LaserScan, expected_points=240):
    ...
    scan = interpolate_scan(scan, expected_points)
```

240 is a hardcoded default argument. The LD08 LiDAR produces a different number of points per rotation, so interpolation is always applied. If you switch to a different LiDAR with a scan count that happens to match, interpolation still runs. If the DR-SPAAM model was trained with a different point count, inference quality will degrade.

---

## 12. Wheel Joint Positions Are Always Zero
**File:** `mecanumbot_sensorproc_node.py`, `set_joint_state()`

```python
msg.position = [0.0, 0.0, 0.0, 0.0, *access_posis]
```

The four wheel joint positions are hardcoded to 0.0. The OpenCR does report wheel encoder positions (`pos_bl/br/fl/fr` in `OpenCRState`), but they are not used here. This means the wheel meshes in RViz do not rotate.

---

## 13. `SensorState.msg` Is Orphaned TurtleBot3 Baggage
**File:** `mecanumbot_msgs/msg/SensorState.msg`

This message type defines bumper, cliff, sonar, LED, button, torque, encoder, and battery fields — copied directly from the original `turtlebot3_msgs`. No node in this repo publishes or subscribes to it. It is safe to ignore; do not delete it unless you are sure no external tools depend on it.

---

## 14. Behaviour Tree Tick Rates Differ Significantly
**Files:** `bottom_up_tree.py` (100 Hz), `dog_tree.py` (10 Hz), `ctrl_tree.py` (100 Hz)

The dog behaviour tree ticks at 10 Hz, 10× slower than the others. This is likely intentional to avoid flooding Nav2 with new goals on every tick. But it means state changes (e.g., subject lost, goal succeeded) are only evaluated every 100 ms in dog mode.

---

## 15. `mecanumbot_core_parameters.yaml` File Was Missing
During analysis, the file referenced in `launch_mecanumbot_base.launch.py`:
```python
yaml_file = os.path.join(
    get_package_share_directory('mecanumbot_description'),
    'param',
    'mecanumbot_core_parameters.yaml'
)
```
...was not found at that path. The actual configuration lives in `mecanumbot.yaml` in the same directory. Either the file is generated at build time or the launch file has a path mismatch. Verify this before deploying.
