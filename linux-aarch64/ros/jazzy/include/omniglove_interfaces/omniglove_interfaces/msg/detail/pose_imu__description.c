// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/pose_imu__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PoseImu__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x58, 0xfc, 0x9c, 0x49, 0xee, 0xad, 0x2f,
      0x17, 0xb1, 0x5e, 0xcb, 0xa2, 0xc2, 0xbd, 0x18,
      0x54, 0x90, 0xe8, 0x77, 0x47, 0x17, 0xca, 0x5e,
      0x04, 0x54, 0x75, 0x2f, 0xe4, 0xd4, 0x3f, 0x3d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__PoseImu__TYPE_NAME[] = "omniglove_interfaces/msg/PoseImu";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PoseImu__FIELD_NAME__roll_pitch_yaw_cdeg[] = "roll_pitch_yaw_cdeg";
static char omniglove_interfaces__msg__PoseImu__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PoseImu__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PoseImu__FIELD_NAME__roll_pitch_yaw_cdeg, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseImu__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PoseImu__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PoseImu__TYPE_NAME, 32, 32},
      {omniglove_interfaces__msg__PoseImu__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16[3] roll_pitch_yaw_cdeg\n"
  "uint8 flags";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PoseImu__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PoseImu__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PoseImu__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PoseImu__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
