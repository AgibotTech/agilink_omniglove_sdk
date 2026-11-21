[中文说明](README_CN.md)

# Linux USB Permissions

Do not run the SDK or examples with `sudo`. From the Linux platform package root:

```bash
sudo ./scripts/install_udev.sh
```

The script installs `udev/60-omniglove-usb.rules` under `/etc/udev/rules.d/`
and reloads the rules. Disconnect and reconnect attached gloves afterward.

The supplied rule grants access only to supported runtime devices. Desktop
sessions use `uaccess`; add a headless service account to `plugdev` and start a
new login session.

Verify device visibility and SDK access as a normal user:

```bash
lsusb
./scripts/run_glove_demo.sh 10
```

If access still fails, inspect `udevadm info`, group membership, and the device
node ACL before changing permissions manually.

- [Linux dependencies](../docs/en/DEPENDENCIES.md)
- [Public C API](../../docs/en/PUBLIC_C_API.md)
- [DIRECT and UDP layouts](../../docs/en/STREAM_DATA_V1.md)
- [ROS 2 layout](../../docs/en/ROS2_STREAM_DATA_V1.md)
- [Tactile layout](../../docs/en/TACTILE_LAYOUT_V1.md)

## License

The project license and third-party notices are at the release root. This rule
and installer are project-owned files licensed under MulanPSL-2.0.
