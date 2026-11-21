[中文说明](README_CN.md)

# Omniglove ROS 2 Component

This installed package provides a composable lifecycle component and a
standalone `ros2 run` executable. It discovers supported gloves automatically
and publishes enabled POSEDATA and POSTDATA streams below each device UID.

For overlay setup, launch, lifecycle control, service examples, and parameter
configuration, see the [overlay guide](../../README.md).

## Topics

```text
<topic_root>/uid_<16-digit-hex-uid>/posedata
<topic_root>/uid_<16-digit-hex-uid>/posedata_tactile_position_v1
<topic_root>/uid_<16-digit-hex-uid>/postdata
```

`PoseSample` and `PostSample` contain `metadata` and `data`.
`PoseTactilePositionSample` additionally contains `tac_pos`; its 746 XYZ points
use metres in the wrist frame and share the tactile-value array's flattened
index. Each tactile value is a `uint8` in the range `0..255` with a resolution
of `1 g/LSB`; spatial coordinates remain in metres. Published messages own
their data.

## Configuration and services

Startup-only settings are read-only ROS parameters. They include the device UID
allow-list, topic root, QoS, discovery and control timing, plus each stream's
enable flag, `stream_mode`, required `source_interval_ms`, source timeout, and
callback queue capacity. `source_interval_ms` does not change the device data
rate. POSEDATA also provides `pose_components`.

Runtime services are available below the private node namespace:

- `~/list_devices`
- `~/get_pose_info`
- `~/set_stream_config`
- `~/get_stream_status`

Reconfiguration affects only the selected stream. Failure of one stream does
not stop the other stream.

## Data references

- [ROS 2 stream messages](../../docs/en/ROS2_STREAM_DATA_V1.md)

The matching platform SDK package contains the public C API and stream-layout
documentation.
