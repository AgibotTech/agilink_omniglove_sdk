[English guide](README.md)

# Omniglove Android SDK

支持 Android 6.0+（API 23）及 USB Host/OTG。AAR 提供 Java/Kotlin 共用接口，包含
`arm64-v8a`、`armeabi-v7a`、`x86_64` 三种架构的 native 库。支持 POSE、POST、REMOTE、
POSE 触觉坐标模式、DIRECT/UDP、流状态、只读固件信息和公开控制/BONE 操作。

```text
android/
├── aar/                 Java API、JNI、native 库和 Prefab 的 AAR
├── apk/                 示例 debug APK
├── java/                公开 Java API 源码
├── include/             公开 C ABI 头文件
├── examples/sample/     使用包内 AAR 的独立 Gradle 应用
├── docs/en/ 和 cn/      双语 API 与 libusb 重建说明
├── rebuild/libusb/      独立 libusb CMake 工程
└── BUILD_INFO.txt       版本、源码状态和软件验证信息
```

## 快速接入

把 `aar/omniglove-1.0.1.aar` 复制到应用的 `app/libs/`：

```kotlin
dependencies { implementation(files("libs/omniglove-1.0.1.aar")) }
```

AAR 已包含 `libomniglove.so`、独立可替换的 `libusb-1.0.so` 和 `libc++_shared.so`。
Java/Kotlin 接入无需 NDK、AndroidX 或额外 Kotlin runtime。若应用还有其他 native 库，
须使用兼容的共享 C++ runtime。需要公开 C API 的 native 应用可启用 Prefab，模块名为
`omniglove_api`；USB 授权仍须通过 Java SDK 完成。

在支持 USB Host 的 Android 设备安装示例：

```bash
adb install -r apk/omniglove-sample-debug.apk
```

通过 USB OTG 连接手套，依次点击 **Authorize USB**、允许系统授权、**Start streams**。
随包 debug APK 用于开发验证。

重建示例需要 JDK 17+、Android SDK platform 35 和固定 Java 构建依赖
（Gradle 8.9 / AGP 8.7.3）：

```bash
export JAVA_HOME=/path/to/jdk-17-or-newer
export ANDROID_HOME=/path/to/Android/Sdk
cd examples/sample
./gradlew :app:assembleDebug
```

示例引用本包 AAR；完整移动 `android/` 目录后仍可构建。输出为
`app/build/outputs/apk/debug/app-debug.apk`。依赖缓存完整后可添加 `--offline`；无需
SDK 内部源码或 NDK 编译。

详细使用见 [API 与生命周期](docs/cn/ANDROID_API.md)、共享
[公开 C API](../docs/cn/PUBLIC_C_API.md) 和 [数据布局](../docs/cn/STREAM_DATA_V1.md)。
在发行根执行 `sha256sum --check SHA256SUMS` 校验全包。
版本与验证状态见 `BUILD_INFO.txt`；真实手套 USB、热插拔、后台与性能须在目标实机验收。

许可证原文位于 [../licenses/](../licenses/)，另见
[第三方声明](../THIRD_PARTY_NOTICES_CN.md) 和
[libusb 对应源码与替换说明](docs/cn/LIBUSB_REBUILD.md)。
