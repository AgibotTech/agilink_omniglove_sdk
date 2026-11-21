// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/pose_emf__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PoseEmf__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0xe2, 0x9f, 0x46, 0xd7, 0xcc, 0x82, 0x16,
      0x17, 0x48, 0xbf, 0x6a, 0x25, 0x2a, 0xba, 0x64,
      0xfd, 0x69, 0xdd, 0x52, 0x55, 0x62, 0xb9, 0x9c,
      0x7b, 0xc8, 0x22, 0x3b, 0xbc, 0xb5, 0x71, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__PoseEmf__TYPE_NAME[] = "omniglove_interfaces/msg/PoseEmf";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PoseEmf__FIELD_NAME__position_mm[] = "position_mm";
static char omniglove_interfaces__msg__PoseEmf__FIELD_NAME__yaw_pitch_roll_cdeg[] = "yaw_pitch_roll_cdeg";
static char omniglove_interfaces__msg__PoseEmf__FIELD_NAME__confidence_milli[] = "confidence_milli";
static char omniglove_interfaces__msg__PoseEmf__FIELD_NAME__valid[] = "valid";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PoseEmf__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PoseEmf__FIELD_NAME__position_mm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseEmf__FIELD_NAME__yaw_pitch_roll_cdeg, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseEmf__FIELD_NAME__confidence_milli, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseEmf__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PoseEmf__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PoseEmf__TYPE_NAME, 32, 32},
      {omniglove_interfaces__msg__PoseEmf__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16[3] position_mm\n"
  "int16[3] yaw_pitch_roll_cdeg\n"
  "uint16 confidence_milli\n"
  "bool valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PoseEmf__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PoseEmf__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PoseEmf__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PoseEmf__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
