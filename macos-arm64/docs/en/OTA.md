# Glove OTA maintenance tool (macOS)

`bin/omniglove_ota_tool` is the standalone firmware maintenance utility. It loads
libusb from the package's `lib/omniglove/` directory. See `BUILD_INFO.txt` for
OTA hardware acceptance.

Run these commands from the platform package or installation prefix. Use the
official update instructions to choose `--app`, `--node` or `--all` and the
matching files. Validation reads the update files locally.

```sh
./bin/omniglove_ota_tool --help
./bin/omniglove_ota_tool --validate-only --all \
  --app /path/to/official-app-image --node /path/to/official-node-image
./bin/omniglove_ota_tool --list
```

Before updating, close applications using the glove, use a reliable USB
connection and follow the official update instructions. If several devices are
connected, select the target with the temporary token shown by `--list`.
After updating, check the device with `omniglove_firmware_info`. If an update
is interrupted, retain the error output and follow the official recovery steps.
