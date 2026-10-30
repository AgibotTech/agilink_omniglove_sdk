#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to omniglove_interfaces__msg__DeviceInfo
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeviceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub product_key: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opaque_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nominal_source_rate_hz: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_namespace: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeviceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for DeviceInfo {
  type RmwMsg = super::msg::rmw::DeviceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uid: msg.uid,
        product_key: msg.product_key.as_str().into(),
        opaque_token: msg.opaque_token.as_str().into(),
        hand: msg.hand,
        nominal_source_rate_hz: msg.nominal_source_rate_hz,
        topic_namespace: msg.topic_namespace.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      uid: msg.uid,
        product_key: msg.product_key.as_str().into(),
        opaque_token: msg.opaque_token.as_str().into(),
      hand: msg.hand,
      nominal_source_rate_hz: msg.nominal_source_rate_hz,
        topic_namespace: msg.topic_namespace.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uid: msg.uid,
      product_key: msg.product_key.to_string(),
      opaque_token: msg.opaque_token.to_string(),
      hand: msg.hand,
      nominal_source_rate_hz: msg.nominal_source_rate_hz,
      topic_namespace: msg.topic_namespace.to_string(),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__ImuRawSample

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImuRawSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [i16; 6],

}



impl Default for ImuRawSample {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ImuRawSample::default())
  }
}

impl rosidl_runtime_rs::Message for ImuRawSample {
  type RmwMsg = super::msg::rmw::ImuRawSample;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        axes: msg.axes,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        axes: msg.axes,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      axes: msg.axes,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__Pose6

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pose6::default())
  }
}

impl rosidl_runtime_rs::Message for Pose6 {
  type RmwMsg = super::msg::rmw::Pose6;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_m: msg.position_m,
        quaternion_xyzw: msg.quaternion_xyzw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_m: msg.position_m,
        quaternion_xyzw: msg.quaternion_xyzw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position_m: msg.position_m,
      quaternion_xyzw: msg.quaternion_xyzw,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub thumb: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrist: super::msg::PoseNode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_of_hand_imu: super::msg::PoseImu,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tactile: super::msg::TactileData,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: Vec<u8>,

}



impl Default for PoseData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseData::default())
  }
}

impl rosidl_runtime_rs::Message for PoseData {
  type RmwMsg = super::msg::rmw::PoseData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mapped: msg.mapped,
        components: msg.components,
        device_tick_ms: msg.device_tick_ms,
        thumb: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.thumb)).into_owned(),
        index: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.index)).into_owned(),
        middle: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.middle)).into_owned(),
        ring: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.ring)).into_owned(),
        pinky: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.pinky)).into_owned(),
        wrist: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Owned(msg.wrist)).into_owned(),
        back_of_hand_imu: super::msg::PoseImu::into_rmw_message(std::borrow::Cow::Owned(msg.back_of_hand_imu)).into_owned(),
        tactile: super::msg::TactileData::into_rmw_message(std::borrow::Cow::Owned(msg.tactile)).into_owned(),
        unmapped_data: msg.unmapped_data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mapped: msg.mapped,
      components: msg.components,
      device_tick_ms: msg.device_tick_ms,
        thumb: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.thumb)).into_owned(),
        index: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.index)).into_owned(),
        middle: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.middle)).into_owned(),
        ring: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ring)).into_owned(),
        pinky: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pinky)).into_owned(),
        wrist: super::msg::PoseNode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrist)).into_owned(),
        back_of_hand_imu: super::msg::PoseImu::into_rmw_message(std::borrow::Cow::Borrowed(&msg.back_of_hand_imu)).into_owned(),
        tactile: super::msg::TactileData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tactile)).into_owned(),
        unmapped_data: msg.unmapped_data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mapped: msg.mapped,
      components: msg.components,
      device_tick_ms: msg.device_tick_ms,
      thumb: super::msg::PoseNode::from_rmw_message(msg.thumb),
      index: super::msg::PoseNode::from_rmw_message(msg.index),
      middle: super::msg::PoseNode::from_rmw_message(msg.middle),
      ring: super::msg::PoseNode::from_rmw_message(msg.ring),
      pinky: super::msg::PoseNode::from_rmw_message(msg.pinky),
      wrist: super::msg::PoseNode::from_rmw_message(msg.wrist),
      back_of_hand_imu: super::msg::PoseImu::from_rmw_message(msg.back_of_hand_imu),
      tactile: super::msg::TactileData::from_rmw_message(msg.tactile),
      unmapped_data: msg.unmapped_data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseEmf

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseEmf::default())
  }
}

impl rosidl_runtime_rs::Message for PoseEmf {
  type RmwMsg = super::msg::rmw::PoseEmf;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_mm: msg.position_mm,
        yaw_pitch_roll_cdeg: msg.yaw_pitch_roll_cdeg,
        confidence_milli: msg.confidence_milli,
        valid: msg.valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_mm: msg.position_mm,
        yaw_pitch_roll_cdeg: msg.yaw_pitch_roll_cdeg,
      confidence_milli: msg.confidence_milli,
      valid: msg.valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position_mm: msg.position_mm,
      yaw_pitch_roll_cdeg: msg.yaw_pitch_roll_cdeg,
      confidence_milli: msg.confidence_milli,
      valid: msg.valid,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseImu

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseImu::default())
  }
}

impl rosidl_runtime_rs::Message for PoseImu {
  type RmwMsg = super::msg::rmw::PoseImu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        roll_pitch_yaw_cdeg: msg.roll_pitch_yaw_cdeg,
        flags: msg.flags,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        roll_pitch_yaw_cdeg: msg.roll_pitch_yaw_cdeg,
      flags: msg.flags,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      roll_pitch_yaw_cdeg: msg.roll_pitch_yaw_cdeg,
      flags: msg.flags,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseNode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub emf: super::msg::PoseEmf,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu: super::msg::PoseImu,

}



impl Default for PoseNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseNode::default())
  }
}

impl rosidl_runtime_rs::Message for PoseNode {
  type RmwMsg = super::msg::rmw::PoseNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        emf: super::msg::PoseEmf::into_rmw_message(std::borrow::Cow::Owned(msg.emf)).into_owned(),
        imu: super::msg::PoseImu::into_rmw_message(std::borrow::Cow::Owned(msg.imu)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        emf: super::msg::PoseEmf::into_rmw_message(std::borrow::Cow::Borrowed(&msg.emf)).into_owned(),
        imu: super::msg::PoseImu::into_rmw_message(std::borrow::Cow::Borrowed(&msg.imu)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      emf: super::msg::PoseEmf::from_rmw_message(msg.emf),
      imu: super::msg::PoseImu::from_rmw_message(msg.imu),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseSample
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::msg::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::PoseData,

}



impl Default for PoseSample {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseSample::default())
  }
}

impl rosidl_runtime_rs::Message for PoseSample {
  type RmwMsg = super::msg::rmw::PoseSample;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Owned(msg.metadata)).into_owned(),
        data: super::msg::PoseData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Borrowed(&msg.metadata)).into_owned(),
        data: super::msg::PoseData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      metadata: super::msg::StreamMetadata::from_rmw_message(msg.metadata),
      data: super::msg::PoseData::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PoseTactilePositionSample
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseTactilePositionSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::msg::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::PoseData,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tac_pos: super::msg::TactilePositionData,

}



impl Default for PoseTactilePositionSample {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseTactilePositionSample::default())
  }
}

impl rosidl_runtime_rs::Message for PoseTactilePositionSample {
  type RmwMsg = super::msg::rmw::PoseTactilePositionSample;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Owned(msg.metadata)).into_owned(),
        data: super::msg::PoseData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
        tac_pos: super::msg::TactilePositionData::into_rmw_message(std::borrow::Cow::Owned(msg.tac_pos)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Borrowed(&msg.metadata)).into_owned(),
        data: super::msg::PoseData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
        tac_pos: super::msg::TactilePositionData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tac_pos)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      metadata: super::msg::StreamMetadata::from_rmw_message(msg.metadata),
      data: super::msg::PoseData::from_rmw_message(msg.data),
      tac_pos: super::msg::TactilePositionData::from_rmw_message(msg.tac_pos),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub thumb: super::msg::PostThumb,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::msg::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::msg::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::msg::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::msg::PostFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrist: super::msg::PostWrist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: Vec<u8>,

}



impl Default for PostData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostData::default())
  }
}

impl rosidl_runtime_rs::Message for PostData {
  type RmwMsg = super::msg::rmw::PostData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mapped: msg.mapped,
        device_tick_ms: msg.device_tick_ms,
        flags: msg.flags,
        reserved: msg.reserved,
        frame_id: msg.frame_id,
        thumb: super::msg::PostThumb::into_rmw_message(std::borrow::Cow::Owned(msg.thumb)).into_owned(),
        index: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Owned(msg.index)).into_owned(),
        middle: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Owned(msg.middle)).into_owned(),
        ring: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Owned(msg.ring)).into_owned(),
        pinky: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Owned(msg.pinky)).into_owned(),
        wrist: super::msg::PostWrist::into_rmw_message(std::borrow::Cow::Owned(msg.wrist)).into_owned(),
        unmapped_data: msg.unmapped_data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mapped: msg.mapped,
      device_tick_ms: msg.device_tick_ms,
      flags: msg.flags,
      reserved: msg.reserved,
      frame_id: msg.frame_id,
        thumb: super::msg::PostThumb::into_rmw_message(std::borrow::Cow::Borrowed(&msg.thumb)).into_owned(),
        index: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.index)).into_owned(),
        middle: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.middle)).into_owned(),
        ring: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ring)).into_owned(),
        pinky: super::msg::PostFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pinky)).into_owned(),
        wrist: super::msg::PostWrist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrist)).into_owned(),
        unmapped_data: msg.unmapped_data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mapped: msg.mapped,
      device_tick_ms: msg.device_tick_ms,
      flags: msg.flags,
      reserved: msg.reserved,
      frame_id: msg.frame_id,
      thumb: super::msg::PostThumb::from_rmw_message(msg.thumb),
      index: super::msg::PostFinger::from_rmw_message(msg.index),
      middle: super::msg::PostFinger::from_rmw_message(msg.middle),
      ring: super::msg::PostFinger::from_rmw_message(msg.ring),
      pinky: super::msg::PostFinger::from_rmw_message(msg.pinky),
      wrist: super::msg::PostWrist::from_rmw_message(msg.wrist),
      unmapped_data: msg.unmapped_data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostFinger

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostFinger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_rad: super::msg::PostFingerJoints,


    // This member is not documented.
    #[allow(missing_docs)]
    pub landmarks: super::msg::PostFingerLandmarks,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_tip_target: super::msg::Pose6,

}



impl Default for PostFinger {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostFinger::default())
  }
}

impl rosidl_runtime_rs::Message for PostFinger {
  type RmwMsg = super::msg::rmw::PostFinger;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints_rad: super::msg::PostFingerJoints::into_rmw_message(std::borrow::Cow::Owned(msg.joints_rad)).into_owned(),
        landmarks: super::msg::PostFingerLandmarks::into_rmw_message(std::borrow::Cow::Owned(msg.landmarks)).into_owned(),
        rx_tip_target: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.rx_tip_target)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints_rad: super::msg::PostFingerJoints::into_rmw_message(std::borrow::Cow::Borrowed(&msg.joints_rad)).into_owned(),
        landmarks: super::msg::PostFingerLandmarks::into_rmw_message(std::borrow::Cow::Borrowed(&msg.landmarks)).into_owned(),
        rx_tip_target: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rx_tip_target)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints_rad: super::msg::PostFingerJoints::from_rmw_message(msg.joints_rad),
      landmarks: super::msg::PostFingerLandmarks::from_rmw_message(msg.landmarks),
      rx_tip_target: super::msg::Pose6::from_rmw_message(msg.rx_tip_target),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostFingerJoints

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostFingerJoints::default())
  }
}

impl rosidl_runtime_rs::Message for PostFingerJoints {
  type RmwMsg = super::msg::rmw::PostFingerJoints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mcp_abduction: msg.mcp_abduction,
        mcp_flexion: msg.mcp_flexion,
        pip_flexion: msg.pip_flexion,
        dip_flexion: msg.dip_flexion,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mcp_abduction: msg.mcp_abduction,
      mcp_flexion: msg.mcp_flexion,
      pip_flexion: msg.pip_flexion,
      dip_flexion: msg.dip_flexion,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mcp_abduction: msg.mcp_abduction,
      mcp_flexion: msg.mcp_flexion,
      pip_flexion: msg.pip_flexion,
      dip_flexion: msg.dip_flexion,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostFingerLandmarks

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostFingerLandmarks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pip: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dip: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::msg::Pose6,

}



impl Default for PostFingerLandmarks {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostFingerLandmarks::default())
  }
}

impl rosidl_runtime_rs::Message for PostFingerLandmarks {
  type RmwMsg = super::msg::rmw::PostFingerLandmarks;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mcp: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.mcp)).into_owned(),
        pip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.pip)).into_owned(),
        dip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.dip)).into_owned(),
        tip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.tip)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mcp: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mcp)).into_owned(),
        pip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pip)).into_owned(),
        dip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dip)).into_owned(),
        tip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tip)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mcp: super::msg::Pose6::from_rmw_message(msg.mcp),
      pip: super::msg::Pose6::from_rmw_message(msg.pip),
      dip: super::msg::Pose6::from_rmw_message(msg.dip),
      tip: super::msg::Pose6::from_rmw_message(msg.tip),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostThumb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostThumb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints_rad: super::msg::PostThumbJoints,


    // This member is not documented.
    #[allow(missing_docs)]
    pub landmarks: super::msg::PostThumbLandmarks,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_tip_target: super::msg::Pose6,

}



impl Default for PostThumb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostThumb::default())
  }
}

impl rosidl_runtime_rs::Message for PostThumb {
  type RmwMsg = super::msg::rmw::PostThumb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints_rad: super::msg::PostThumbJoints::into_rmw_message(std::borrow::Cow::Owned(msg.joints_rad)).into_owned(),
        landmarks: super::msg::PostThumbLandmarks::into_rmw_message(std::borrow::Cow::Owned(msg.landmarks)).into_owned(),
        rx_tip_target: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.rx_tip_target)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints_rad: super::msg::PostThumbJoints::into_rmw_message(std::borrow::Cow::Borrowed(&msg.joints_rad)).into_owned(),
        landmarks: super::msg::PostThumbLandmarks::into_rmw_message(std::borrow::Cow::Borrowed(&msg.landmarks)).into_owned(),
        rx_tip_target: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rx_tip_target)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints_rad: super::msg::PostThumbJoints::from_rmw_message(msg.joints_rad),
      landmarks: super::msg::PostThumbLandmarks::from_rmw_message(msg.landmarks),
      rx_tip_target: super::msg::Pose6::from_rmw_message(msg.rx_tip_target),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostThumbJoints

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostThumbJoints::default())
  }
}

impl rosidl_runtime_rs::Message for PostThumbJoints {
  type RmwMsg = super::msg::rmw::PostThumbJoints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmc_rotation: msg.cmc_rotation,
        cmc_abduction: msg.cmc_abduction,
        cmc_flexion: msg.cmc_flexion,
        mcp_flexion: msg.mcp_flexion,
        ip_flexion: msg.ip_flexion,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      cmc_rotation: msg.cmc_rotation,
      cmc_abduction: msg.cmc_abduction,
      cmc_flexion: msg.cmc_flexion,
      mcp_flexion: msg.mcp_flexion,
      ip_flexion: msg.ip_flexion,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cmc_rotation: msg.cmc_rotation,
      cmc_abduction: msg.cmc_abduction,
      cmc_flexion: msg.cmc_flexion,
      mcp_flexion: msg.mcp_flexion,
      ip_flexion: msg.ip_flexion,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostThumbLandmarks

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostThumbLandmarks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmc: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mcp: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::msg::Pose6,

}



impl Default for PostThumbLandmarks {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostThumbLandmarks::default())
  }
}

impl rosidl_runtime_rs::Message for PostThumbLandmarks {
  type RmwMsg = super::msg::rmw::PostThumbLandmarks;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmc: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.cmc)).into_owned(),
        mcp: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.mcp)).into_owned(),
        ip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.ip)).into_owned(),
        tip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.tip)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmc: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cmc)).into_owned(),
        mcp: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mcp)).into_owned(),
        ip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ip)).into_owned(),
        tip: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tip)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cmc: super::msg::Pose6::from_rmw_message(msg.cmc),
      mcp: super::msg::Pose6::from_rmw_message(msg.mcp),
      ip: super::msg::Pose6::from_rmw_message(msg.ip),
      tip: super::msg::Pose6::from_rmw_message(msg.tip),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostWrist

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostWrist {

    // This member is not documented.
    #[allow(missing_docs)]
    pub landmark: super::msg::Pose6,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quaternion_xyzw: [f32; 4],

}



impl Default for PostWrist {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostWrist::default())
  }
}

impl rosidl_runtime_rs::Message for PostWrist {
  type RmwMsg = super::msg::rmw::PostWrist;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        landmark: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Owned(msg.landmark)).into_owned(),
        quaternion_xyzw: msg.quaternion_xyzw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        landmark: super::msg::Pose6::into_rmw_message(std::borrow::Cow::Borrowed(&msg.landmark)).into_owned(),
        quaternion_xyzw: msg.quaternion_xyzw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      landmark: super::msg::Pose6::from_rmw_message(msg.landmark),
      quaternion_xyzw: msg.quaternion_xyzw,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__PostSample
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PostSample {

    // This member is not documented.
    #[allow(missing_docs)]
    pub metadata: super::msg::StreamMetadata,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::PostData,

}



impl Default for PostSample {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PostSample::default())
  }
}

impl rosidl_runtime_rs::Message for PostSample {
  type RmwMsg = super::msg::rmw::PostSample;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Owned(msg.metadata)).into_owned(),
        data: super::msg::PostData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        metadata: super::msg::StreamMetadata::into_rmw_message(std::borrow::Cow::Borrowed(&msg.metadata)).into_owned(),
        data: super::msg::PostData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      metadata: super::msg::StreamMetadata::from_rmw_message(msg.metadata),
      data: super::msg::PostData::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__StreamMetadata
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StreamMetadata {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StreamMetadata::default())
  }
}

impl rosidl_runtime_rs::Message for StreamMetadata {
  type RmwMsg = super::msg::rmw::StreamMetadata;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hand: msg.hand,
        flags: msg.flags,
        layout_version: msg.layout_version,
        device_sequence: msg.device_sequence,
        device_uid: msg.device_uid,
        source_device_id: msg.source_device_id,
        connection_generation: msg.connection_generation,
        source_sequence: msg.source_sequence,
        sample_monotonic_ns: msg.sample_monotonic_ns,
        gap_count: msg.gap_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hand: msg.hand,
      flags: msg.flags,
      layout_version: msg.layout_version,
      device_sequence: msg.device_sequence,
      device_uid: msg.device_uid,
      source_device_id: msg.source_device_id,
      connection_generation: msg.connection_generation,
      source_sequence: msg.source_sequence,
      sample_monotonic_ns: msg.sample_monotonic_ns,
      gap_count: msg.gap_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hand: msg.hand,
      flags: msg.flags,
      layout_version: msg.layout_version,
      device_sequence: msg.device_sequence,
      device_uid: msg.device_uid,
      source_device_id: msg.source_device_id,
      connection_generation: msg.connection_generation,
      source_sequence: msg.source_sequence,
      sample_monotonic_ns: msg.sample_monotonic_ns,
      gap_count: msg.gap_count,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__TactileData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub thumb: super::msg::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: super::msg::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::msg::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring: super::msg::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pinky: super::msg::TactileFinger,


    // This member is not documented.
    #[allow(missing_docs)]
    pub palm_surface: super::msg::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unmapped_data: Vec<u8>,

}



impl Default for TactileData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactileData::default())
  }
}

impl rosidl_runtime_rs::Message for TactileData {
  type RmwMsg = super::msg::rmw::TactileData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mapped: msg.mapped,
        count: msg.count,
        thumb: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Owned(msg.thumb)).into_owned(),
        index: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Owned(msg.index)).into_owned(),
        middle: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Owned(msg.middle)).into_owned(),
        ring: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Owned(msg.ring)).into_owned(),
        pinky: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Owned(msg.pinky)).into_owned(),
        palm_surface: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Owned(msg.palm_surface)).into_owned(),
        unmapped_data: msg.unmapped_data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mapped: msg.mapped,
      count: msg.count,
        thumb: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.thumb)).into_owned(),
        index: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.index)).into_owned(),
        middle: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.middle)).into_owned(),
        ring: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ring)).into_owned(),
        pinky: super::msg::TactileFinger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pinky)).into_owned(),
        palm_surface: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.palm_surface)).into_owned(),
        unmapped_data: msg.unmapped_data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mapped: msg.mapped,
      count: msg.count,
      thumb: super::msg::TactileFinger::from_rmw_message(msg.thumb),
      index: super::msg::TactileFinger::from_rmw_message(msg.index),
      middle: super::msg::TactileFinger::from_rmw_message(msg.middle),
      ring: super::msg::TactileFinger::from_rmw_message(msg.ring),
      pinky: super::msg::TactileFinger::from_rmw_message(msg.pinky),
      palm_surface: super::msg::TactileRegion::from_rmw_message(msg.palm_surface),
      unmapped_data: msg.unmapped_data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__TactileFinger

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileFinger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tip: super::msg::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pad: super::msg::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle: super::msg::TactileRegion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub root: super::msg::TactileRegion,

}



impl Default for TactileFinger {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactileFinger::default())
  }
}

impl rosidl_runtime_rs::Message for TactileFinger {
  type RmwMsg = super::msg::rmw::TactileFinger;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tip: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Owned(msg.tip)).into_owned(),
        pad: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Owned(msg.pad)).into_owned(),
        middle: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Owned(msg.middle)).into_owned(),
        root: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Owned(msg.root)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tip: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tip)).into_owned(),
        pad: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pad)).into_owned(),
        middle: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.middle)).into_owned(),
        root: super::msg::TactileRegion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.root)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tip: super::msg::TactileRegion::from_rmw_message(msg.tip),
      pad: super::msg::TactileRegion::from_rmw_message(msg.pad),
      middle: super::msg::TactileRegion::from_rmw_message(msg.middle),
      root: super::msg::TactileRegion::from_rmw_message(msg.root),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__TactilePointPosition
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactilePointPosition::default())
  }
}

impl rosidl_runtime_rs::Message for TactilePointPosition {
  type RmwMsg = super::msg::rmw::TactilePointPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to omniglove_interfaces__msg__TactilePositionData
/// Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub points: Vec<super::msg::TactilePointPosition>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactilePositionData::default())
  }
}

impl rosidl_runtime_rs::Message for TactilePositionData {
  type RmwMsg = super::msg::rmw::TactilePositionData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        count: msg.count,
        coordinate_frame: msg.coordinate_frame,
        unit: msg.unit,
        points: msg.points
          .into_iter()
          .map(|elem| super::msg::TactilePointPosition::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      count: msg.count,
      coordinate_frame: msg.coordinate_frame,
      unit: msg.unit,
        points: msg.points
          .iter()
          .map(|elem| super::msg::TactilePointPosition::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      count: msg.count,
      coordinate_frame: msg.coordinate_frame,
      unit: msg.unit,
      points: msg.points
          .into_iter()
          .map(super::msg::TactilePointPosition::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to omniglove_interfaces__msg__TactileRegion

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub data: Vec<u8>,

}



impl Default for TactileRegion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactileRegion::default())
  }
}

impl rosidl_runtime_rs::Message for TactileRegion {
  type RmwMsg = super::msg::rmw::TactileRegion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        rows: msg.rows,
        columns: msg.columns,
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      rows: msg.rows,
      columns: msg.columns,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      rows: msg.rows,
      columns: msg.columns,
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


