// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseImu_flags
{
public:
  explicit Init_PoseImu_flags(::omniglove_interfaces::msg::PoseImu & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseImu flags(::omniglove_interfaces::msg::PoseImu::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseImu msg_;
};

class Init_PoseImu_roll_pitch_yaw_cdeg
{
public:
  Init_PoseImu_roll_pitch_yaw_cdeg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseImu_flags roll_pitch_yaw_cdeg(::omniglove_interfaces::msg::PoseImu::_roll_pitch_yaw_cdeg_type arg)
  {
    msg_.roll_pitch_yaw_cdeg = std::move(arg);
    return Init_PoseImu_flags(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseImu>()
{
  return omniglove_interfaces::msg::builder::Init_PoseImu_roll_pitch_yaw_cdeg();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__BUILDER_HPP_
