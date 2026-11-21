# 重建发行包内的 libusb

从发行仓根目录进入操作。平台 `BUILD_INFO.txt` 的 `libusb_commit` 字段对应
`sources/` 中的源码归档。

```sh
platform="macos-$(uname -m)"
commit=$(sed -n 's/^libusb_commit=//p' "$platform/BUILD_INFO.txt")
tar -xzf "sources/libusb-$commit.tar.gz"
cmake -S "$platform/rebuild/libusb" -B build/libusb \
  -DCMAKE_BUILD_TYPE=Release -DCMAKE_OSX_DEPLOYMENT_TARGET=14.0 \
  -DCMAKE_OSX_ARCHITECTURES="$(uname -m)" \
  -DLIBUSB_SOURCE_DIR="$PWD/libusb-$commit"
cmake --build build/libusb --target usb-1.0
cp build/libusb/libusb/libusb-1.0.0.6.0.dylib "$platform/lib/omniglove/"
```

保留 `libusb-1.0.0.dylib` 符号链接。SDK 通过 `@loader_path/omniglove` 加载该库。
见 [libusb 许可证](../../../licenses/libusb-COPYING)。
