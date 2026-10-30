# Copyright (c) 2025 Agibot Co., Ltd.
# Omniglove SDK is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#     http://license.coscl.org.cn/MulanPSL2
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
# See the Mulan PSL v2 for more details.
# SPDX-License-Identifier: MulanPSL-2.0

cmake_minimum_required(VERSION 3.20)
project(omniglove_libusb_rebuild LANGUAGES C)

if(NOT IS_DIRECTORY "${LIBUSB_SOURCE_DIR}")
    message(FATAL_ERROR "Set LIBUSB_SOURCE_DIR to the extracted corresponding source")
endif()

set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(LIBUSB_BUILD_SHARED_LIBS ON CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_UDEV OFF CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_ENABLE_DEBUG_LOGGING OFF CACHE BOOL "" FORCE)
set(LIBUSB_INSTALL_TARGETS OFF CACHE BOOL "" FORCE)

add_subdirectory("${LIBUSB_SOURCE_DIR}" libusb)

# Upstream configure.ac uses libtool version-info 6:0:6, which maps to
# libusb-1.0.so.0.6.0 with SONAME libusb-1.0.so.0.
set_target_properties(usb-1.0 PROPERTIES
    VERSION 0.6.0
    SOVERSION 0)
