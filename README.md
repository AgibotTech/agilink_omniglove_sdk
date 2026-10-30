[中文 README](README_CN.md)

# Omniglove SDK Release Repository

This repository stores deployable SDK products by target platform and
architecture. `linux-<arch>/` and `windows-<arch>/` are peers. Each contains its
own public header, libraries, installation tools, examples, and platform-specific
configuration.

```text
release/
├── README.md                    English release entry (default)
├── README_CN.md                 Chinese release entry
├── VERSION
├── SHA256SUMS
├── docs/
│   ├── en/                      English cross-platform documents
│   ├── cn/                      matching Chinese documents
│   └── pic/                     language-neutral images
├── linux-<arch>/
└── windows-<arch>/
```

Linux directories are `linux-x86_64/` or `linux-aarch64/`; the Windows directory
is `windows-x86_64/`. Use each platform's `BUILD_INFO.txt`, public header, and
README as the version and capability source. Linux provides DIRECT and UDP.
Windows provides DIRECT only.

Verify all shared and platform files from the release root:

```bash
sha256sum --check SHA256SUMS
```

## Linux x86_64 / aarch64

Enter the native package, install it, then install USB permissions:

```bash
cd "linux-$(uname -m)"
./install.sh
sudo ./scripts/install_udev.sh
```

Reconnect the glove after installing udev rules. Do not run SDK applications or
examples with `sudo`. Verify the public header, shared library, CMake package,
and ABI without hardware:

```bash
cmake -S examples/c_consumer -B build/c_consumer \
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/c_consumer
./build/c_consumer/omniglove_c_consumer
```

Applications should use `find_package(OmnigloveSDK CONFIG REQUIRED)`,
`OmnigloveSDK::api`, and the packaged public header.

Linux documentation:

- [Platform guide](linux-x86_64/README.md) (select the matching architecture).
- [Public C API](docs/en/PUBLIC_C_API.md),
  [stream layouts](docs/en/STREAM_DATA_V1.md),
  [ROS 2 layout](docs/en/ROS2_STREAM_DATA_V1.md), and
  [tactile layout](docs/en/TACTILE_LAYOUT_V1.md).
- [IK data](docs/en/IK_DATA_DESCRIPTION.md) and
  [tactile mapping images](docs/en/TACTILE_POINT_MAPPING_IMAGES.md).

## Windows x86_64

Run `install.bat` from the platform directory and approve UAC. Reopen the
terminal or IDE afterward. No manual device-driver installation or replacement
is needed in the supported system environment.

```powershell
cd .\windows-x86_64
.\install.bat
cmake -S C:/omniglove/examples/c_consumer `
  -B ./build/omniglove-consumer -G Ninja
cmake --build ./build/omniglove-consumer
.\build\omniglove-consumer\omniglove_c_consumer.exe
```

Windows documentation:

- [Platform guide](windows-x86_64/README.md).
- [Build baseline](windows-x86_64/docs/en/DEPENDENCIES.md).
- Shared [C API](docs/en/PUBLIC_C_API.md),
  [stream](docs/en/STREAM_DATA_V1.md), and
  [tactile](docs/en/TACTILE_LAYOUT_V1.md) contracts.

## Native PowerShell checksum verification

```powershell
Get-Content .\SHA256SUMS | ForEach-Object {
  $entry = $_ -split '  ./', 2
  if ($entry.Count -ne 2) { throw "Invalid checksum entry: $_" }
  $actual = (Get-FileHash -Algorithm SHA256 -LiteralPath $entry[1]).Hash.ToLower()
  if ($actual -ne $entry[0]) { throw "Checksum failed: $($entry[1])" }
}
```

## OTA maintenance

OTA is separate from normal SDK initialization and application APIs. It rewrites
firmware. Use only the command and parameters supplied with an official update
package, and close every program using the glove before starting.

Linux:

```bash
cd "linux-$(uname -m)"
./bin/omniglove_ota_tool --list
./bin/omniglove_ota_tool --validate-only --all \
  --app <official-image-a> \
  --node <official-image-b>
```

Read [Linux OTA](linux-x86_64/docs/en/OTA.md) in the matching architecture
directory before downloading.

Windows:

```powershell
cd .\windows-x86_64
.\bin\omniglove_ota_tool.exe --list
.\bin\omniglove_ota_tool.exe --validate-only --all `
  --app <official-image-a> `
  --node <official-image-b>
```

Read [Windows OTA](windows-x86_64/docs/en/OTA.md) before downloading.

## License and third-party components

Copyright (c) 2025 Agibot Co., Ltd.

Omniglove-owned code and documentation are licensed under
[MulanPSL-2.0](LICENSE). Third-party components retain their own licenses; see
[Third-Party Notices](THIRD_PARTY_NOTICES.md), [licenses/](licenses/), and the
exact corresponding libusb source under [sources/](sources/).
