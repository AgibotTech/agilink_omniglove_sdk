// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PoseNode.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/pose_node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PoseNode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x8c, 0x18, 0xd1, 0xbe, 0x1b, 0xf7, 0xc3,
      0x64, 0x9c, 0xbe, 0x5d, 0x31, 0xa5, 0x1c, 0x9f,
      0x5a, 0xbd, 0x24, 0x55, 0x4e, 0x73, 0x9a, 0x6f,
      0x14, 0x58, 0x89, 0x5f, 0x83, 0x8e, 0xfa, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose_imu__functions.h"
#include "omniglove_interfaces/msg/detail/pose_emf__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseEmf__EXPECTED_HASH = {1, {
    0x6f, 0xe2, 0x9f, 0x46, 0xd7, 0xcc, 0x82, 0x16,
    0x17, 0x48, 0xbf, 0x6a, 0x25, 0x2a, 0xba, 0x64,
    0xfd, 0x69, 0xdd, 0x52, 0x55, 0x62, 0xb9, 0x9c,
    0x7b, 0xc8, 0x22, 0x3b, 0xbc, 0xb5, 0x71, 0xa8,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseImu__EXPECTED_HASH = {1, {
    0x93, 0x58, 0xfc, 0x9c, 0x49, 0xee, 0xad, 0x2f,
    0x17, 0xb1, 0x5e, 0xcb, 0xa2, 0xc2, 0xbd, 0x18,
    0x54, 0x90, 0xe8, 0x77, 0x47, 0x17, 0xca, 0x5e,
    0x04, 0x54, 0x75, 0x2f, 0xe4, 0xd4, 0x3f, 0x3d,
  }};
#endif

static char omniglove_interfaces__msg__PoseNode__TYPE_NAME[] = "omniglove_interfaces/msg/PoseNode";
static char omniglove_interfaces__msg__PoseEmf__TYPE_NAME[] = "omniglove_interfaces/msg/PoseEmf";
static char omniglove_interfaces__msg__PoseImu__TYPE_NAME[] = "omniglove_interfaces/msg/PoseImu";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PoseNode__FIELD_NAME__emf[] = "emf";
static char omniglove_interfaces__msg__PoseNode__FIELD_NAME__imu[] = "imu";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PoseNode__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PoseNode__FIELD_NAME__emf, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PoseEmf__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseNode__FIELD_NAME__imu, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PoseImu__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PoseNode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__PoseEmf__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseImu__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PoseNode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PoseNode__TYPE_NAME, 33, 33},
      {omniglove_interfaces__msg__PoseNode__FIELDS, 2, 2},
    },
    {omniglove_interfaces__msg__PoseNode__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseEmf__EXPECTED_HASH, omniglove_interfaces__msg__PoseEmf__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__PoseEmf__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseImu__EXPECTED_HASH, omniglove_interfaces__msg__PoseImu__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__msg__PoseImu__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "PoseEmf emf\n"
  "PoseImu imu";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PoseNode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PoseNode__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PoseNode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PoseNode__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__PoseEmf__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__msg__PoseImu__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
