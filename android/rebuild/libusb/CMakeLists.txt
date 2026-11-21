# Copyright (c) 2025 Agibot Co., Ltd.
# SPDX-License-Identifier: MulanPSL-2.0
cmake_minimum_required(VERSION 3.22.1)
project(omniglove_android_libusb_rebuild LANGUAGES C)
set(CMAKE_C_VISIBILITY_PRESET hidden)

if(NOT ANDROID)
    message(FATAL_ERROR "Use the Android NDK toolchain")
endif()
if(NOT IS_DIRECTORY "${LIBUSB_SOURCE_DIR}")
    message(FATAL_ERROR "Set LIBUSB_SOURCE_DIR to the extracted corresponding source")
endif()

set(LIBUSB_BUILD_SHARED_LIBS ON CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_UDEV OFF CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_DEBUG_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_INSTALL_TARGETS OFF CACHE BOOL "" FORCE)
add_subdirectory("${LIBUSB_SOURCE_DIR}" libusb)
# CMake does not add versioned filenames/SONAMEs for Android.
set_target_properties(usb-1.0 PROPERTIES VERSION 0.6.0 SOVERSION 0)
