# macOS dependencies

- Runtime requires macOS 14 or later. Use the package for the application's
  architecture. The OS provides libc++, libSystem and the USB frameworks.
- The SDK and OTA utility load replaceable libusb from `lib/omniglove/`.
  The SDK statically links fmt and wjwwood serial. See `THIRD_PARTY_NOTICES.md`
  at the release root.
- Building C/C++ examples requires Apple Clang from Xcode or Command Line
  Tools and CMake 3.20 or later. Build compiler and SDK versions are recorded in
  the platform's `BUILD_INFO.txt`.
- This package covers USB Vendor Bulk, DIRECT data streams, read-only firmware
  queries and the glove OTA tool. See the build information for hardware
  acceptance. UDP output, calibration, teleop and ROS are outside the current
  macOS package scope.
