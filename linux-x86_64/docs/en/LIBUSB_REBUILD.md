# Rebuilding and Replacing libusb

This platform package provides LGPL-2.1-or-later libusb as a separate,
replaceable shared library and does not overwrite system libusb. Users may
study, modify, debug, or replace it under the license terms.

## Corresponding source

The complete corresponding source archive is:

```text
../../../sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz
```

## Rebuild on Linux

Run from the release root. `platform_dir` selects the current host architecture:

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

The result is `build/libusb/libusb/libusb-1.0.so.0.6.0`.

## Replace and restore

Back up the original real file, then replace it without changing the SONAME link:

```bash
platform_dir="linux-$(uname -m)"
cp "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0" \
  "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0.original"
cp build/libusb/libusb/libusb-1.0.so.0.6.0 \
  "$platform_dir/lib/omniglove/libusb-1.0.so.0.6.0"
"$platform_dir/build/omniglove_consumer/omniglove_c_consumer"
```

Restore by copying the `.original` file back. For an installed SDK, replace the
same real filename under the prefix's `lib/omniglove/`. The replacement must
remain ABI-compatible with `libusb-1.0.so.0`; incompatible changes may prevent
loading or cause runtime failure.
