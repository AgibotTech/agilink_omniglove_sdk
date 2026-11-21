// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/ImuRawSample.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/imu_raw_sample__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__ImuRawSample__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x17, 0x8a, 0x7a, 0x86, 0xec, 0x89, 0xa1,
      0x95, 0x68, 0x80, 0x4e, 0x36, 0xea, 0xb4, 0xe0,
      0x1d, 0xa5, 0xdc, 0x54, 0xfb, 0xeb, 0x84, 0xa3,
      0xec, 0x65, 0x48, 0xef, 0xc8, 0xbc, 0x13, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__ImuRawSample__TYPE_NAME[] = "omniglove_interfaces/msg/ImuRawSample";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__ImuRawSample__FIELD_NAME__axes[] = "axes";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__ImuRawSample__FIELDS[] = {
  {
    {omniglove_interfaces__msg__ImuRawSample__FIELD_NAME__axes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__ImuRawSample__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__ImuRawSample__TYPE_NAME, 37, 37},
      {omniglove_interfaces__msg__ImuRawSample__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16[6] axes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__ImuRawSample__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__ImuRawSample__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__ImuRawSample__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__ImuRawSample__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
