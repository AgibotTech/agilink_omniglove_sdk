# Omniglove ROS 2 Streams

The ROS 2 interface copies DIRECT callback data into owned ROS messages. It
exposes POSEDATA and POSTDATA; REMOTEDATA is not exposed by this ROS interface:

```text
<topic_root>/uid_<16-digit-hex-UID>/posedata
<topic_root>/uid_<16-digit-hex-UID>/posedata_tactile_position_v1
<topic_root>/uid_<16-digit-hex-UID>/postdata
```

| Topic suffix | Message type | Data fields |
|---|---|---|
| `posedata` | `omniglove_interfaces/msg/PoseSample` | `PoseData data` |
| `posedata_tactile_position_v1` | `omniglove_interfaces/msg/PoseTactilePositionSample` | `PoseData data` + `TactilePositionData tac_pos` |
| `postdata` | `omniglove_interfaces/msg/PostSample` | `PostData data` |

`PoseSample` and `PostSample` contain common `StreamMetadata metadata` plus one
`data` field. `PoseTactilePositionSample` additionally contains `tac_pos`.
`PostData.reserved` preserves the raw 8-bit device value without assigning its
current temporary device-side interpretation to the ROS contract.
Metadata maps the public hand, flags, layout version, device sequence,
device/source ID, generation, host source sequence, receive monotonic time, and
gap count.

`PoseData.components` uses bit 0 for tactile and bit 1 for pose. Unselected ROS
fields retain their message defaults; consumers must inspect this mask first.
The default `pose_components: 3` publishes pose and tactile from the same frame.
Parameters or `SetStreamConfig.pose_components` may select 1 or 2. Non-POSE
streams require zero. Each tactile point in `PoseData.tactile` is a `uint8` in
the range `0..255` with a resolution of `1 g/LSB`; a numeric value `n`
represents `n g`.
When `tactile.mapped` is true and `tactile.count=746`, read the SDK's 15 regions.
Each region's `data` contains only valid points, with no elements for empty
matrix cells. Local index `k` in a diagram reads that region's `data[k-1]`;
valid points with a zero measurement are retained. Select the matrix using
`metadata.hand`; region counts and global slices are the same for both hands.
In POSE mode 1, local index `k` in a global slice `[a,b)` pairs with
`tac_pos.points[a+k-1]`. For example, `tactile.index.pad.data[0]` pairs with
`tac_pos.points[104]`. The palm field is `tactile.palm_surface`.

Every public stream selects one complete, exclusive profile
through `stream_mode`. Mode 0 uses the standard POSE and POST topics. POSE mode 1
requires `pose_components=3` and instead publishes the versioned tactile-position
topic, where 746 XYZ points use metres in the wrist frame and share indices with
the tactile-value array. The metre unit for spatial coordinates does not change
the tactile-value unit of `1 g/LSB`. Mode 1 is unsupported for other streams.

Node parameter prefixes are:

```text
streams.posedata.*
streams.postdata.*
```

Each includes `enabled`, `stream_mode`, `source_interval_ms`,
`source_timeout_ms`, and `callback_queue_capacity`; POSE also includes
`pose_components`. `source_interval_ms` is required but does not change the
device data rate. `GetStreamStatus` returns the current mask and public
subscription/queue continuity statistics.

ROS publishers use the node-configured QoS. Published messages own their copied
data; no callback-borrowed pointers are retained. Device-sequence gaps and
callback-queue drops are visible through metadata and status.
