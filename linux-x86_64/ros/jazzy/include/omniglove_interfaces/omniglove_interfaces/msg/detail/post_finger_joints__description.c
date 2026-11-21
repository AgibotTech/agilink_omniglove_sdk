// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_finger_joints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostFingerJoints__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x31, 0xb6, 0x1d, 0x7d, 0x96, 0xac, 0x17,
      0x17, 0xf1, 0xe6, 0x12, 0x6c, 0xd8, 0x70, 0x67,
      0x05, 0x04, 0x52, 0x9d, 0x26, 0xfc, 0x73, 0x5e,
      0xcc, 0x0e, 0x37, 0xe8, 0x40, 0x24, 0x01, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME[] = "omniglove_interfaces/msg/PostFingerJoints";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__mcp_abduction[] = "mcp_abduction";
static char omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__mcp_flexion[] = "mcp_flexion";
static char omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__pip_flexion[] = "pip_flexion";
static char omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__dip_flexion[] = "dip_flexion";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostFingerJoints__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__mcp_abduction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__mcp_flexion, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__pip_flexion, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFingerJoints__FIELD_NAME__dip_flexion, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PostFingerJoints__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME, 41, 41},
      {omniglove_interfaces__msg__PostFingerJoints__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 mcp_abduction\n"
  "float32 mcp_flexion\n"
  "float32 pip_flexion\n"
  "float32 dip_flexion";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostFingerJoints__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostFingerJoints__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostFingerJoints__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
