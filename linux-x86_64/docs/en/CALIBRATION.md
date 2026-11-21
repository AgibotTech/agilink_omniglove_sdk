# Six-Pose Personal Calibration Tools

The Linux package provides three prebuilt command-line tools:

- `omniglove_calibration_tool` guides six-pose capture and fitting for either
  hand, saves and activates a candidate, and can optionally write it immediately;
- `omniglove_calibration_urdf_tool` exports an existing candidate as a personal
  kinematic URDF without a connected glove;
- `omniglove_bone_deploy_tool` writes a saved candidate to its matching device
  and performs a complete byte-for-byte readback check.

Capture and BONE deployment operate on automatically discovered gloves. URDF
export is entirely offline.

## Preparation

Install the USB permission rule as described in the platform [README](../../README.md),
then reconnect the glove. Exactly one device must initialize successfully. Do
not run calibration with `sudo`; candidate files should belong to your user.

Run directly from an unpacked platform directory:

```bash
./bin/omniglove_calibration_tool --work-dir ./calibration-output
```

After `install.sh`, the command is also available as:

```bash
omniglove_calibration_tool --work-dir ./calibration-output
```

The default `--publish save` saves the candidate on the host, writes a
same-basename `.urdf` beside it, and then switches the active manifest without
writing the device. Capture proceeds through a flat
neutral pose, two synchronized four-finger flexions, then thumb contacts with
the index, middle, ring, and little fingers. A stream interruption, sequence
gap, low confidence, wrong pose, or insufficient stillness invalidates the
current continuous window instead of accepting incomplete evidence.

To write the device immediately after saving:

```bash
./bin/omniglove_calibration_tool \
  --work-dir ./calibration-output \
  --publish save-and-device
```

This first saves the host candidate, then encodes and writes BONE v4, and finally
requires byte-identical device readback. A write failure does not delete the
saved candidate.

## Personal URDF export

New calibrations automatically produce `candidates/candidate-....urdf`. Export
an existing schema-v3 candidate without repeating capture:

```bash
./bin/omniglove_calibration_urdf_tool \
  --candidate ./calibration-output/candidates/candidate-....ogcal
```

By default `.ogcal` is replaced with `.urdf`; use `--output FILE.urdf` for a
different path. Existing files are never overwritten. The mesh-free kinematic
URDF preserves the `ik_og@3ab1046` joint names, handed axes, personal segment
lengths, and thumb CMC position. Sensor extrinsics, confidence evidence, and
diagnostics remain authoritative in the paired `.ogcal` candidate.

### URDF coordinate frames and TF

URDF (Unified Robot Description Format) uses `link` elements for local frames
and `joint` elements for connections and motion between parent and child links,
forming a kinematic tree.

- The generated URDF is rooted at **`wrist` (the wrist frame)**, matching the
  output reference frame in the IK documentation. Palm and finger poses are
  expressed relative to the wrist through the kinematic chain.
- Each joint's `origin xyz/rpy` describes translation and rotation relative to
  its parent link at zero joint angle, in meters and radians respectively.
  `axis` is expressed in the joint's local frame. Compose these transforms
  along the tree with joint angles to obtain each link's wrist-relative pose.
  The fixed transforms in `wrist → glove_base → palm_link` are already in the
  file and require no additional application when using URDF forward kinematics.
- `emf_tx_base` is a nominal transmitter mounting reference. The actual personal
  calibration transform between TX and wrist remains authoritative in `.ogcal`.

For wrist axes, left/right conventions, and the TF hierarchy, see sections 2–4
of [IK Data: Coordinate Frames and Transforms](../../../docs/en/IK_DATA_DESCRIPTION.md).
To integrate with a robot-base, camera, or world frame, provide the wrist's
mounting or tracked pose in that external frame and compose it with the
wrist-relative pose from URDF forward kinematics. The URDF itself does not
provide global localization.

## Deferred candidate deployment

Write a saved candidate to its exact matching device:

```bash
./bin/omniglove_bone_deploy_tool \
  --candidate ./calibration-output/candidates/candidate-....ogcal
```

The deployment tool verifies device identity and handedness, writes BONE v4,
and compares every readback byte. Long payloads show a 32-byte preview by
default; add `--full-payload` for diagnostics.

## Data and versions

- capture artifact schema: v2;
- candidate schema: v3;
- coordinate convention: right-handed TX; positions convert millimeters to
  meters; orientation is ZYX yaw/pitch/roll;
- neutral five-finger position/orientation p95 thresholds: 3 mm / 3 degrees;
- adjacent-frame position/orientation p95 thresholds: 1.6 mm / 2 degrees;
- wrist orientation p95 threshold: 3 degrees.

An old candidate schema is never silently interpreted as the current writable
format. Preserve each complete work directory and back up existing candidates
before writing a device.

## Diagnostic input

The retained UDP mode is for diagnostics and replay, not normal live calibration:

```bash
./bin/omniglove_calibration_tool \
  --source udp --listen 127.0.0.1 --port 45550
```
