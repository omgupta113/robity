// Generated by gencpp from file ros_arduino_msgs/SetServoSpeedRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_SETSERVOSPEEDREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_SETSERVOSPEEDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct SetServoSpeedRequest_
{
  typedef SetServoSpeedRequest_<ContainerAllocator> Type;

  SetServoSpeedRequest_()
    : id(0)
    , speed(0.0)  {
    }
  SetServoSpeedRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef float _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetServoSpeedRequest_

typedef ::ros_arduino_msgs::SetServoSpeedRequest_<std::allocator<void> > SetServoSpeedRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::SetServoSpeedRequest > SetServoSpeedRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::SetServoSpeedRequest const> SetServoSpeedRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.speed == rhs.speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5bb1b2c3fa1e96327140e230e8115dd";
  }

  static const char* value(const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5bb1b2c3fa1e963ULL;
  static const uint64_t static_value2 = 0x27140e230e8115ddULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/SetServoSpeedRequest";
  }

  static const char* value(const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"float32 speed\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetServoSpeedRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::SetServoSpeedRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_SETSERVOSPEEDREQUEST_H
