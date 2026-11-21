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
project(omniglove_cpp_acceptance_demo LANGUAGES CXX)

find_package(OmnigloveSDK CONFIG REQUIRED)
find_package(Threads REQUIRED)

add_executable(omniglove_cpp_acceptance_demo cpp_acceptance_demo.cpp)
target_compile_features(omniglove_cpp_acceptance_demo PRIVATE cxx_std_17)
target_link_libraries(omniglove_cpp_acceptance_demo PRIVATE
    OmnigloveSDK::api
    Threads::Threads)
