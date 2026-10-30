[中文 README](README_CN.md)

# Omniglove SDK Linux Shared-Library Package

This directory is a self-contained Linux product for one native architecture.
It provides the public C header, shared libraries, CMake package, installation
scripts, examples, tools, Linux documents, and udev configuration. Shared API
documents, versions, licenses, and repository checksums are at the release root.

```text
linux-<arch>/
├── README.md / README_CN.md
├── BUILD_INFO.txt
├── bin/                        calibration, teleop, and OTA tools
├── include/omniglove/          public C ABI header
├── lib/                        SDK and bundled runtime libraries
├── cmake/                      OmnigloveSDK package
├── examples/                   C consumer, firmware, live, and C++ examples
├── docs/
│   ├── en/                     English platform documents
│   └── cn/                     matching Chinese documents
├── scripts/                    udev and demo helpers
├── udev/                       permission rule and bilingual guide
└── rebuild/libusb/             reproducible libusb wrapper
```

## Install

From this directory:

```bash
./install.sh                         # default: /usr/local
sudo ./scripts/install_udev.sh
```

Reconnect the glove after udev installation. Do not run SDK programs with
`sudo`. Override the prefix with `./install.sh /path/to/prefix`; make that
prefix discoverable through `CMAKE_PREFIX_PATH` as needed.

Uninstall with:

```bash
./uninstall.sh                       # or the same custom prefix
```

The scripts remove only SDK-owned files and preserve unrelated prefix content.

## ABI and CMake verification

No glove is required for the pure-C ABI consumer:

```bash
cmake -S examples/c_consumer -B build/c_consumer \
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/c_consumer
./build/c_consumer/omniglove_c_consumer
```

Application projects should use:

```cmake
find_package(OmnigloveSDK CONFIG REQUIRED)
target_link_libraries(my_app PRIVATE OmnigloveSDK::api)
```

Use the packaged public header and `OmnigloveSDK::api` target. Bundled runtime
libraries do not overwrite system libraries.

## Hardware examples

After installing permissions and reconnecting a glove:

```bash
./scripts/run_glove_demo.sh
```

The helper builds and runs `examples/glove_live` through the public C API. The
firmware information and C++ acceptance examples can be built from their own
directories. Consult their `--help` output and use the package's CMake directory.

## Calibration

The package includes prebuilt six-pose capture, offline URDF export, and BONE
deployment tools. The default calibration command saves a host candidate and
its same-basename personal URDF, then activates it without writing the device:

```bash
./bin/omniglove_calibration_tool --work-dir ./calibration-output
```

Use `--publish save-and-device` only when device BONE v4 write and readback are
intended. See [Calibration](docs/en/CALIBRATION.md).

## Teleoperation

The prebuilt teleop tool supports O10, Ultra T1.3, and Ultra T1.5 and defaults to
dry-run. It requires a separately installed compatible OmniHand SDK and vendor
runtime. It sends commands only with `--execute`. Prepare a hardware emergency
stop and follow [Teleoperation](docs/en/TELEOP.md) before enabling writes.

## Documentation

- [Public C API](../docs/en/PUBLIC_C_API.md)
- [DIRECT and UDP stream layouts](../docs/en/STREAM_DATA_V1.md)
- [ROS 2 layout](../docs/en/ROS2_STREAM_DATA_V1.md)
- [Tactile layout](../docs/en/TACTILE_LAYOUT_V1.md)
- [Build baseline](docs/en/DEPENDENCIES.md)
- [Calibration](docs/en/CALIBRATION.md)
- [Teleoperation](docs/en/TELEOP.md)
- [Rebuilding libusb](docs/en/LIBUSB_REBUILD.md)
- [USB permissions](udev/README.md)

Matching Chinese documents use the same basenames under `docs/cn/`.

## OTA maintenance

OTA is not part of normal SDK operation and rewrites firmware. Use only the
complete command and parameters supplied with an official update package, and
close every program using the glove before starting.

```bash
./bin/omniglove_ota_tool --list
./bin/omniglove_ota_tool --validate-only --all \
  --app <official-image-a> \
  --node <official-image-b>
```

Read [OTA](docs/en/OTA.md) for preparation, execution, and recovery guidance.

## License

Copyright (c) 2025 Agibot Co., Ltd.

Project-owned files are licensed under MulanPSL-2.0. The complete license,
third-party notices, exact libusb source, and license texts are at the release
root. OmniHand SDK is an external runtime dependency and is not redistributed.
