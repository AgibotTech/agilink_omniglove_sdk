// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_thumb_joints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostThumbJoints__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x78, 0xe3, 0x2a, 0x15, 0x5d, 0x0f, 0xe0,
      0x52, 0xc1, 0xdd, 0x1e, 0x75, 0xaf, 0x1b, 0xad,
      0x21, 0xec, 0x38, 0xe4, 0x93, 0xbe, 0xea, 0x7f,
      0x2b, 0x08, 0x65, 0xc6, 0xb7, 0x84, 0xc2, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__PostThumbJoints__TYPE_NAME[] = "omniglove_interfaces/msg/PostThumbJoints";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_rotation[] = "cmc_rotation";
static char omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_abduction[] = "cmc_abduction";
static char omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_flexion[] = "cmc_flexion";
static char omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__mcp_flexion[] = "mcp_flexion";
static char omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__ip_flexion[] = "ip_flexion";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostThumbJoints__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_rotation, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_abduction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__cmc_flexion, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__mcp_flexion, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbJoints__FIELD_NAME__ip_flexion, 10, 10},
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
omniglove_interfaces__msg__PostThumbJoints__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostThumbJoints__TYPE_NAME, 40, 40},
      {omniglove_interfaces__msg__PostThumbJoints__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 cmc_rotation\n"
  "float32 cmc_abduction\n"
  "float32 cmc_flexion\n"
  "float32 mcp_flexion\n"
  "float32 ip_flexion";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostThumbJoints__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostThumbJoints__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 102, 102},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostThumbJoints__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostThumbJoints__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
