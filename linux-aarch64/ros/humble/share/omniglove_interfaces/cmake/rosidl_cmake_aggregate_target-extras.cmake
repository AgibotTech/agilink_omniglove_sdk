# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target omniglove_interfaces::omniglove_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${omniglove_interfaces_TARGETS}.
if(omniglove_interfaces_TARGETS AND NOT TARGET omniglove_interfaces::omniglove_interfaces)
  add_library(omniglove_interfaces::omniglove_interfaces INTERFACE IMPORTED)
  set_target_properties(omniglove_interfaces::omniglove_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${omniglove_interfaces_TARGETS}")
endif()
