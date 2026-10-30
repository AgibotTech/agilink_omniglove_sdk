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

include_guard(GLOBAL)

# The same config supports the unpacked release layout
# (<release>/linux-<arch>/cmake) and the installed layout
# (<prefix>/lib/cmake/OmnigloveSDK).
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/../lib/libomniglove.so.6.0.0")
    get_filename_component(_OMNIGLOVE_SDK_PREFIX "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)
else()
    get_filename_component(_OMNIGLOVE_SDK_PREFIX "${CMAKE_CURRENT_LIST_DIR}/../../.." ABSOLUTE)
endif()
set(_OMNIGLOVE_SDK_LIBRARY "${_OMNIGLOVE_SDK_PREFIX}/lib/libomniglove.so.6.0.0")

if(NOT EXISTS "${_OMNIGLOVE_SDK_LIBRARY}")
    message(FATAL_ERROR "Omniglove SDK shared library is missing: ${_OMNIGLOVE_SDK_LIBRARY}")
endif()

if(NOT TARGET OmnigloveSDK::api)
    add_library(OmnigloveSDK::api SHARED IMPORTED)
    set_target_properties(OmnigloveSDK::api PROPERTIES
        IMPORTED_LOCATION "${_OMNIGLOVE_SDK_LIBRARY}"
        IMPORTED_SONAME "libomniglove.so.6"
        INTERFACE_INCLUDE_DIRECTORIES "${_OMNIGLOVE_SDK_PREFIX}/include"
        INTERFACE_LINK_LIBRARIES "")
endif()

set(OmnigloveSDK_VERSION "1.0.0")
set(OmnigloveSDK_ABI_VERSION "6.0.0")
set(OmnigloveSDK_FOUND TRUE)
