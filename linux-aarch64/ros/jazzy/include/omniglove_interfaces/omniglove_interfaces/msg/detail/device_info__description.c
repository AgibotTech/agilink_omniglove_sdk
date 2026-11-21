// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/device_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__DeviceInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0xef, 0xf9, 0xb6, 0xd9, 0xe2, 0xe7, 0xdd,
      0xf3, 0x75, 0x02, 0xb3, 0x7b, 0x23, 0x88, 0x6a,
      0x79, 0x84, 0xe2, 0xec, 0x48, 0x00, 0x5e, 0xa3,
      0x92, 0x8a, 0x4a, 0x8e, 0xf2, 0x13, 0x4f, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__DeviceInfo__TYPE_NAME[] = "omniglove_interfaces/msg/DeviceInfo";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__uid[] = "uid";
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__product_key[] = "product_key";
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__opaque_token[] = "opaque_token";
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__hand[] = "hand";
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__nominal_source_rate_hz[] = "nominal_source_rate_hz";
static char omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__topic_namespace[] = "topic_namespace";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__DeviceInfo__FIELDS[] = {
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__uid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__product_key, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__opaque_token, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__hand, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__nominal_source_rate_hz, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__DeviceInfo__FIELD_NAME__topic_namespace, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__DeviceInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__DeviceInfo__TYPE_NAME, 35, 35},
      {omniglove_interfaces__msg__DeviceInfo__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
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
  "uint64 uid\n"
  "string product_key\n"
  "string opaque_token\n"
  "uint8 hand\n"
  "uint32 nominal_source_rate_hz\n"
  "string topic_namespace";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__DeviceInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__DeviceInfo__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 237, 237},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__DeviceInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__DeviceInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
