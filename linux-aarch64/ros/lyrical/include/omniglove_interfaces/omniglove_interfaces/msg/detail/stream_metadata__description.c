// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/stream_metadata__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__StreamMetadata__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x8b, 0xef, 0x19, 0x9c, 0x78, 0x70, 0xfe,
      0x1c, 0x24, 0x5c, 0xe7, 0x55, 0x23, 0x9f, 0x60,
      0x4f, 0x4b, 0x0a, 0xf5, 0xe4, 0x8a, 0x08, 0x30,
      0xe2, 0xcd, 0x76, 0xda, 0xc0, 0x75, 0x48, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char omniglove_interfaces__msg__StreamMetadata__TYPE_NAME[] = "omniglove_interfaces/msg/StreamMetadata";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__header[] = "header";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__hand[] = "hand";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__flags[] = "flags";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__layout_version[] = "layout_version";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__device_sequence[] = "device_sequence";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__device_uid[] = "device_uid";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__source_device_id[] = "source_device_id";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__connection_generation[] = "connection_generation";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__source_sequence[] = "source_sequence";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__sample_monotonic_ns[] = "sample_monotonic_ns";
static char omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__gap_count[] = "gap_count";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__StreamMetadata__FIELDS[] = {
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__hand, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__layout_version, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__device_sequence, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__device_uid, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__source_device_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__connection_generation, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__source_sequence, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__sample_monotonic_ns, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__FIELD_NAME__gap_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__StreamMetadata__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__StreamMetadata__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__StreamMetadata__TYPE_NAME, 39, 39},
      {omniglove_interfaces__msg__StreamMetadata__FIELDS, 11, 11},
    },
    {omniglove_interfaces__msg__StreamMetadata__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0\n"
  "\n"
  "uint8 HAND_UNKNOWN=0\n"
  "uint8 HAND_LEFT=1\n"
  "uint8 HAND_RIGHT=2\n"
  "\n"
  "uint32 SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH=1\n"
  "uint32 DEVICE_SEQUENCE_VALID=2\n"
  "\n"
  "std_msgs/Header header\n"
  "uint8 hand\n"
  "uint32 flags\n"
  "uint32 layout_version\n"
  "uint32 device_sequence\n"
  "uint64 device_uid\n"
  "uint64 source_device_id\n"
  "uint64 connection_generation\n"
  "uint64 source_sequence\n"
  "uint64 sample_monotonic_ns\n"
  "uint64 gap_count";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__StreamMetadata__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__StreamMetadata__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 429, 429},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__StreamMetadata__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__StreamMetadata__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
