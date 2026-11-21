# Rebuild and replace libusb on Android

The AAR contains a separate `libusb-1.0.so` for each ABI. Under LGPL-2.1-or-later,
recipients may study, modify, debug and replace libusb; reverse engineering for
debugging these changes is permitted. Omniglove does not need to be relinked.
Distribute these instructions, corresponding sources and licenses with the AAR.

The complete corresponding libusb-cmake/vendored libusb source is in the release
root `sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz`. License and
author notices are under `licenses/`. Extract the archive, then from `android/`:

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

Edit the extracted libusb source before building when making changes. Preserve
libusb API/ABI and SONAME `libusb-1.0.so`; NDK 28 preserves 16 KB ELF alignment on
the 64-bit ABIs. Use the following Python script to create an AAR with the rebuilt
libraries (run from `android/`):

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

Point the app's Gradle dependency at the replacement AAR and rebuild/sign the
app normally. Test USB permission, transfers and reconnect behavior on target
hardware. `libc++_shared.so` remains the compatible NDK runtime supplied by the
package. The original release SHA256SUMS describes the original distribution;
record new checksums for your modified distribution.
