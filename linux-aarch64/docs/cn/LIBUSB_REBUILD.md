# libusb 重建与替换

本平台包将 LGPL-2.1-or-later 的 libusb 作为独立、可替换共享库提供，不会覆盖系统
libusb。用户可以依据许可证条款研究、修改、调试或替换该库。

## 对应源码

完整对应源码归档位于：

```text
../../../sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz
```

## Linux 重建

从发行根目录执行；`platform_dir` 会选择当前机器的 Linux 架构包：

```bash
platform_dir="linux-$(uname -m)"
mkdir -p build/libusb-source build/libusb
tar -xzf sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz \
  -C build/libusb-source
cmake \
  -S "$platform_dir/rebuild/libusb" \
  -B build/libusb \
  -DCMAKE_BUILD_TYPE=Release \
  -DLIBUSB_SOURCE_DIR="$PWD/build/libusb-source/libusb-bea6567b63796ab27c1c33257d230284fb2d8316"
cmake --build build/libusb --target usb-1.0 --parallel
```

构建结果为 `build/libusb/libusb/libusb-1.0.so.0.6.0`。

## 替换与恢复

先备份原文件，再以重建文件替换平台 `lib/` 目录中的真实文件；不要改变 SONAME 链接：

```bash
platform_dir="linux-$(uname -m)"
cp "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0" \
  "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0.original"
cp build/libusb/libusb/libusb-1.0.so.0.6.0 \
  "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0"
"$platform_dir/build/omniglove_consumer/omniglove_c_consumer"
```

如需恢复，复制 `.original` 文件回原名。若已安装到系统前缀，则替换该前缀
`lib/omniglove/` 中的同名真实文件。替换后的库必须保持
`libusb-1.0.so.0` ABI 兼容；不兼容修改可能导致加载或运行失败。
