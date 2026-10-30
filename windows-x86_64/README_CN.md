[English README](README.md)

# Omniglove SDK Windows x86_64 发行包

本目录是 Windows x86_64 发行包，包含动态库、导入库、公开 C 头文件、CMake package、
纯 C 示例和 OTA 维护工具；版本信息见 `BUILD_INFO.txt`。在支持的系统环境中无需手工安装
或替换设备驱动。

## 能力边界

- 支持自动发现和连接、DIRECT 回调、三类公开数据流、同步控制和 BONE。
- Windows 仅提供 DIRECT 数据流。`OMNIGLOVE_STREAM_OUTPUT_UDP` 为跨平台 ABI 保留，
  配置时返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`，不会启动数据输出。

## 目录

```text
windows-x86_64/
├── README.md / README_CN.md      英文默认/中文入口
├── bin/                         omniglove.dll、libusb-1.0.dll
│                                omniglove_ota_tool.exe
├── lib/                         omniglove.lib
├── include/omniglove/           公开 C ABI 头文件
├── cmake/                       CMake package
├── examples/c_consumer/         包外纯 C consumer
├── examples/firmware_info/      公开 API 固件信息查询示例
├── docs/
│   ├── en/                     默认英文平台文档
│   └── cn/                     一一对应的中文平台文档
├── install.bat                  一键安装与环境变量注册
├── uninstall.bat                安全卸载与环境变量清理
└── BUILD_INFO.txt
```

## Quick Start

### 1. 一键安装

双击 `install.bat`，在 UAC 提示中允许管理员权限。脚本默认安装到 `C:\omniglove`，并将：

- `C:\omniglove\bin` 加入系统 `PATH`；
- `C:\omniglove` 加入系统 `CMAKE_PREFIX_PATH`；
- 公开头文件、DLL、导入库、CMake package、示例和文档复制到安装目录。

安装完成后重新打开终端或 IDE。需要指定其他目录时，可在命令行执行：

```bat
install.bat "D:\SDK\omniglove"
```

安装脚本不会安装或替换设备驱动。

### 2. 构建纯 C 示例

在 Visual Studio 2022 x64 开发环境中执行：

```powershell
cmake -S C:/omniglove/examples/c_consumer `
  -B ./build/omniglove-c-consumer -G Ninja
cmake --build ./build/omniglove-c-consumer
./build/omniglove-c-consumer/omniglove_c_consumer.exe
```

示例的构建规则会把两个运行 DLL 复制到可执行文件目录，并输出运行库报告的 ABI。这是为了
让示例脱离已安装 SDK 后仍能独立运行；正常执行过
`install.bat` 的开发机已经通过系统 `PATH` 提供 DLL，用户项目不需要手工复制文件。

连接手套后，将上述路径中的 `c_consumer` 替换为 `firmware_info`，即可构建并运行只读固件
信息示例；它会输出每只手套的手别、固件与硬件版本、产品名和设备 SN。

### 3. 在业务工程中链接 SDK

执行 `install.bat` 并重新打开终端或 IDE 后，用户可以直接使用标准 CMake package：

```cmake
cmake_minimum_required(VERSION 3.20)
project(my_glove_app LANGUAGES C)

find_package(OmnigloveSDK CONFIG REQUIRED)

add_executable(my_glove_app main.c)
target_link_libraries(my_glove_app PRIVATE OmnigloveSDK::api)
```

其中 `find_package`、公开头文件和 `OmnigloveSDK::api` target 与 Linux 完全相同，不应在业务
代码中直接写死 `.lib`、`.dll` 或 SDK 头文件路径。安装后的本机开发到这里已经完成，不需要
任何额外 DLL 操作。平台差异如下：

| 项目 | Windows x86_64 | Linux x86_64 |
| --- | --- | --- |
| CMake target | `OmnigloveSDK::api` | `OmnigloveSDK::api` |
| 链接产物 | CMake 自动使用 `omniglove.lib` 导入库 | CMake 自动使用 `libomniglove.so` |
| 已安装开发机的运行时库 | `install.bat` 已把 SDK `bin` 注册到系统 `PATH` | 安装脚本部署 `.so`，系统前缀安装时由动态加载器解析 |
| CMake 发现 | `install.bat` 注册系统 `CMAKE_PREFIX_PATH`，新终端直接发现 | `/usr/local` 通常直接发现；自定义前缀需传 `CMAKE_PREFIX_PATH` |
| 数据流输出 | 仅 DIRECT | DIRECT 与 UDP |

只有当用户要把自己编译出的 exe 复制到另一台**未安装 Omniglove SDK** 的 Windows 机器时，
才需要把运行时 DLL 随应用分发。此时在 exe target 创建后增加一行：

```cmake
omniglove_sdk_deploy_runtime(my_glove_app)
```

该 helper 由 Windows CMake package 提供，会在 POST_BUILD 阶段自动把 `omniglove.dll` 和
`libusb-1.0.dll` 复制到 exe 同目录。用户无需查找、逐项复制或维护 DLL 文件名，也无需部署
MSVC/UCRT 运行 DLL。底层文件列表仍以 `OmnigloveSDK_RUNTIME_DLLS` 提供给有定制需求的工程。

如果未执行安装，也可以直接从解压目录构建示例：

```powershell
cmake -S examples/c_consumer -B build/c_consumer -G Ninja `
  -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/c_consumer
./build/c_consumer/omniglove_c_consumer.exe
```

### 4. 卸载

安装目录中会保留 `uninstall.bat`。双击运行并允许 UAC 提权，即可移除 SDK 自有文件，并从
系统 `PATH` 和 `CMAKE_PREFIX_PATH` 精确移除对应安装路径。卸载器不会递归删除安装目录中的
用户文件；存在额外文件时会保留目录和这些文件。

也可以从原始发行包卸载默认或自定义前缀：

```bat
uninstall.bat
uninstall.bat "D:\SDK\omniglove"
```

设备连接后，由 SDK 自动发现设备，无需填写连接参数。

## 文档

- [Windows 构建基线](docs/cn/DEPENDENCIES.md)
- [公开 C API 文档](../docs/cn/PUBLIC_C_API.md)
- [数据流 layout](../docs/cn/STREAM_DATA_V1.md)
- [触觉点位 layout](../docs/cn/TACTILE_LAYOUT_V1.md)

## OTA（独立维护功能）

OTA 是独立维护工具，不进入 SDK 初始化或公开 C ABI。只能使用随正式更新文件提供的完整命令
和参数；开始前先关闭所有正在使用手套的程序。实际更新会改写固件，操作前必须阅读
[OTA 工具说明](docs/cn/OTA.md)。

```powershell
.\bin\omniglove_ota_tool.exe --list
.\bin\omniglove_ota_tool.exe --validate-only --all `
  --app <official-image-a> `
  --node <official-image-b>
```

## 许可证与第三方组件

Omniglove SDK 自有代码和文档适用
[木兰宽松许可证，第 2 版（MulanPSL-2.0）](../LICENSE)。独立分发、可替换的
`libusb-1.0.dll` 适用 LGPL-2.1-or-later；组件链接方式、再分发条件和替换权利见
[第三方许可说明](../THIRD_PARTY_NOTICES.md)。
