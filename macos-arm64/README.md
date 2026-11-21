[中文说明](README_CN.md)

# Omniglove SDK for macOS

Use the package matching `uname -m` on macOS 14 or later. The SDK exposes the
public C ABI and DIRECT stream callbacks. See `BUILD_INFO.txt` for the exact
architecture, SDK/ABI versions and validation status. The package includes the
read-only firmware information tool, glove OTA utility and C/C++ examples.

## Run from the package

```sh
./bin/omniglove_firmware_info
cmake -S examples -B build/examples -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/examples
./build/examples/omniglove_c_consumer
./build/examples/omniglove_pose_data --frames 10
```

Applications use `find_package(OmnigloveSDK CONFIG REQUIRED)` and link
`OmnigloveSDK::api`. Keep `lib/` together when moving the package. For standalone
application distribution, call `omniglove_sdk_deploy_runtime(<target>)` on the
linked CMake target and ship the sibling `omniglove-sdk/` directory with the
executable. Set `-DOMNIGLOVE_DEPLOY_EXAMPLES=ON` to try this with the C example.

## Install and uninstall

```sh
./install.sh "$HOME/.local"
cmake -S examples -B build/installed -DCMAKE_PREFIX_PATH="$HOME/.local"
cmake --build build/installed
./build/installed/omniglove_c_consumer
"$HOME/.local/share/OmnigloveSDK/uninstall.sh"
```

Find installed documentation, build information and the uninstaller under
`share/OmnigloveSDK/` in the prefix. The release root holds the public API guide
at `docs/en/PUBLIC_C_API.md`.

- [Dependencies and platform scope](docs/en/DEPENDENCIES.md)
- [Rebuild and replace libusb](docs/en/LIBUSB_REBUILD.md)
- [Glove OTA maintenance tool](docs/en/OTA.md)
