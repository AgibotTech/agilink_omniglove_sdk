# Rebuild the packaged libusb

From the release root, select the corresponding archive under `sources/`.
The `libusb_commit` field in the platform `BUILD_INFO.txt` identifies it.

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

Keep the `libusb-1.0.0.dylib` symbolic link. The SDK loads it through
`@loader_path/omniglove`. See the [libusb license](../../../licenses/libusb-COPYING).
