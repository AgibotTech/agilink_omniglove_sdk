#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__DeviceInfo() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__DeviceInfo__init(msg: *mut DeviceInfo) -> bool;
    fn omniglove_interfaces__msg__DeviceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeviceInfo>, size: usize) -> bool;
    fn omniglove_interfaces__msg__DeviceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeviceInfo>);
    fn omniglove_interfaces__msg__DeviceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeviceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<DeviceInfo>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__DeviceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeviceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub product_key: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opaque_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nominal_source_rate_hz: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_namespace: rosidl_runtime_rs::String,

}

impl DeviceInfo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_LEFT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_RIGHT: u8 = 2;

}


impl Default for DeviceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__DeviceInfo__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__DeviceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeviceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__DeviceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__DeviceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__DeviceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeviceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeviceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/DeviceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__DeviceInfo() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__ImuRawSample() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__ImuRawSample__init(msg: *mut ImuRawSample) -> bool;
    fn omniglove_interfaces__msg__ImuRawSample__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ImuRawSample>, size: usize) -> bool;
    fn omniglove_interfaces__msg__ImuRawSample__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ImuRawSample>);
    fn omniglove_interfaces__msg__ImuRawSample__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ImuRawSample>, out_seq: *mut rosidl_runtime_rs::Sequence<ImuRawSample>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__ImuRawSample
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImuRawSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [i16; 6],

}



impl Default for ImuRawSample {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__ImuRawSample__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__ImuRawSample__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ImuRawSample {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__ImuRawSample__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__ImuRawSample__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__ImuRawSample__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ImuRawSample {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ImuRawSample where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/ImuRawSample";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__ImuRawSample() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__Pose6() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__Pose6__init(msg: *mut Pose6) -> bool;
    fn omniglove_interfaces__msg__Pose6__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pose6>, size: usize) -> bool;
    fn omniglove_interfaces__msg__Pose6__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pose6>);
    fn omniglove_interfaces__msg__Pose6__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pose6>, out_seq: *mut rosidl_runtime_rs::Sequence<Pose6>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__Pose6
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose6 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position_m: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub quaternion_xyzw: [f32; 4],

}



impl Default for Pose6 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__Pose6__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__Pose6__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pose6 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__Pose6__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__Pose6__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__Pose6__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pose6 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pose6 where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/Pose6";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__Pose6() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseData() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseData__init(msg: *mut PoseData) -> bool;
    fn omniglove_interfaces__msg__PoseData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseData>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseData>);
    fn omniglove_interfaces__msg__PoseData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseData>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseData>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mapped: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub components: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_tick_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub thumb: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrist: super::super::msg::rmw::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_of_hand_imu: super::super::msg::rmw::PoseImu,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tactile: super::super::msg::rmw::TactileData,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for PoseData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseData__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseData where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseData() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseEmf() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseEmf__init(msg: *mut PoseEmf) -> bool;
    fn omniglove_interfaces__msg__PoseEmf__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseEmf>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseEmf__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseEmf>);
    fn omniglove_interfaces__msg__PoseEmf__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseEmf>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseEmf>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseEmf
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseEmf {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position_mm: [i16; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_pitch_roll_cdeg: [i16; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence_milli: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,

}



impl Default for PoseEmf {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseEmf__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseEmf__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseEmf {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseEmf__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseEmf__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseEmf__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseEmf {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseEmf where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseEmf";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseEmf() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseImu() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseImu__init(msg: *mut PoseImu) -> bool;
    fn omniglove_interfaces__msg__PoseImu__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseImu>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseImu__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseImu>);
    fn omniglove_interfaces__msg__PoseImu__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseImu>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseImu>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseImu
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseImu {

    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_pitch_yaw_cdeg: [i16; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u8,

}



impl Default for PoseImu {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseImu__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseImu__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseImu {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseImu__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseImu__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseImu__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseImu {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseImu where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseImu";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseImu() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseNode() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseNode__init(msg: *mut PoseNode) -> bool;
    fn omniglove_interfaces__msg__PoseNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseNode>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseNode>);
    fn omniglove_interfaces__msg__PoseNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseNode>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseNode>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub emf: super::super::msg::rmw::PoseEmf,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu: super::super::msg::rmw::PoseImu,

}



impl Default for PoseNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseNode__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseNode where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseNode() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseSample() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseSample__init(msg: *mut PoseSample) -> bool;
    fn omniglove_interfaces__msg__PoseSample__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseSample>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseSample__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseSample>);
    fn omniglove_interfaces__msg__PoseSample__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseSample>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseSample>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseSample
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::super::msg::rmw::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::PoseData,

}



impl Default for PoseSample {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseSample__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseSample__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseSample {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseSample__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseSample__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseSample__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseSample {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseSample where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseSample";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseSample() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseTactilePositionSample() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PoseTactilePositionSample__init(msg: *mut PoseTactilePositionSample) -> bool;
    fn omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseTactilePositionSample>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseTactilePositionSample>);
    fn omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseTactilePositionSample>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseTactilePositionSample>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PoseTactilePositionSample
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseTactilePositionSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::super::msg::rmw::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::PoseData,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tac_pos: super::super::msg::rmw::TactilePositionData,

}



impl Default for PoseTactilePositionSample {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PoseTactilePositionSample__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PoseTactilePositionSample__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseTactilePositionSample {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PoseTactilePositionSample__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseTactilePositionSample {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseTactilePositionSample where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PoseTactilePositionSample";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PoseTactilePositionSample() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostData() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostData__init(msg: *mut PostData) -> bool;
    fn omniglove_interfaces__msg__PostData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostData>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostData>);
    fn omniglove_interfaces__msg__PostData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostData>, out_seq: *mut rosidl_runtime_rs::Sequence<PostData>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mapped: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_tick_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub thumb: super::super::msg::rmw::PostThumb,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::super::msg::rmw::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::super::msg::rmw::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::super::msg::rmw::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::super::msg::rmw::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrist: super::super::msg::rmw::PostWrist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for PostData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostData__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostData where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostData() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFinger() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostFinger__init(msg: *mut PostFinger) -> bool;
    fn omniglove_interfaces__msg__PostFinger__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostFinger>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostFinger__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostFinger>);
    fn omniglove_interfaces__msg__PostFinger__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostFinger>, out_seq: *mut rosidl_runtime_rs::Sequence<PostFinger>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostFinger
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostFinger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_rad: super::super::msg::rmw::PostFingerJoints,


    // This member is not documented.
    #[allow(missing_docs)]
    pub landmarks: super::super::msg::rmw::PostFingerLandmarks,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_tip_target: super::super::msg::rmw::Pose6,

}



impl Default for PostFinger {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostFinger__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostFinger__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostFinger {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFinger__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFinger__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFinger__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostFinger {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostFinger where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostFinger";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFinger() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFingerJoints() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostFingerJoints__init(msg: *mut PostFingerJoints) -> bool;
    fn omniglove_interfaces__msg__PostFingerJoints__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostFingerJoints>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostFingerJoints__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostFingerJoints>);
    fn omniglove_interfaces__msg__PostFingerJoints__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostFingerJoints>, out_seq: *mut rosidl_runtime_rs::Sequence<PostFingerJoints>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostFingerJoints
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostFingerJoints {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp_abduction: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp_flexion: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pip_flexion: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dip_flexion: f32,

}



impl Default for PostFingerJoints {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostFingerJoints__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostFingerJoints__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostFingerJoints {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerJoints__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerJoints__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerJoints__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostFingerJoints {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostFingerJoints where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostFingerJoints";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFingerJoints() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFingerLandmarks() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostFingerLandmarks__init(msg: *mut PostFingerLandmarks) -> bool;
    fn omniglove_interfaces__msg__PostFingerLandmarks__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostFingerLandmarks>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostFingerLandmarks__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostFingerLandmarks>);
    fn omniglove_interfaces__msg__PostFingerLandmarks__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostFingerLandmarks>, out_seq: *mut rosidl_runtime_rs::Sequence<PostFingerLandmarks>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostFingerLandmarks
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostFingerLandmarks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pip: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dip: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::super::msg::rmw::Pose6,

}



impl Default for PostFingerLandmarks {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostFingerLandmarks__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostFingerLandmarks__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostFingerLandmarks {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerLandmarks__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerLandmarks__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostFingerLandmarks__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostFingerLandmarks {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostFingerLandmarks where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostFingerLandmarks";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostFingerLandmarks() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumb() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostThumb__init(msg: *mut PostThumb) -> bool;
    fn omniglove_interfaces__msg__PostThumb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostThumb>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostThumb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostThumb>);
    fn omniglove_interfaces__msg__PostThumb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostThumb>, out_seq: *mut rosidl_runtime_rs::Sequence<PostThumb>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostThumb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostThumb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_rad: super::super::msg::rmw::PostThumbJoints,


    // This member is not documented.
    #[allow(missing_docs)]
    pub landmarks: super::super::msg::rmw::PostThumbLandmarks,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_tip_target: super::super::msg::rmw::Pose6,

}



impl Default for PostThumb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostThumb__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostThumb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostThumb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostThumb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostThumb where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostThumb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumb() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumbJoints() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostThumbJoints__init(msg: *mut PostThumbJoints) -> bool;
    fn omniglove_interfaces__msg__PostThumbJoints__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostThumbJoints>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostThumbJoints__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostThumbJoints>);
    fn omniglove_interfaces__msg__PostThumbJoints__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostThumbJoints>, out_seq: *mut rosidl_runtime_rs::Sequence<PostThumbJoints>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostThumbJoints
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostThumbJoints {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmc_rotation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmc_abduction: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmc_flexion: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp_flexion: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip_flexion: f32,

}



impl Default for PostThumbJoints {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostThumbJoints__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostThumbJoints__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostThumbJoints {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbJoints__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbJoints__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbJoints__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostThumbJoints {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostThumbJoints where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostThumbJoints";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumbJoints() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumbLandmarks() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostThumbLandmarks__init(msg: *mut PostThumbLandmarks) -> bool;
    fn omniglove_interfaces__msg__PostThumbLandmarks__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostThumbLandmarks>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostThumbLandmarks__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostThumbLandmarks>);
    fn omniglove_interfaces__msg__PostThumbLandmarks__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostThumbLandmarks>, out_seq: *mut rosidl_runtime_rs::Sequence<PostThumbLandmarks>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostThumbLandmarks
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostThumbLandmarks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmc: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::super::msg::rmw::Pose6,

}



impl Default for PostThumbLandmarks {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostThumbLandmarks__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostThumbLandmarks__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostThumbLandmarks {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbLandmarks__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbLandmarks__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostThumbLandmarks__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostThumbLandmarks {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostThumbLandmarks where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostThumbLandmarks";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostThumbLandmarks() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostWrist() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostWrist__init(msg: *mut PostWrist) -> bool;
    fn omniglove_interfaces__msg__PostWrist__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostWrist>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostWrist__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostWrist>);
    fn omniglove_interfaces__msg__PostWrist__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostWrist>, out_seq: *mut rosidl_runtime_rs::Sequence<PostWrist>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostWrist
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostWrist {

    // This member is not documented.
    #[allow(missing_docs)]
    pub landmark: super::super::msg::rmw::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quaternion_xyzw: [f32; 4],

}



impl Default for PostWrist {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostWrist__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostWrist__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostWrist {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostWrist__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostWrist__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostWrist__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostWrist {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostWrist where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostWrist";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostWrist() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostSample() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__PostSample__init(msg: *mut PostSample) -> bool;
    fn omniglove_interfaces__msg__PostSample__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PostSample>, size: usize) -> bool;
    fn omniglove_interfaces__msg__PostSample__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PostSample>);
    fn omniglove_interfaces__msg__PostSample__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PostSample>, out_seq: *mut rosidl_runtime_rs::Sequence<PostSample>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__PostSample
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::super::msg::rmw::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::PostData,

}



impl Default for PostSample {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__PostSample__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__PostSample__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PostSample {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostSample__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostSample__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__PostSample__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PostSample {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PostSample where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/PostSample";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__PostSample() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__StreamMetadata() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__StreamMetadata__init(msg: *mut StreamMetadata) -> bool;
    fn omniglove_interfaces__msg__StreamMetadata__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StreamMetadata>, size: usize) -> bool;
    fn omniglove_interfaces__msg__StreamMetadata__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StreamMetadata>);
    fn omniglove_interfaces__msg__StreamMetadata__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StreamMetadata>, out_seq: *mut rosidl_runtime_rs::Sequence<StreamMetadata>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__StreamMetadata
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StreamMetadata {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout_version: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_sequence: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_device_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connection_generation: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_sequence: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_monotonic_ns: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gap_count: u64,

}

impl StreamMetadata {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_LEFT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAND_RIGHT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_SEQUENCE_VALID: u32 = 2;

}


impl Default for StreamMetadata {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__StreamMetadata__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__StreamMetadata__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StreamMetadata {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__StreamMetadata__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__StreamMetadata__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__StreamMetadata__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StreamMetadata {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StreamMetadata where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/StreamMetadata";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__StreamMetadata() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileData() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__TactileData__init(msg: *mut TactileData) -> bool;
    fn omniglove_interfaces__msg__TactileData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileData>, size: usize) -> bool;
    fn omniglove_interfaces__msg__TactileData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileData>);
    fn omniglove_interfaces__msg__TactileData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileData>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileData>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__TactileData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mapped: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub thumb: super::super::msg::rmw::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::super::msg::rmw::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::super::msg::rmw::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::super::msg::rmw::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::super::msg::rmw::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub palm_surface: super::super::msg::rmw::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for TactileData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__TactileData__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__TactileData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileData where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/TactileData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileData() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileFinger() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__TactileFinger__init(msg: *mut TactileFinger) -> bool;
    fn omniglove_interfaces__msg__TactileFinger__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileFinger>, size: usize) -> bool;
    fn omniglove_interfaces__msg__TactileFinger__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileFinger>);
    fn omniglove_interfaces__msg__TactileFinger__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileFinger>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileFinger>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__TactileFinger
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileFinger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::super::msg::rmw::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pad: super::super::msg::rmw::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::super::msg::rmw::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub root: super::super::msg::rmw::TactileRegion,

}



impl Default for TactileFinger {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__TactileFinger__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__TactileFinger__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileFinger {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileFinger__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileFinger__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileFinger__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileFinger {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileFinger where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/TactileFinger";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileFinger() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactilePointPosition() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__TactilePointPosition__init(msg: *mut TactilePointPosition) -> bool;
    fn omniglove_interfaces__msg__TactilePointPosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactilePointPosition>, size: usize) -> bool;
    fn omniglove_interfaces__msg__TactilePointPosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactilePointPosition>);
    fn omniglove_interfaces__msg__TactilePointPosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactilePointPosition>, out_seq: *mut rosidl_runtime_rs::Sequence<TactilePointPosition>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__TactilePointPosition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactilePointPosition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

}



impl Default for TactilePointPosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__TactilePointPosition__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__TactilePointPosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactilePointPosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePointPosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePointPosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePointPosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactilePointPosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactilePointPosition where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/TactilePointPosition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactilePointPosition() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactilePositionData() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__TactilePositionData__init(msg: *mut TactilePositionData) -> bool;
    fn omniglove_interfaces__msg__TactilePositionData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactilePositionData>, size: usize) -> bool;
    fn omniglove_interfaces__msg__TactilePositionData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactilePositionData>);
    fn omniglove_interfaces__msg__TactilePositionData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactilePositionData>, out_seq: *mut rosidl_runtime_rs::Sequence<TactilePositionData>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__TactilePositionData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactilePositionData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub coordinate_frame: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TactilePointPosition>,

}

impl TactilePositionData {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRAME_WRIST: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNIT_METER: u32 = 1;

}


impl Default for TactilePositionData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__TactilePositionData__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__TactilePositionData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactilePositionData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePositionData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePositionData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactilePositionData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactilePositionData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactilePositionData where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/TactilePositionData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactilePositionData() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileRegion() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__msg__TactileRegion__init(msg: *mut TactileRegion) -> bool;
    fn omniglove_interfaces__msg__TactileRegion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileRegion>, size: usize) -> bool;
    fn omniglove_interfaces__msg__TactileRegion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileRegion>);
    fn omniglove_interfaces__msg__TactileRegion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileRegion>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileRegion>) -> bool;
}

// Corresponds to omniglove_interfaces__msg__TactileRegion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileRegion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rows: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub columns: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for TactileRegion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__msg__TactileRegion__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__msg__TactileRegion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileRegion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileRegion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileRegion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__msg__TactileRegion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileRegion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileRegion where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/msg/TactileRegion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__msg__TactileRegion() }
  }
}


