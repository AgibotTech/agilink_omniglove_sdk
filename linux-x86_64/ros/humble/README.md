[中文说明](README_CN.md)

# Omniglove ROS 2 Overlay

This directory is a prebuilt ROS 2 overlay for the distribution and architecture
recorded in `BUILD_INFO.txt`. It provides:

- `omniglove_interfaces`: public messages and services;
- `omniglove_node`: a composable lifecycle component and a standalone
  `ros2 run` executable.

The component exposes POSEDATA and POSTDATA through strongly typed ROS messages.
REMOTEDATA is not exposed by this ROS interface.

## Requirements

Install the matching Omniglove SDK from the same release delivery into
`/usr/local` before using the overlay:

```bash
cd /path/to/release/linux-<arch>
sudo ./install.sh /usr/local
```

Use `BUILD_INFO.txt` for the required ROS distribution, architecture, and SDK
version. The component rejects an incompatible SDK runtime.

## Set up and launch

Replace `<distro>` with the `ros_distro` value in `BUILD_INFO.txt`:

```bash
source /opt/ros/<distro>/setup.bash
source /path/to/overlay/setup.bash
ros2 launch omniglove_node omniglove.launch.py
```

Source both setup files in every new terminal. The overlay can be moved as one
directory; source its `setup.bash` after moving it. Do not source `setup.sh`.

The launch file starts a multithreaded component container with ROS
intra-process communication enabled. The same component can run as a standalone
process:

```bash
ros2 run omniglove_node omniglove_node --ros-args \
  --params-file /absolute/path/to/omniglove.yaml
```

The supplied configuration is
`share/omniglove_node/config/default.yaml`. Copy it before editing, then pass the
copy to the launch file:

```bash
cp share/omniglove_node/config/default.yaml /path/to/omniglove.yaml
ros2 launch omniglove_node omniglove.launch.py \
  parameters_file:=/path/to/omniglove.yaml
```

With `autostart: true`, the node configures and activates itself. If no selected
device is available, it remains unconfigured and retries at
`discovery_retry_ms` intervals. Omitting `device_uids` selects all discovered
devices. Do not use an empty `device_uids: []` sequence because ROS 2 YAML cannot
infer its element type.

To control the lifecycle manually:

```bash
ros2 run omniglove_node omniglove_node --ros-args -p autostart:=false

ros2 lifecycle get /omniglove_node
ros2 lifecycle set /omniglove_node configure
ros2 lifecycle set /omniglove_node activate
ros2 lifecycle set /omniglove_node deactivate
ros2 lifecycle set /omniglove_node cleanup
```

## Topics

Each device uses its 16-digit hexadecimal UID in the topic namespace:

```text
<topic_root>/uid_<16-digit-hex-UID>/posedata
<topic_root>/uid_<16-digit-hex-UID>/posedata_tactile_position_v1
<topic_root>/uid_<16-digit-hex-UID>/postdata
```

| Topic suffix | Message type | Data fields |
|---|---|---|
| `posedata` | `omniglove_interfaces/msg/PoseSample` | `metadata`, `data` |
| `posedata_tactile_position_v1` | `omniglove_interfaces/msg/PoseTactilePositionSample` | `metadata`, `data`, `tac_pos` |
| `postdata` | `omniglove_interfaces/msg/PostSample` | `metadata`, `data` |

Inspect the topics with:

```bash
ros2 topic list | grep omniglove
ros2 topic echo /omniglove/uid_0123456789abcdef/posedata --once
ros2 topic hz /omniglove/uid_0123456789abcdef/posedata
```

## Services

Services are below the private node namespace. Use the UID returned by
`list_devices` in subsequent calls.

List devices:

```bash
ros2 service call \
  /omniglove_node/list_devices \
  omniglove_interfaces/srv/ListDevices \
  '{}'
```

Query POSE information (`timeout_ms: 0` selects `control_timeout_ms`):

```bash
ros2 service call \
  /omniglove_node/get_pose_info \
  omniglove_interfaces/srv/GetPoseInfo \
  '{device_uid: 81985529216486895, info_type: 0, timeout_ms: 500}'
```

Configure and enable POSEDATA:

```bash
ros2 service call \
  /omniglove_node/set_stream_config \
  omniglove_interfaces/srv/SetStreamConfig \
  '{device_uid: 81985529216486895, stream_kind: 2, stream_mode: 0, enabled: true, source_interval_ms: 20, source_timeout_ms: 100, callback_queue_capacity: 64, pose_components: 3}'
```

`source_interval_ms` is a required compatibility field and does not change the
device data rate. When enabling a stream, it, `source_timeout_ms`, and
`callback_queue_capacity` must be nonzero. Reconfiguration affects only the
selected stream.

Query POSEDATA status:

```bash
ros2 service call \
  /omniglove_node/get_stream_status \
  omniglove_interfaces/srv/GetStreamStatus \
  '{device_uid: 81985529216486895, stream_kind: 2}'
```

`actual_source_rate_millihz` is measured in millihertz; for example, `100000`
means approximately `100 Hz`.

## Parameters

Startup parameters are read-only. Provide them through YAML or launch arguments;
use `set_stream_config` for runtime stream changes.

```bash
ros2 param list /omniglove_node
ros2 param get /omniglove_node device_uids
ros2 param get /omniglove_node streams.posedata.stream_mode
```

## Documentation

- [ROS 2 stream messages](docs/en/ROS2_STREAM_DATA_V1.md)
- [Installed component guide](share/omniglove_node/README.md)

The matching platform SDK package contains the public C API and DIRECT/UDP
stream-layout documentation.

## License and third-party components

Omniglove-owned ROS 2 code and documentation are licensed under
[MulanPSL-2.0](LICENSE). See [Third-Party Notices](THIRD_PARTY_NOTICES.md) for
generated overlay helpers and external runtime dependencies.
