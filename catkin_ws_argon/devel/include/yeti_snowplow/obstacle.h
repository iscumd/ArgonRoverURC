// Generated by gencpp from file yeti_snowplow/obstacle.msg
// DO NOT EDIT!


#ifndef YETI_SNOWPLOW_MESSAGE_OBSTACLE_H
#define YETI_SNOWPLOW_MESSAGE_OBSTACLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yeti_snowplow
{
template <class ContainerAllocator>
struct obstacle_
{
  typedef obstacle_<ContainerAllocator> Type;

  obstacle_()
    : x(0.0)
    , y(0.0)
    , r(0.0)
    , dynamic(false)  {
    }
  obstacle_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , r(0.0)
    , dynamic(false)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _r_type;
  _r_type r;

   typedef uint8_t _dynamic_type;
  _dynamic_type dynamic;




  typedef boost::shared_ptr< ::yeti_snowplow::obstacle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yeti_snowplow::obstacle_<ContainerAllocator> const> ConstPtr;

}; // struct obstacle_

typedef ::yeti_snowplow::obstacle_<std::allocator<void> > obstacle;

typedef boost::shared_ptr< ::yeti_snowplow::obstacle > obstaclePtr;
typedef boost::shared_ptr< ::yeti_snowplow::obstacle const> obstacleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yeti_snowplow::obstacle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yeti_snowplow::obstacle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yeti_snowplow

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'yeti_snowplow': ['/home/ben/Catkin/catkin_ws_argon/src/rover_manual/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yeti_snowplow::obstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yeti_snowplow::obstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yeti_snowplow::obstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yeti_snowplow::obstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yeti_snowplow::obstacle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yeti_snowplow::obstacle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yeti_snowplow::obstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39f935e5dbd01abfb717919f7c2e8837";
  }

  static const char* value(const ::yeti_snowplow::obstacle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39f935e5dbd01abfULL;
  static const uint64_t static_value2 = 0xb717919f7c2e8837ULL;
};

template<class ContainerAllocator>
struct DataType< ::yeti_snowplow::obstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yeti_snowplow/obstacle";
  }

  static const char* value(const ::yeti_snowplow::obstacle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yeti_snowplow::obstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
#x and y are relative to robot position and orientation\n\
float32 r\n\
#radius of obstacle\n\
bool dynamic\n\
#if object is or was previously moving, i.e. this is a new obstacle in this position\n\
";
  }

  static const char* value(const ::yeti_snowplow::obstacle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yeti_snowplow::obstacle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.r);
      stream.next(m.dynamic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct obstacle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yeti_snowplow::obstacle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yeti_snowplow::obstacle_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "dynamic: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dynamic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YETI_SNOWPLOW_MESSAGE_OBSTACLE_H
