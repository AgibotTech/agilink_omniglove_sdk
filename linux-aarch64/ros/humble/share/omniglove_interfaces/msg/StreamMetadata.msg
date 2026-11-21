# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

uint8 HAND_UNKNOWN=0
uint8 HAND_LEFT=1
uint8 HAND_RIGHT=2

uint32 SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH=1
uint32 DEVICE_SEQUENCE_VALID=2

std_msgs/Header header
uint8 hand
uint32 flags
uint32 layout_version
uint32 device_sequence
uint64 device_uid
uint64 source_device_id
uint64 connection_generation
uint64 source_sequence
uint64 sample_monotonic_ns
uint64 gap_count
