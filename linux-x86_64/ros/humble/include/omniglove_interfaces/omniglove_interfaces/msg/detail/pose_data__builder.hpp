// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseData_unmapped_data
{
public:
  explicit Init_PoseData_unmapped_data(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseData unmapped_data(::omniglove_interfaces::msg::PoseData::_unmapped_data_type arg)
  {
    msg_.unmapped_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_tactile
{
public:
  explicit Init_PoseData_tactile(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_unmapped_data tactile(::omniglove_interfaces::msg::PoseData::_tactile_type arg)
  {
    msg_.tactile = std::move(arg);
    return Init_PoseData_unmapped_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_back_of_hand_imu
{
public:
  explicit Init_PoseData_back_of_hand_imu(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_tactile back_of_hand_imu(::omniglove_interfaces::msg::PoseData::_back_of_hand_imu_type arg)
  {
    msg_.back_of_hand_imu = std::move(arg);
    return Init_PoseData_tactile(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_wrist
{
public:
  explicit Init_PoseData_wrist(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_back_of_hand_imu wrist(::omniglove_interfaces::msg::PoseData::_wrist_type arg)
  {
    msg_.wrist = std::move(arg);
    return Init_PoseData_back_of_hand_imu(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_pinky
{
public:
  explicit Init_PoseData_pinky(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_wrist pinky(::omniglove_interfaces::msg::PoseData::_pinky_type arg)
  {
    msg_.pinky = std::move(arg);
    return Init_PoseData_wrist(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_ring
{
public:
  explicit Init_PoseData_ring(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_pinky ring(::omniglove_interfaces::msg::PoseData::_ring_type arg)
  {
    msg_.ring = std::move(arg);
    return Init_PoseData_pinky(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_middle
{
public:
  explicit Init_PoseData_middle(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_ring middle(::omniglove_interfaces::msg::PoseData::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_PoseData_ring(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_index
{
public:
  explicit Init_PoseData_index(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_middle index(::omniglove_interfaces::msg::PoseData::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_PoseData_middle(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_thumb
{
public:
  explicit Init_PoseData_thumb(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_index thumb(::omniglove_interfaces::msg::PoseData::_thumb_type arg)
  {
    msg_.thumb = std::move(arg);
    return Init_PoseData_index(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_device_tick_ms
{
public:
  explicit Init_PoseData_device_tick_ms(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_thumb device_tick_ms(::omniglove_interfaces::msg::PoseData::_device_tick_ms_type arg)
  {
    msg_.device_tick_ms = std::move(arg);
    return Init_PoseData_thumb(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_components
{
public:
  explicit Init_PoseData_components(::omniglove_interfaces::msg::PoseData & msg)
  : msg_(msg)
  {}
  Init_PoseData_device_tick_ms components(::omniglove_interfaces::msg::PoseData::_components_type arg)
  {
    msg_.components = std::move(arg);
    return Init_PoseData_device_tick_ms(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

class Init_PoseData_mapped
{
public:
  Init_PoseData_mapped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseData_components mapped(::omniglove_interfaces::msg::PoseData::_mapped_type arg)
  {
    msg_.mapped = std::move(arg);
    return Init_PoseData_components(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseData>()
{
  return omniglove_interfaces::msg::builder::Init_PoseData_mapped();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__BUILDER_HPP_
