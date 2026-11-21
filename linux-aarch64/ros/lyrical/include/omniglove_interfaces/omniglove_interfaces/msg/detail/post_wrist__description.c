// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_wrist__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostWrist__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xdf, 0x42, 0x51, 0xa1, 0xe2, 0xbe, 0x87,
      0x84, 0x55, 0x5f, 0xad, 0xf4, 0xac, 0xb1, 0x50,
      0xc4, 0x3a, 0x64, 0xec, 0xda, 0x6e, 0xf8, 0x47,
      0xe0, 0xc2, 0xea, 0xf1, 0x2f, 0x91, 0x27, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose6__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__Pose6__EXPECTED_HASH = {1, {
    0x3e, 0x39, 0xef, 0xc8, 0xd5, 0xc0, 0xbd, 0x8c,
    0xfd, 0xca, 0xee, 0x6a, 0xaf, 0xc3, 0x00, 0xe2,
    0xde, 0x62, 0x8f, 0x34, 0x74, 0x36, 0x7f, 0x1c,
    0xdb, 0xb0, 0xae, 0xf3, 0x8b, 0x81, 0x6c, 0x49,
  }};
#endif

static char omniglove_interfaces__msg__PostWrist__TYPE_NAME[] = "omniglove_interfaces/msg/PostWrist";
static char omniglove_interfaces__msg__Pose6__TYPE_NAME[] = "omniglove_interfaces/msg/Pose6";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostWrist__FIELD_NAME__landmark[] = "landmark";
static char omniglove_interfaces__msg__PostWrist__FIELD_NAME__quaternion_xyzw[] = "quaternion_xyzw";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostWrist__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostWrist__FIELD_NAME__landmark, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostWrist__FIELD_NAME__quaternion_xyzw, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PostWrist__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PostWrist__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostWrist__TYPE_NAME, 34, 34},
      {omniglove_interfaces__msg__PostWrist__FIELDS, 2, 2},
    },
    {omniglove_interfaces__msg__PostWrist__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__Pose6__EXPECTED_HASH, omniglove_interfaces__msg__Pose6__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__Pose6__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Pose6 landmark\n"
  "float32[4] quaternion_xyzw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostWrist__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostWrist__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostWrist__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostWrist__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__Pose6__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
