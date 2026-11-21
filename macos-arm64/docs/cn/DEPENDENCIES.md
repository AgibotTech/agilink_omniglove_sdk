# macOS 依赖

- 运行需要 macOS 14 或更高版本。选择与应用架构一致的包。libc++、libSystem 和
  USB 框架由操作系统提供。
- SDK 和 OTA 工具从 `lib/omniglove/` 加载可替换的 libusb。SDK 静态链接 fmt 和
  wjwwood serial。第三方许可说明位于发行仓根目录的 `THIRD_PARTY_NOTICES_CN.md`。
- 编译 C/C++ 示例需要 Xcode 或 Command Line Tools 提供的 Apple Clang，以及 CMake
  3.20 或更高版本。实际编译器和 SDK 版本见平台的 `BUILD_INFO.txt`。
- 本包覆盖 USB Vendor Bulk、DIRECT 数据流、只读固件查询和手套 OTA 工具。实机验收范围见
  构建信息。UDP 输出及可选标定、teleop、ROS 工具不在当前 macOS 交付范围内。
