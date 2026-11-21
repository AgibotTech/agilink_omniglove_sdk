// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice
#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
bool cdr_serialize_omniglove_interfaces__msg__PostThumbLandmarks(
  const omniglove_interfaces__msg__PostThumbLandmarks * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
bool cdr_deserialize_omniglove_interfaces__msg__PostThumbLandmarks(
  eprosima::fastcdr::Cdr &,
  omniglove_interfaces__msg__PostThumbLandmarks * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
size_t get_serialized_size_omniglove_interfaces__msg__PostThumbLandmarks(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
size_t max_serialized_size_omniglove_interfaces__msg__PostThumbLandmarks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
bool cdr_serialize_key_omniglove_interfaces__msg__PostThumbLandmarks(
  const omniglove_interfaces__msg__PostThumbLandmarks * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
size_t get_serialized_size_key_omniglove_interfaces__msg__PostThumbLandmarks(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
size_t max_serialized_size_key_omniglove_interfaces__msg__PostThumbLandmarks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
bool has_buffer_fields_omniglove_interfaces__msg__PostThumbLandmarks();

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, omniglove_interfaces, msg, PostThumbLandmarks)();

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
