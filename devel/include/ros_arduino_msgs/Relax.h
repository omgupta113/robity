// Generated by gencpp from file ros_arduino_msgs/Relax.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_RELAX_H
#define ROS_ARDUINO_MSGS_MESSAGE_RELAX_H

#include <ros/service_traits.h>


#include <ros_arduino_msgs/RelaxRequest.h>
#include <ros_arduino_msgs/RelaxResponse.h>


namespace ros_arduino_msgs
{

struct Relax
{

typedef RelaxRequest Request;
typedef RelaxResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Relax
} // namespace ros_arduino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_arduino_msgs::Relax > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ros_arduino_msgs::Relax&) { return value(); }
};

template<>
struct DataType< ::ros_arduino_msgs::Relax > {
  static const char* value()
  {
    return "ros_arduino_msgs/Relax";
  }

  static const char* value(const ::ros_arduino_msgs::Relax&) { return value(); }
};


// service_traits::MD5Sum< ::ros_arduino_msgs::RelaxRequest> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::Relax >
template<>
struct MD5Sum< ::ros_arduino_msgs::RelaxRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::Relax >::value();
  }
  static const char* value(const ::ros_arduino_msgs::RelaxRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::RelaxRequest> should match
// service_traits::DataType< ::ros_arduino_msgs::Relax >
template<>
struct DataType< ::ros_arduino_msgs::RelaxRequest>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::Relax >::value();
  }
  static const char* value(const ::ros_arduino_msgs::RelaxRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_arduino_msgs::RelaxResponse> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::Relax >
template<>
struct MD5Sum< ::ros_arduino_msgs::RelaxResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::Relax >::value();
  }
  static const char* value(const ::ros_arduino_msgs::RelaxResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::RelaxResponse> should match
// service_traits::DataType< ::ros_arduino_msgs::Relax >
template<>
struct DataType< ::ros_arduino_msgs::RelaxResponse>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::Relax >::value();
  }
  static const char* value(const ::ros_arduino_msgs::RelaxResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_RELAX_H