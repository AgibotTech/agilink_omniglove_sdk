# SPDX-License-Identifier: MulanPSL-2.0
include_guard(GLOBAL)

get_filename_component(_omniglove_prefix "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)
if(NOT EXISTS "${_omniglove_prefix}/lib/libomniglove.6.0.0.dylib")
    get_filename_component(_omniglove_prefix "${CMAKE_CURRENT_LIST_DIR}/../../.." ABSOLUTE)
endif()
set(_omniglove_library "${_omniglove_prefix}/lib/libomniglove.6.0.0.dylib")
set(_omniglove_libusb "${_omniglove_prefix}/lib/omniglove/libusb-1.0.0.6.0.dylib")
foreach(_required IN ITEMS "${_omniglove_library}" "${_omniglove_libusb}"
        "${_omniglove_prefix}/lib/libomniglove.6.dylib"
        "${_omniglove_prefix}/lib/omniglove/libusb-1.0.0.dylib"
        "${_omniglove_prefix}/include/omniglove/omniglove.h")
    if(NOT EXISTS "${_required}")
        set(OmnigloveSDK_FOUND FALSE)
        set(OmnigloveSDK_NOT_FOUND_MESSAGE "Missing Omniglove SDK artifact: ${_required}")
        return()
    endif()
endforeach()

if(NOT TARGET OmnigloveSDK::api)
    add_library(OmnigloveSDK::api SHARED IMPORTED)
    set_target_properties(OmnigloveSDK::api PROPERTIES
        IMPORTED_LOCATION "${_omniglove_library}"
        IMPORTED_SONAME "@rpath/libomniglove.6.dylib"
        INTERFACE_INCLUDE_DIRECTORIES "${_omniglove_prefix}/include")
endif()

function(omniglove_sdk_deploy_runtime target_name)
    if(NOT TARGET "${target_name}")
        message(FATAL_ERROR "omniglove_sdk_deploy_runtime target does not exist: ${target_name}")
    endif()
    get_target_property(_sdk_library OmnigloveSDK::api IMPORTED_LOCATION)
    get_filename_component(_sdk_lib_dir "${_sdk_library}" DIRECTORY)
    set(_runtime_dir "$<TARGET_FILE_DIR:${target_name}>/omniglove-sdk")
    set_property(TARGET "${target_name}" APPEND PROPERTY BUILD_RPATH "@loader_path/omniglove-sdk")
    set_property(TARGET "${target_name}" APPEND PROPERTY INSTALL_RPATH "@loader_path/omniglove-sdk")
    add_custom_command(TARGET "${target_name}" POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${_runtime_dir}/omniglove"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${_sdk_library}" "${_runtime_dir}/libomniglove.6.dylib"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${_sdk_lib_dir}/omniglove/libusb-1.0.0.6.0.dylib"
            "${_runtime_dir}/omniglove/libusb-1.0.0.dylib"
        VERBATIM)
endfunction()

set(OmnigloveSDK_VERSION "1.0.1")
set(OmnigloveSDK_ABI_VERSION "6.0.0")
unset(_required)
unset(_omniglove_libusb)
unset(_omniglove_library)
unset(_omniglove_prefix)
