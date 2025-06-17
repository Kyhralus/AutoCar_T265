// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interface:msg/T265Data.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__T265_DATA__BUILDER_HPP_
#define CAR_INTERFACE__MSG__DETAIL__T265_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interface/msg/detail/t265_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interface
{

namespace msg
{

namespace builder
{

class Init_T265Data_acc_angular_z
{
public:
  explicit Init_T265Data_acc_angular_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  ::car_interface::msg::T265Data acc_angular_z(::car_interface::msg::T265Data::_acc_angular_z_type arg)
  {
    msg_.acc_angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_acc_angular_y
{
public:
  explicit Init_T265Data_acc_angular_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_angular_z acc_angular_y(::car_interface::msg::T265Data::_acc_angular_y_type arg)
  {
    msg_.acc_angular_y = std::move(arg);
    return Init_T265Data_acc_angular_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_acc_angular_x
{
public:
  explicit Init_T265Data_acc_angular_x(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_angular_y acc_angular_x(::car_interface::msg::T265Data::_acc_angular_x_type arg)
  {
    msg_.acc_angular_x = std::move(arg);
    return Init_T265Data_acc_angular_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_acc_linear_z
{
public:
  explicit Init_T265Data_acc_linear_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_angular_x acc_linear_z(::car_interface::msg::T265Data::_acc_linear_z_type arg)
  {
    msg_.acc_linear_z = std::move(arg);
    return Init_T265Data_acc_angular_x(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_acc_linear_y
{
public:
  explicit Init_T265Data_acc_linear_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_linear_z acc_linear_y(::car_interface::msg::T265Data::_acc_linear_y_type arg)
  {
    msg_.acc_linear_y = std::move(arg);
    return Init_T265Data_acc_linear_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_acc_linear_x
{
public:
  explicit Init_T265Data_acc_linear_x(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_linear_y acc_linear_x(::car_interface::msg::T265Data::_acc_linear_x_type arg)
  {
    msg_.acc_linear_x = std::move(arg);
    return Init_T265Data_acc_linear_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_angular_z
{
public:
  explicit Init_T265Data_vel_angular_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_acc_linear_x vel_angular_z(::car_interface::msg::T265Data::_vel_angular_z_type arg)
  {
    msg_.vel_angular_z = std::move(arg);
    return Init_T265Data_acc_linear_x(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_angular_y
{
public:
  explicit Init_T265Data_vel_angular_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_angular_z vel_angular_y(::car_interface::msg::T265Data::_vel_angular_y_type arg)
  {
    msg_.vel_angular_y = std::move(arg);
    return Init_T265Data_vel_angular_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_angular_x
{
public:
  explicit Init_T265Data_vel_angular_x(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_angular_y vel_angular_x(::car_interface::msg::T265Data::_vel_angular_x_type arg)
  {
    msg_.vel_angular_x = std::move(arg);
    return Init_T265Data_vel_angular_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_linear_z
{
public:
  explicit Init_T265Data_vel_linear_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_angular_x vel_linear_z(::car_interface::msg::T265Data::_vel_linear_z_type arg)
  {
    msg_.vel_linear_z = std::move(arg);
    return Init_T265Data_vel_angular_x(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_linear_y
{
public:
  explicit Init_T265Data_vel_linear_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_linear_z vel_linear_y(::car_interface::msg::T265Data::_vel_linear_y_type arg)
  {
    msg_.vel_linear_y = std::move(arg);
    return Init_T265Data_vel_linear_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_vel_linear_x
{
public:
  explicit Init_T265Data_vel_linear_x(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_linear_y vel_linear_x(::car_interface::msg::T265Data::_vel_linear_x_type arg)
  {
    msg_.vel_linear_x = std::move(arg);
    return Init_T265Data_vel_linear_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_orient_w
{
public:
  explicit Init_T265Data_pos_orient_w(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_vel_linear_x pos_orient_w(::car_interface::msg::T265Data::_pos_orient_w_type arg)
  {
    msg_.pos_orient_w = std::move(arg);
    return Init_T265Data_vel_linear_x(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_orient_z
{
public:
  explicit Init_T265Data_pos_orient_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_pos_orient_w pos_orient_z(::car_interface::msg::T265Data::_pos_orient_z_type arg)
  {
    msg_.pos_orient_z = std::move(arg);
    return Init_T265Data_pos_orient_w(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_orient_y
{
public:
  explicit Init_T265Data_pos_orient_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_pos_orient_z pos_orient_y(::car_interface::msg::T265Data::_pos_orient_y_type arg)
  {
    msg_.pos_orient_y = std::move(arg);
    return Init_T265Data_pos_orient_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_orient_x
{
public:
  explicit Init_T265Data_pos_orient_x(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_pos_orient_y pos_orient_x(::car_interface::msg::T265Data::_pos_orient_x_type arg)
  {
    msg_.pos_orient_x = std::move(arg);
    return Init_T265Data_pos_orient_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_confidence
{
public:
  explicit Init_T265Data_confidence(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_pos_orient_x confidence(::car_interface::msg::T265Data::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_T265Data_pos_orient_x(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_z
{
public:
  explicit Init_T265Data_pos_z(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_confidence pos_z(::car_interface::msg::T265Data::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_T265Data_confidence(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_y
{
public:
  explicit Init_T265Data_pos_y(::car_interface::msg::T265Data & msg)
  : msg_(msg)
  {}
  Init_T265Data_pos_z pos_y(::car_interface::msg::T265Data::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_T265Data_pos_z(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

class Init_T265Data_pos_x
{
public:
  Init_T265Data_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_T265Data_pos_y pos_x(::car_interface::msg::T265Data::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_T265Data_pos_y(msg_);
  }

private:
  ::car_interface::msg::T265Data msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interface::msg::T265Data>()
{
  return car_interface::msg::builder::Init_T265Data_pos_x();
}

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__T265_DATA__BUILDER_HPP_
