// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/TactileRegion.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_TactileRegion_data
{
public:
  explicit Init_TactileRegion_data(::omniglove_interfaces::msg::TactileRegion & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::TactileRegion data(::omniglove_interfaces::msg::TactileRegion::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileRegion msg_;
};

class Init_TactileRegion_columns
{
public:
  explicit Init_TactileRegion_columns(::omniglove_interfaces::msg::TactileRegion & msg)
  : msg_(msg)
  {}
  Init_TactileRegion_data columns(::omniglove_interfaces::msg::TactileRegion::_columns_type arg)
  {
    msg_.columns = std::move(arg);
    return Init_TactileRegion_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileRegion msg_;
};

class Init_TactileRegion_rows
{
public:
  Init_TactileRegion_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileRegion_columns rows(::omniglove_interfaces::msg::TactileRegion::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_TactileRegion_columns(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::TactileRegion>()
{
  return omniglove_interfaces::msg::builder::Init_TactileRegion_rows();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__BUILDER_HPP_
