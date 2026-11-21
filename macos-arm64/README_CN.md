[English README](README.md)

# Omniglove SDK macOS 版

在 macOS 14 或更高版本上，选择与 `uname -m` 一致的包。SDK 提供公开 C ABI 和
DIRECT 数据回调。架构、SDK/ABI 版本和验收状态见 `BUILD_INFO.txt`。包内附带只读固件
查询工具、手套 OTA 维护工具和 C/C++ 示例。

## 在包内运行

```sh
./bin/omniglove_firmware_info
cmake -S examples -B build/examples -DOmnigloveSDK_DIR="$PWD/cmake"
cmake --build build/examples
./build/examples/omniglove_c_consumer
./build/examples/omniglove_pose_data --frames 10
```

业务工程使用 `find_package(OmnigloveSDK CONFIG REQUIRED)` 和 `OmnigloveSDK::api`。
移动包时请保持 `lib/` 的目录结构。业务应用独立分发时，在链接 SDK 的 CMake target
上调用 `omniglove_sdk_deploy_runtime(<target>)`，并将可执行文件旁的 `omniglove-sdk/`
一同交付。示例可用 `-DOMNIGLOVE_DEPLOY_EXAMPLES=ON` 验证这一布局。

## 安装和卸载

```sh
./install.sh "$HOME/.local"
cmake -S examples -B build/installed -DCMAKE_PREFIX_PATH="$HOME/.local"
cmake --build build/installed
./build/installed/omniglove_c_consumer
"$HOME/.local/share/OmnigloveSDK/uninstall.sh"
```

安装后的说明、构建信息和卸载脚本位于前缀下的 `share/OmnigloveSDK/`。公开 C API
见发行仓根目录的 `docs/cn/PUBLIC_C_API.md`。

- [依赖和平台范围](docs/cn/DEPENDENCIES.md)
- [重建和替换 libusb](docs/cn/LIBUSB_REBUILD.md)
- [手套 OTA 维护工具](docs/cn/OTA.md)
