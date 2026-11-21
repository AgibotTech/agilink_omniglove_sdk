# SPDX-License-Identifier: MulanPSL-2.0
cmake_minimum_required(VERSION 3.20)
project(omniglove_macos_libusb_rebuild LANGUAGES C)

if(NOT CMAKE_SYSTEM_NAME STREQUAL "Darwin" OR
   NOT IS_DIRECTORY "${LIBUSB_SOURCE_DIR}")
    message(FATAL_ERROR "On macOS, set LIBUSB_SOURCE_DIR to the extracted corresponding source")
endif()
set(LIBUSB_BUILD_SHARED_LIBS ON CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_DEBUG_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_INSTALL_TARGETS OFF CACHE BOOL "" FORCE)
add_subdirectory("${LIBUSB_SOURCE_DIR}" libusb)
set_target_properties(usb-1.0 PROPERTIES VERSION 0.6.0 SOVERSION 0)
