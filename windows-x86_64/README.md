[中文 README](README_CN.md)

# Omniglove SDK Windows x86_64 Package

This Windows x86_64 package provides the DLL, import library, public C header,
CMake package, pure-C examples, documentation, and OTA maintenance tool. See
`BUILD_INFO.txt` for package version information.

No manual device-driver installation or replacement is needed in the supported
system environment.

## Capability boundary

- Automatic discovery and connection; DIRECT callbacks for public streams;
  synchronous control and BONE.
- Windows supports DIRECT only. UDP is ABI-reserved, but configuring
  it returns `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED` without starting data output.
- Teleoperation is Linux-only and is not present in this package.

## Package layout

```text
windows-x86_64/
├── README.md / README_CN.md
├── BUILD_INFO.txt
├── bin/                        runtime DLLs and OTA tool
├── lib/omniglove.lib
├── include/omniglove/omniglove.h
├── cmake/
├── examples/
└── docs/
    ├── en/
    └── cn/
```

## Quick Start

From an elevated PowerShell or CMD prompt in this directory:

```powershell
.\install.bat
```

The default prefix is `C:\omniglove`. The installer copies package files and
registers exact system `PATH` and `CMAKE_PREFIX_PATH` entries. It downloads
nothing and does not alter drivers. Open a new terminal or restart the IDE.

Verify the public C ABI from a Visual Studio 2022 x64 environment:

```powershell
cmake -S C:/omniglove/examples/c_consumer `
  -B ./build/omniglove-consumer -G Ninja
cmake --build ./build/omniglove-consumer
.\build\omniglove-consumer\omniglove_c_consumer.exe
```

Projects use the same target on all platforms:

```cmake
find_package(OmnigloveSDK CONFIG REQUIRED)
target_link_libraries(my_app PRIVATE OmnigloveSDK::api)
```

Installed development resolves DLLs through system `PATH`. For standalone
deployment to a machine without the SDK, add:

```cmake
omniglove_sdk_deploy_runtime(my_app)
```

This copies `omniglove.dll` and `libusb-1.0.dll` beside the executable.

## Firmware information example

The package does not ship a prebuilt Windows firmware information tool. The
read-only public-API example remains under `examples/firmware_info`; build it
with the same CMake workflow as `examples/c_consumer` when needed.

## Uninstall

```powershell
C:\omniglove\uninstall.bat
```

The uninstaller removes only verified SDK-owned files and exact environment
entries. It does not recursively delete user-added prefix content and is safe to
run repeatedly.

## Documentation

- [Build baseline](docs/en/DEPENDENCIES.md)
- [Public C API](../docs/en/PUBLIC_C_API.md)
- [Stream layouts](../docs/en/STREAM_DATA_V1.md)
- [Tactile layout](../docs/en/TACTILE_LAYOUT_V1.md)

Matching Chinese documents use the same basenames under `docs/cn/`.

## OTA maintenance

OTA is separate from normal SDK use and rewrites firmware. Use only the complete
command and parameters supplied with an official update package, and close every
program using the glove before starting.

```powershell
.\bin\omniglove_ota_tool.exe --list
.\bin\omniglove_ota_tool.exe --validate-only --all `
  --app <official-image-a> `
  --node <official-image-b>
```

Read [Windows OTA](docs/en/OTA.md) before downloading.

## License

Copyright (c) 2025 Agibot Co., Ltd.

Project-owned files are licensed under MulanPSL-2.0. The release root contains
the complete license, third-party notices, corresponding libusb source, and
third-party license texts.
