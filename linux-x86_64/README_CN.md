[English README](README.md)

# Omniglove SDK Linux 动态库发行包

本目录是可独立识别的 Linux 平台产品，包含对应架构的公开头文件、动态库、CMake
部署配置、安装/卸载脚本、测试示例、Linux 使用文档以及 Linux 专属 udev 配置。
跨平台 API 文档、SDK/ABI 版本和全仓校验清单位于上一级发行根目录。

## 目录

```text
linux-<arch>/
├── README.md                    默认英文入口
├── README_CN.md                 中文入口
├── BUILD_INFO.txt
├── bin/                        设备信息、标定、遥操和 OTA 工具
├── include/                    本平台公开 C ABI 头文件
├── lib/                        SDK 和随包运行库
├── cmake/                      CMake package
├── docs/
│   ├── en/                    默认英文平台文档
│   └── cn/                    一一对应的中文平台文档
├── examples/                   C consumer、实物测试和 C++ API 示例
├── rebuild/                    第三方动态库重建入口
├── scripts/                    udev 安装和实物示例脚本
├── udev/                       Linux USB 权限规则
├── install.sh
└── uninstall.sh
```

Linux 公开库的版本信息见 `BUILD_INFO.txt`。随包运行库位于 `lib/omniglove/`，不会覆盖
系统库；用户无需安装额外开发包。

## Quick Start

本流程面向当前 Linux x86_64/aarch64 平台包。以下命令均从平台目录执行；公开 C
头文件、动态库、CMake package、安装脚本和 udev 配置都位于此目录内。

### 1. 安装 SDK

```bash
./install.sh                 # 默认安装到 /usr/local
./install.sh "$HOME/.local" # 可选：安装到用户目录
```

安装脚本会部署头文件、Omniglove 与 libusb 动态库、SONAME 软链接、CMake package、
设备信息、calibration、teleop 和 OTA CLI。默认路径会自动运行 `ldconfig`；用户目录不需要 root。通过
CMake target 构建的程序会记录该动态库路径；手工启动其他程序时可配置系统 loader 或
`LD_LIBRARY_PATH`。

### 2. 配置 USB 权限

连接并上电手套后，首次使用执行：

```bash
sudo ./scripts/install_udev.sh
```

拔出并重新插入手套。SDK 和示例程序不要使用 `sudo` 运行。

### 3. 验证动态库和 ABI

无需硬件即可编译对应平台目录内的纯 C 示例：

```bash
cmake -S examples/c_consumer -B build/omniglove_consumer \
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/omniglove_consumer
./build/omniglove_consumer/omniglove_c_consumer
```

输出包含运行库报告的 ABI。该示例同时验证平台目录中的公开头文件、CMake package、
动态链接和 ABI 兼容性检查。

### 4. 查询设备信息与构建 C++ API 示例

连接手套后可直接运行预编译的只读工具，无需编写或编译代码：

```bash
./bin/omniglove_firmware_info
```

输出包含每只设备的左右手、固件与硬件版本、产品名和设备 SN。需要基于 SDK 继续开发时，
同源纯 C 示例仍保留在 `examples/firmware_info`：

```bash
cmake -S examples/firmware_info -B build/firmware_info \
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/firmware_info
./build/firmware_info/omniglove_firmware_info
```

`cpp_acceptance_demo` 使用 C++17 编写，只包含公开的
`omniglove/omniglove.h` 并调用稳定 C API。构建该
示例需要 `g++` 或 `clang++`；`c_consumer` 和 `glove_live` 是纯 C 示例。

```bash
./examples/cpp_acceptance_demo/build.sh

# 无需硬件：验证示例中的 UDP JSON contract parser。
./build/omniglove_cpp_demo/omniglove_cpp_acceptance_demo --json-self-test

# 连接手套后：执行默认只读的公开 API 验收。
./build/omniglove_cpp_demo/omniglove_cpp_acceptance_demo \
  --samples 10 --ignore-bone
```

脚本可从任意工作目录执行。默认构建目录是当前平台包下的
`build/omniglove_cpp_demo`；需要指定其他目录或并行数时，可分别设置
`OMNIGLOVE_CPP_DEMO_BUILD_DIR` 和 `OMNIGLOVE_BUILD_JOBS`。

默认流程不会写设备。`--allow-write` 会回写刚从同一设备读取并校验过的数据，只应在明确
需要写入验收且已保存设备配置时人工使用，不得加入自动测试或普通用户 Quick Start。

### 5. 运行纯 C 实物示例

```bash
./scripts/run_glove_demo.sh       # 持续运行，Ctrl-C 停止
./scripts/run_glove_demo.sh 10    # 运行 10 秒
```

未连接设备时出现 `device_not_found` 是预期结果。设备连接后示例会自动发现支持的
手套，执行只读 `POSE_INFO`，并输出 POSE 样本统计。

### 6. 运行六动作标定

默认模式完成引导式六动作标定，在主机保存 candidate 及同名个人化 URDF 并激活
candidate，但不写设备：

```bash
./bin/omniglove_calibration_tool --work-dir ./calibration-output
```

需要立即写入设备时必须显式增加 `--publish save-and-device`。将已保存的 candidate 延迟
导出为 URDF 时使用 `omniglove_calibration_urdf_tool`，写入设备时使用
`omniglove_bone_deploy_tool`。完整动作、数据和安全说明见
[六动作个人标定工具](docs/cn/CALIBRATION.md)。

### 7. 运行 O10 / Ultra 遥操

目标机须先按供应商说明正式安装匹配架构的 OmniHand SDK；该外部运行库不随本包分发。
工具默认 dry-run，只有 `--execute` 才向真手发送命令。首次使用及限时低速验证见
[O10 / Ultra 遥操工具](docs/cn/TELEOP.md)。

```bash
./bin/omniglove_teleop_tool --help
```

### 8. 接入业务工程

```cmake
cmake_minimum_required(VERSION 3.20)
project(my_glove_app LANGUAGES C)

find_package(OmnigloveSDK CONFIG REQUIRED)
add_executable(my_glove_app main.c)
target_link_libraries(my_glove_app PRIVATE OmnigloveSDK::api)
```

安装到 `/usr/local` 时 CMake 通常会自动找到 package；其他路径可指定：

```bash
cmake -S . -B build -DCMAKE_PREFIX_PATH="$HOME/.local"
```

未安装时，将 `OmnigloveSDK_DIR` 指向当前平台目录的 `cmake/`。业务工程只包含
`omniglove/omniglove.h`，并通过 `OmnigloveSDK::api` 链接。

### 9. 卸载

```bash
./uninstall.sh                 # 对应默认前缀
./uninstall.sh "$HOME/.local" # 对应自定义前缀
```

## 文档索引

- [公开 C API 使用说明](../docs/cn/PUBLIC_C_API.md)：初始化、设备枚举、stream 配置、
  一次性控制、错误处理、所有权和关闭顺序。
- [DIRECT 与 UDP 数据流 layout](../docs/cn/STREAM_DATA_V1.md)：四类 stream 的 C 结构、
  UDP JSON、metadata、sequence/gap 与借用数据生命周期。
- [ROS 2 数据流 layout](../docs/cn/ROS2_STREAM_DATA_V1.md)：四个 topic、强类型 Sample、
  完整消息树和字段对应关系。
- [触觉点位 layout](../docs/cn/TACTILE_LAYOUT_V1.md)：746 点触觉区域、矩阵坐标和切片顺序。
- [Linux 构建基线](docs/cn/DEPENDENCIES.md)：支持的平台与客户构建工具要求。
- [六动作个人标定工具](docs/cn/CALIBRATION.md)：标定、candidate 保存和 BONE v4 部署。
- [O10 / Ultra 遥操工具](docs/cn/TELEOP.md)：产品选择、外部 OmniHand 依赖、连接参数和安全验证流程。
- [libusb 重建与替换](docs/cn/LIBUSB_REBUILD.md)：对应源码、构建参数、替换和恢复方法。
- [Linux USB 权限说明](udev/README_CN.md)：udev 规则、设备重插和权限验证。
- [公开 C 头文件](include/omniglove/omniglove.h)：函数、枚举、结构体和 ABI 常量。

## OTA（独立维护功能）

`omniglove_ota_tool` 是独立维护工具，不属于普通 SDK 初始化或公开 C ABI 流程。更新会改写
固件，只能使用随正式更新文件提供的完整命令和参数。开始前先关闭所有正在使用手套的程序。

```bash
./bin/omniglove_ota_tool --list
./bin/omniglove_ota_tool --validate-only --all \
  --app <official-image-a> \
  --node <official-image-b>
```

准备、执行和失败恢复要求见 [OTA 工具说明](docs/cn/OTA.md)。

## 许可证与第三方组件

Omniglove SDK 自有代码和文档适用
[木兰宽松许可证，第 2 版（MulanPSL-2.0）](../LICENSE)。独立分发、可替换的 libusb 适用
LGPL-2.1-or-later；组件链接方式、再分发条件和替换权利见
[第三方许可说明](../THIRD_PARTY_NOTICES.md)。
