[中文说明](README_CN.md)

# Omniglove Android SDK

Android 6.0+ (API 23), USB Host/OTG. The AAR exposes the same API to Java and
Kotlin and contains native libraries for `arm64-v8a`, `armeabi-v7a`, and `x86_64`.
The SDK supports POSE, POST, REMOTE, POSE tactile position mode, DIRECT/UDP,
stream status, firmware information, and public control/BONE operations.

```text
android/
├── aar/                 AAR with Java API, JNI, native libraries and Prefab
├── apk/                 Debug sample APK
├── java/                Public Java API source
├── include/             Public C ABI header
├── examples/sample/     Standalone Gradle app consuming the packaged AAR
├── docs/en/ and cn/     API and libusb rebuild instructions
├── rebuild/libusb/      Standalone libusb CMake project
└── BUILD_INFO.txt       Versions, source state and software validation
```

## Quick start

Copy `aar/omniglove-1.0.1.aar` into your application's `app/libs/`:

```kotlin
dependencies { implementation(files("libs/omniglove-1.0.1.aar")) }
```

The AAR includes `libomniglove.so`, replaceable `libusb-1.0.so`, and
`libc++_shared.so`. Java/Kotlin use does not require the NDK, AndroidX, or an
additional Kotlin runtime. Apps with other native libraries must use a compatible
shared C++ runtime. Native consumers can enable Prefab and use module
`omniglove_api`; USB permission still requires the Java SDK.

Install the included demo on an Android USB Host device:

```bash
adb install -r apk/omniglove-sample-debug.apk
```

Connect the glove using USB OTG, tap **Authorize USB**, grant system permission,
then tap **Start streams**. The debug APK is a development example.

To rebuild the example, install JDK 17+, Android SDK platform 35, and the pinned
Gradle/AGP dependencies (Gradle 8.9 / AGP 8.7.3):

```bash
export JAVA_HOME=/path/to/jdk-17-or-newer
export ANDROID_HOME=/path/to/Android/Sdk
cd examples/sample
./gradlew :app:assembleDebug
```

The example references the AAR in this package and builds after moving the
complete `android/` directory. Its APK is written to
`app/build/outputs/apk/debug/app-debug.apk`. Add `--offline` once all Java build
dependencies are cached. No SDK implementation source or NDK build is needed.

See [API and lifecycle](docs/en/ANDROID_API.md), the shared
[C API](../docs/en/PUBLIC_C_API.md) and [data layouts](../docs/en/STREAM_DATA_V1.md).
Verify the complete distribution from its root with `sha256sum --check SHA256SUMS`.
Versions and validation status are recorded in `BUILD_INFO.txt`; real glove USB,
hotplug, background operation and performance acceptance require target hardware.

License texts are in [../licenses/](../licenses/). See
[third-party notices](../THIRD_PARTY_NOTICES.md) and
[libusb source/replacement instructions](docs/en/LIBUSB_REBUILD.md).
