# Android libusb 重建与替换

AAR 为每个 ABI 提供独立的 `libusb-1.0.so`。接收者可按 LGPL-2.1-or-later 研究、修改、
调试和替换 libusb，并可为调试这些修改进行逆向工程；无需重新链接 Omniglove。
再分发 AAR 时同时提供本说明、对应源码与许可证。

完整对应的 libusb-cmake 及其 vendored libusb 源码位于发行根
`sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz`，许可证和作者声明
位于 `licenses/`。解压后，在 `android/` 目录执行：

```bash
export ANDROID_HOME=/path/to/Android/Sdk
ndk_path="$ANDROID_HOME/ndk/28.2.13676358"
cmake_path="$ANDROID_HOME/cmake/3.22.1/bin/cmake"
tar -xzf ../sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz -C /path/to/source-parent
for abi in arm64-v8a armeabi-v7a x86_64; do
  "$cmake_path" -S rebuild/libusb -B "build/libusb/$abi" -G Ninja \
    -DCMAKE_MAKE_PROGRAM="$ANDROID_HOME/cmake/3.22.1/bin/ninja" \
    -DCMAKE_TOOLCHAIN_FILE="$ndk_path/build/cmake/android.toolchain.cmake" \
    -DANDROID_ABI="$abi" -DANDROID_PLATFORM=android-23 -DCMAKE_BUILD_TYPE=Release \
    -DLIBUSB_SOURCE_DIR=/path/to/source-parent/libusb-bea6567b63796ab27c1c33257d230284fb2d8316
  "$cmake_path" --build "build/libusb/$abi"
done
```

需要修改时先编辑解压的 libusb 源码。保持 libusb API/ABI 和 SONAME `libusb-1.0.so`
兼容；NDK 28 的 64 位 ABI 保持 16 KB ELF 对齐。以下 Python 脚本从 `android/` 执行，
生成替换三 ABI libusb 的新 AAR：

```python
from pathlib import Path
from zipfile import ZipFile
abis = ("arm64-v8a", "armeabi-v7a", "x86_64")
with ZipFile("aar/omniglove-1.0.0.aar") as original, ZipFile("aar/omniglove-custom.aar", "w") as replacement:
    for entry in original.infolist():
        if entry.filename not in {f"jni/{abi}/libusb-1.0.so" for abi in abis}:
            replacement.writestr(entry, original.read(entry.filename))
    for abi in abis:
        replacement.write(Path("build/libusb") / abi / "libusb/libusb-1.0.so", f"jni/{abi}/libusb-1.0.so")
```

将应用 Gradle 依赖改为替换后的 AAR，正常重建并签名应用，在目标实机复测 USB 授权、
收发和重连。`libc++_shared.so` 继续使用发行包所带的兼容 NDK runtime。
原 `SHA256SUMS` 仅对应原发行文件；修改后为自己的发行包生成新校验和。
