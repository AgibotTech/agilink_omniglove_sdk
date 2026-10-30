[English README](README.md)

# Omniglove SDK 发行仓库

本仓库按目标平台和架构保存可部署 SDK 产品。`linux-<arch>/` 与 `windows-<arch>/`
平台目录彼此同级；每个目录包含该平台自己的公开头文件、库、安装
工具和测试示例，平台专属配置也只放在对应目录中。

发行根目录只保存跨平台资料和全仓元数据；平台使用说明及依赖说明跟随对应
平台产品：

```text
release/
├── README.md                    默认英文入口
├── README_CN.md                 中文入口
├── VERSION
├── SHA256SUMS
├── docs/                        跨平台公开 API 与数据布局文档
│   ├── en/                      默认英文文档
│   ├── cn/                      一一对应的中文文档
│   └── pic/                     双语文档共享图片资源
├── linux-<arch>/                Linux 平台产品
└── windows-<arch>/              Windows 平台产品
```

Linux 目录由构建主机原生架构决定，为 `linux-x86_64/` 或 `linux-aarch64/`；Windows
Windows 提供 `windows-x86_64/`。进入对应目录可查看平台包结构和使用文档；实际版本与
能力以对应平台的 `BUILD_INFO.txt`、公开头文件和平台 README 为准。Linux 提供 DIRECT 与
UDP；Windows 只提供 DIRECT，配置 UDP 返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`。
在本目录运行以下命令可校验公共资料和所有平台产物：

```bash
sha256sum --check SHA256SUMS
```

## Linux x86_64 / aarch64

### 安装和验证

从发行根目录进入 Linux 平台包：

```bash
cd "linux-$(uname -m)"
./install.sh                  # 默认安装到 /usr/local
sudo ./scripts/install_udev.sh
```

安装 udev 规则后重新插拔手套；SDK 和示例程序不要使用 `sudo` 运行。无需设备即可验证
公开头文件、动态库、CMake package 和 ABI：

```bash
cmake -S examples/c_consumer -B build/c_consumer \
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/c_consumer
./build/c_consumer/omniglove_c_consumer
```

业务工程统一使用 `find_package(OmnigloveSDK CONFIG REQUIRED)`、
`OmnigloveSDK::api` 和随包公开头文件。

### Linux 文档

对应架构的完整说明、构建基线、标定、teleop、udev 与 libusb 重建文档位于
`linux-<arch>/README.md`、`linux-<arch>/docs/` 和 `linux-<arch>/udev/`。

- [公开 C API](docs/cn/PUBLIC_C_API.md) / [数据流 layout](docs/cn/STREAM_DATA_V1.md) /
  [ROS 2 layout](docs/cn/ROS2_STREAM_DATA_V1.md) / [触觉点位](docs/cn/TACTILE_LAYOUT_V1.md)。
- [IK 解算数据描述](docs/cn/IK_DATA_DESCRIPTION.md) /
  [触觉点位映射图片](docs/cn/TACTILE_POINT_MAPPING_IMAGES.md)。

## Windows x86_64

### 安装和验证

在 PowerShell 或 CMD 中进入 Windows 平台包并运行安装脚本：

```powershell
cd .\windows-x86_64
.\install.bat
```

允许 UAC 提权，安装完成后重新打开终端或 IDE。在支持的系统环境中无需手工安装或替换设备
驱动。可在 Visual Studio 2022 x64 开发环境中
验证公开头文件、DLL、CMake package 和 ABI：

```powershell
cmake -S C:/omniglove/examples/c_consumer `
  -B ./build/omniglove-consumer -G Ninja
cmake --build ./build/omniglove-consumer
.\build\omniglove-consumer\omniglove_c_consumer.exe
```

业务工程同样使用 `find_package(OmnigloveSDK CONFIG REQUIRED)` 和
`OmnigloveSDK::api`。Windows 只提供 DIRECT 数据流。

### Windows 文档

- [Windows 完整使用说明](windows-x86_64/README_CN.md)：安装、示例、DLL 部署、业务接入和卸载。
- [构建基线](windows-x86_64/docs/cn/DEPENDENCIES.md)。
- [公开 C API](docs/cn/PUBLIC_C_API.md) / [数据流 layout](docs/cn/STREAM_DATA_V1.md) /
  [触觉点位](docs/cn/TACTILE_LAYOUT_V1.md)。
- [IK 解算数据描述](docs/cn/IK_DATA_DESCRIPTION.md) /
  [触觉点位映射图片](docs/cn/TACTILE_POINT_MAPPING_IMAGES.md)。

## 发行校验

Linux/macOS 或 Git for Windows 环境可在发行根目录执行：

```bash
sha256sum --check SHA256SUMS
```

Windows 原生 PowerShell 可执行：

```powershell
Get-Content .\SHA256SUMS | ForEach-Object {
  $entry = $_ -split '  \./', 2
  if ($entry.Count -ne 2) { throw "Invalid checksum entry: $_" }
  $actual = (Get-FileHash -Algorithm SHA256 -LiteralPath $entry[1]).Hash.ToLower()
  if ($actual -ne $entry[0]) { throw "Checksum failed: $($entry[1])" }
}
```

## OTA（独立维护功能）

OTA 不属于普通 SDK 初始化或业务 API 流程。更新会改写固件，只能使用随正式更新文件提供的
命令和参数；开始前必须关闭所有正在使用手套的程序。

### Linux OTA 使用方法

```bash
cd "linux-$(uname -m)"
./bin/omniglove_ota_tool --list
./bin/omniglove_ota_tool --validate-only --all \
  --app <official-image-a> \
  --node <official-image-b>
```

准备、执行和失败恢复要求见对应架构目录下的
`linux-<arch>/docs/cn/OTA.md`。

### Windows OTA 使用方法

```powershell
cd .\windows-x86_64
.\bin\omniglove_ota_tool.exe --list
.\bin\omniglove_ota_tool.exe --validate-only --all `
  --app <official-image-a> `
  --node <official-image-b>
```

完整操作要求见 [Windows OTA 工具说明](windows-x86_64/docs/cn/OTA.md)。

## 许可证与第三方组件

Copyright (c) 2025 Agibot Co., Ltd.

Omniglove SDK 自有代码和文档依据
[木兰宽松许可证，第 2 版（MulanPSL-2.0）](LICENSE)授权。第三方组件不适用项目许可证；
组件版本、链接方式、再分发条件和 libusb 替换权利见
[第三方许可说明](THIRD_PARTY_NOTICES_CN.md)。第三方许可证原文位于 [licenses/](licenses/)，
与发行版 libusb 二进制精确对应的 LGPL 源码位于 [sources/](sources/)。
