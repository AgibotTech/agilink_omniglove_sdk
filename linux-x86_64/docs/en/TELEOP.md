# O10 / Ultra Teleoperation Tool

`omniglove_teleop_tool` consumes POST DIRECT data and supports OmniHand O10
(10 DoF), Ultra T1.3 (20 DoF), and Ultra T1.5 (21 DoF). Use one left or right
glove, or exactly one of each with matching hand models. The default is dry-run;
joint commands are sent only with explicit `--execute`.

## Runtime dependencies

Install the architecture-matching OmniHand SDK and configure CAN/USB permissions
as directed by its vendor. Omniglove Release does not include OmniHand SDK or
vendor libraries. Minimum build version is 1.1.10; the exact version is in
`BUILD_INFO.txt`. For another prefix, configure the dynamic loader or
`LD_LIBRARY_PATH=<prefix>/lib`.

```bash
./bin/omniglove_teleop_tool --help
/usr/local/bin/omniglove_teleop_tool --help  # after install.sh
```

## Safety validation

For first use, prepare a hardware emergency stop or power cut, run dry-run, then
manually approve a short low-speed write:

```bash
# O10; default hand device ID 1
./bin/omniglove_teleop_tool \
  --hand-model o10 --transport hcan --side right \
  --adapter 0 --channel 0 --duration 10 --diagnostics

# Ultra T1.3; default hand device ID 9
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.3 --transport hcan --side right \
  --adapter 0 --channel 0 --duration 10 --diagnostics

# Ultra T1.5; default hand device ID 1; low-speed write
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.5 --transport hcan --side right \
  --adapter 0 --channel 0 --control-mode keep \
  --rate-limit 0.2 --duration 3 --execute
```

Ultra accepts only `--tip-source landmarks`. `--control-mode keep` verifies the
current mode is 0 or 7. `--control-mode pp` writes and reads back mode 7 on every
joint only when combined with `--execute`. Dry-run writes neither joints nor
control mode.

`TELEOP_PAUSED` is not a latched emergency stop: writes may resume when valid
data returns. To require human approval before resuming, terminate and restart
the process. The first `Ctrl-C` requests orderly shutdown; a second forces exit
if a vendor SDK call is unresponsive. Neither replaces a hardware emergency stop.

## Paired routes and transports

```bash
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.5 --transport zlgcan --adapter 0 \
  --left 0 --right 1
```

Two gloves must be exactly one left and one right and use different
`--left`/`--right` routes. A CAN adapter/TCP route is channel `0|1`; SocketCAN
routes are distinct interface names. Single-glove mode uses handedness reported
by the SDK; `--side` remains only for old-command compatibility. Paired execute
opens its write gate only after both hands open, both POST streams start, and
feedback synchronization completes.

| `--transport` | Required connection arguments | O10 | Ultra T1.3/T1.5 |
|---|---|---|---|
| `hcan` | `--adapter N` or `--adapter-serial S`, plus `--channel N` | supported | supported |
| `zlgcan` | `--adapter N` or `--adapter-serial S`, plus `--channel N` | supported | supported |
| `zlgcan-tcp` | `--tcp-host HOST --tcp-port N --channel N` | supported | supported |
| `socketcan` | `--can-interface can0` | supported | supported |
| `rs485` | `--serial-port PATH --baud-rate N` | supported | unsupported |
| `usb` | `--serial-port PATH --baud-rate N` | supported | unsupported |

## Solver and protection boundaries

The tool contains a fixed read-only model and runs no Python, Torch, Pinocchio,
or NLopt, and loads no URDF, YAML, or mesh. Ultra uses robot bone-length
adaptation, 15-vector DexPilot, intermediate joints, fingertip directions,
temporal regularization, and low-pass filtering. Startup validates product DoF,
control mode, feedback ranges, fixed-model endpoints, and joint limits; output
passes through per-joint rate limits. T1.5 additionally rejects fixed-model
collapse, palm-center penetration, and cross-finger centerline crossing. These
checks are not full CAD collision, object contact, or force control. First
execution must still be low-speed with a hardware emergency stop ready.

Use `omniglove_teleop_tool --help` for the complete arguments and defaults.
