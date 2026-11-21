// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_TactilePositionData_points
{
public:
  explicit Init_TactilePositionData_points(::omniglove_interfaces::msg::TactilePositionData & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::TactilePositionData points(::omniglove_interfaces::msg::TactilePositionData::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePositionData msg_;
};

class Init_TactilePositionData_unit
{
public:
  explicit Init_TactilePositionData_unit(::omniglove_interfaces::msg::TactilePositionData & msg)
  : msg_(msg)
  {}
  Init_TactilePositionData_points unit(::omniglove_interfaces::msg::TactilePositionData::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_TactilePositionData_points(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePositionData msg_;
};

class Init_TactilePositionData_coordinate_frame
{
public:
  explicit Init_TactilePositionData_coordinate_frame(::omniglove_interfaces::msg::TactilePositionData & msg)
  : msg_(msg)
  {}
  Init_TactilePositionData_unit coordinate_frame(::omniglove_interfaces::msg::TactilePositionData::_coordinate_frame_type arg)
  {
    msg_.coordinate_frame = std::move(arg);
    return Init_TactilePositionData_unit(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePositionData msg_;
};

class Init_TactilePositionData_count
{
public:
  Init_TactilePositionData_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactilePositionData_coordinate_frame count(::omniglove_interfaces::msg::TactilePositionData::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_TactilePositionData_coordinate_frame(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePositionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::TactilePositionData>()
{
  return omniglove_interfaces::msg::builder::Init_TactilePositionData_count();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__BUILDER_HPP_
