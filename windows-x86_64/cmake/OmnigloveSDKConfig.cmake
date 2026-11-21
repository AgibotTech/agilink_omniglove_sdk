# Copyright (c) 2025 Agibot Co., Ltd.
# Omniglove SDK is licensed under Mulan PSL v2.
# SPDX-License-Identifier: MulanPSL-2.0

include_guard(GLOBAL)

get_filename_component(_OMNIGLOVE_SDK_PREFIX "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)
set(_OMNIGLOVE_SDK_DLL "${_OMNIGLOVE_SDK_PREFIX}/bin/omniglove.dll")
set(_OMNIGLOVE_SDK_IMPLIB "${_OMNIGLOVE_SDK_PREFIX}/lib/omniglove.lib")
set(_OMNIGLOVE_LIBUSB_DLL "${_OMNIGLOVE_SDK_PREFIX}/bin/libusb-1.0.dll")

foreach(_required IN ITEMS
        "${_OMNIGLOVE_SDK_DLL}"
        "${_OMNIGLOVE_SDK_IMPLIB}"
        "${_OMNIGLOVE_LIBUSB_DLL}")
    if(NOT EXISTS "${_required}")
        message(FATAL_ERROR "Omniglove SDK release artifact is missing: ${_required}")
    endif()
endforeach()

if(NOT TARGET OmnigloveSDK::api)
    add_library(OmnigloveSDK::api SHARED IMPORTED)
    set_target_properties(OmnigloveSDK::api PROPERTIES
        IMPORTED_LOCATION "${_OMNIGLOVE_SDK_DLL}"
        IMPORTED_IMPLIB "${_OMNIGLOVE_SDK_IMPLIB}"
        INTERFACE_INCLUDE_DIRECTORIES "${_OMNIGLOVE_SDK_PREFIX}/include")
endif()

set(OmnigloveSDK_RUNTIME_DLLS
    "${_OMNIGLOVE_SDK_DLL};${_OMNIGLOVE_LIBUSB_DLL}")

if(NOT COMMAND omniglove_sdk_deploy_runtime)
    function(omniglove_sdk_deploy_runtime target_name)
        if(NOT TARGET "${target_name}")
            message(FATAL_ERROR
                "omniglove_sdk_deploy_runtime target does not exist: ${target_name}")
        endif()
        foreach(_runtime_dll IN LISTS OmnigloveSDK_RUNTIME_DLLS)
            add_custom_command(TARGET "${target_name}" POST_BUILD
                COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                    "${_runtime_dll}" "$<TARGET_FILE_DIR:${target_name}>"
                VERBATIM)
        endforeach()
    endfunction()
endif()

set(OmnigloveSDK_VERSION "1.0.0")
set(OmnigloveSDK_ABI_VERSION "6.0.0")
set(OmnigloveSDK_FOUND TRUE)
