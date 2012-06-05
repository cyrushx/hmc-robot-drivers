/* Auto-generated by genmsg_cpp for file /home/zdodds/Desktop/AlistairSummer/workspace/ardrone_mudd/msg/navData.msg */
#ifndef ARDRONE_MUDD_MESSAGE_NAVDATA_H
#define ARDRONE_MUDD_MESSAGE_NAVDATA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace ardrone_mudd
{
template <class ContainerAllocator>
struct navData_ {
  typedef navData_<ContainerAllocator> Type;

  navData_()
  : tag(0)
  , size(0)
  , ctrlState(0)
  , batLevel(0)
  , theta(0.0)
  , phi(0.0)
  , psi(0.0)
  , altitude(0)
  , vx(0.0)
  , vy(0.0)
  , vz(0.0)
  , numFrames(0)
  {
  }

  navData_(const ContainerAllocator& _alloc)
  : tag(0)
  , size(0)
  , ctrlState(0)
  , batLevel(0)
  , theta(0.0)
  , phi(0.0)
  , psi(0.0)
  , altitude(0)
  , vx(0.0)
  , vy(0.0)
  , vz(0.0)
  , numFrames(0)
  {
  }

  typedef uint16_t _tag_type;
  uint16_t tag;

  typedef uint16_t _size_type;
  uint16_t size;

  typedef uint32_t _ctrlState_type;
  uint32_t ctrlState;

  typedef uint32_t _batLevel_type;
  uint32_t batLevel;

  typedef float _theta_type;
  float theta;

  typedef float _phi_type;
  float phi;

  typedef float _psi_type;
  float psi;

  typedef int32_t _altitude_type;
  int32_t altitude;

  typedef float _vx_type;
  float vx;

  typedef float _vy_type;
  float vy;

  typedef float _vz_type;
  float vz;

  typedef uint32_t _numFrames_type;
  uint32_t numFrames;


private:
  static const char* __s_getDataType_() { return "ardrone_mudd/navData"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "52f35305128af01a37ee8cd90d1f5912"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "uint16 tag\n\
uint16 size\n\
uint32 ctrlState\n\
uint32 batLevel\n\
float32 theta\n\
float32 phi\n\
float32 psi\n\
int32 altitude\n\
float32 vx\n\
float32 vy\n\
float32 vz\n\
uint32 numFrames\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, tag);
    ros::serialization::serialize(stream, size);
    ros::serialization::serialize(stream, ctrlState);
    ros::serialization::serialize(stream, batLevel);
    ros::serialization::serialize(stream, theta);
    ros::serialization::serialize(stream, phi);
    ros::serialization::serialize(stream, psi);
    ros::serialization::serialize(stream, altitude);
    ros::serialization::serialize(stream, vx);
    ros::serialization::serialize(stream, vy);
    ros::serialization::serialize(stream, vz);
    ros::serialization::serialize(stream, numFrames);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, tag);
    ros::serialization::deserialize(stream, size);
    ros::serialization::deserialize(stream, ctrlState);
    ros::serialization::deserialize(stream, batLevel);
    ros::serialization::deserialize(stream, theta);
    ros::serialization::deserialize(stream, phi);
    ros::serialization::deserialize(stream, psi);
    ros::serialization::deserialize(stream, altitude);
    ros::serialization::deserialize(stream, vx);
    ros::serialization::deserialize(stream, vy);
    ros::serialization::deserialize(stream, vz);
    ros::serialization::deserialize(stream, numFrames);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(tag);
    size += ros::serialization::serializationLength(size);
    size += ros::serialization::serializationLength(ctrlState);
    size += ros::serialization::serializationLength(batLevel);
    size += ros::serialization::serializationLength(theta);
    size += ros::serialization::serializationLength(phi);
    size += ros::serialization::serializationLength(psi);
    size += ros::serialization::serializationLength(altitude);
    size += ros::serialization::serializationLength(vx);
    size += ros::serialization::serializationLength(vy);
    size += ros::serialization::serializationLength(vz);
    size += ros::serialization::serializationLength(numFrames);
    return size;
  }

  typedef boost::shared_ptr< ::ardrone_mudd::navData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_mudd::navData_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct navData
typedef  ::ardrone_mudd::navData_<std::allocator<void> > navData;

typedef boost::shared_ptr< ::ardrone_mudd::navData> navDataPtr;
typedef boost::shared_ptr< ::ardrone_mudd::navData const> navDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ardrone_mudd::navData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ardrone_mudd::navData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ardrone_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::navData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::navData_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ardrone_mudd::navData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "52f35305128af01a37ee8cd90d1f5912";
  }

  static const char* value(const  ::ardrone_mudd::navData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x52f35305128af01aULL;
  static const uint64_t static_value2 = 0x37ee8cd90d1f5912ULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_mudd::navData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ardrone_mudd/navData";
  }

  static const char* value(const  ::ardrone_mudd::navData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ardrone_mudd::navData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 tag\n\
uint16 size\n\
uint32 ctrlState\n\
uint32 batLevel\n\
float32 theta\n\
float32 phi\n\
float32 psi\n\
int32 altitude\n\
float32 vx\n\
float32 vy\n\
float32 vz\n\
uint32 numFrames\n\
\n\
";
  }

  static const char* value(const  ::ardrone_mudd::navData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ardrone_mudd::navData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ardrone_mudd::navData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.tag);
    stream.next(m.size);
    stream.next(m.ctrlState);
    stream.next(m.batLevel);
    stream.next(m.theta);
    stream.next(m.phi);
    stream.next(m.psi);
    stream.next(m.altitude);
    stream.next(m.vx);
    stream.next(m.vy);
    stream.next(m.vz);
    stream.next(m.numFrames);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct navData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_mudd::navData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ardrone_mudd::navData_<ContainerAllocator> & v) 
  {
    s << indent << "tag: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tag);
    s << indent << "size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.size);
    s << indent << "ctrlState: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ctrlState);
    s << indent << "batLevel: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.batLevel);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
    s << indent << "phi: ";
    Printer<float>::stream(s, indent + "  ", v.phi);
    s << indent << "psi: ";
    Printer<float>::stream(s, indent + "  ", v.psi);
    s << indent << "altitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.altitude);
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "vz: ";
    Printer<float>::stream(s, indent + "  ", v.vz);
    s << indent << "numFrames: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numFrames);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARDRONE_MUDD_MESSAGE_NAVDATA_H

