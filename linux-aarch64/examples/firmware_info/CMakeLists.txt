# Copyright (c) 2025 Agibot Co., Ltd.
# Omniglove SDK is licensed under Mulan PSL v2.
# SPDX-License-Identifier: MulanPSL-2.0

cmake_minimum_required(VERSION 3.20)
project(omniglove_firmware_info LANGUAGES C)

find_package(OmnigloveSDK CONFIG REQUIRED)

add_executable(omniglove_firmware_info main.c)
target_link_libraries(omniglove_firmware_info PRIVATE OmnigloveSDK::api)
