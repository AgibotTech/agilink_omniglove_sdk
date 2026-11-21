# SPDX-License-Identifier: MulanPSL-2.0
cmake_minimum_required(VERSION 3.20)
project(omniglove_macos_examples LANGUAGES C CXX)

find_package(OmnigloveSDK CONFIG REQUIRED)
add_executable(omniglove_c_consumer c_consumer.c)
add_executable(omniglove_firmware_info firmware_info.c)
add_executable(omniglove_pose_data pose_data.cpp)
target_compile_features(omniglove_pose_data PRIVATE cxx_std_17)
foreach(example omniglove_c_consumer omniglove_firmware_info omniglove_pose_data)
    target_link_libraries(${example} PRIVATE OmnigloveSDK::api)
endforeach()

option(OMNIGLOVE_DEPLOY_EXAMPLES "Copy the SDK runtime next to the C consumer" OFF)
if(OMNIGLOVE_DEPLOY_EXAMPLES)
    omniglove_sdk_deploy_runtime(omniglove_c_consumer)
endif()
