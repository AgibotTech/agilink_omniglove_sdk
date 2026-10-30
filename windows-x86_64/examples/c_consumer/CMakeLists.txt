# Copyright (c) 2025 Agibot Co., Ltd.
# Omniglove SDK is licensed under Mulan PSL v2.
# SPDX-License-Identifier: MulanPSL-2.0

cmake_minimum_required(VERSION 3.20)
project(omniglove_c_consumer LANGUAGES C)

find_package(OmnigloveSDK CONFIG REQUIRED)

add_executable(omniglove_c_consumer main.c)
target_link_libraries(omniglove_c_consumer PRIVATE OmnigloveSDK::api)

# Optional for app-local distribution. An application running on a machine
# where install.bat configured PATH does not require this deployment step.
omniglove_sdk_deploy_runtime(omniglove_c_consumer)
