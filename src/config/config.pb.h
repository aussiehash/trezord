// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_config_2eproto__INCLUDED
#define PROTOBUF_config_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_config_2eproto();
void protobuf_AssignDesc_config_2eproto();
void protobuf_ShutdownFile_config_2eproto();

class DeviceDescriptor;
class Configuration;

// ===================================================================

class DeviceDescriptor : public ::google::protobuf::Message {
 public:
  DeviceDescriptor();
  virtual ~DeviceDescriptor();

  DeviceDescriptor(const DeviceDescriptor& from);

  inline DeviceDescriptor& operator=(const DeviceDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceDescriptor& default_instance();

  void Swap(DeviceDescriptor* other);

  // implements Message ----------------------------------------------

  DeviceDescriptor* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeviceDescriptor& from);
  void MergeFrom(const DeviceDescriptor& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 vendor_id = 1;
  inline bool has_vendor_id() const;
  inline void clear_vendor_id();
  static const int kVendorIdFieldNumber = 1;
  inline ::google::protobuf::uint32 vendor_id() const;
  inline void set_vendor_id(::google::protobuf::uint32 value);

  // optional uint32 product_id = 2;
  inline bool has_product_id() const;
  inline void clear_product_id();
  static const int kProductIdFieldNumber = 2;
  inline ::google::protobuf::uint32 product_id() const;
  inline void set_product_id(::google::protobuf::uint32 value);

  // optional string serial_number = 3;
  inline bool has_serial_number() const;
  inline void clear_serial_number();
  static const int kSerialNumberFieldNumber = 3;
  inline const ::std::string& serial_number() const;
  inline void set_serial_number(const ::std::string& value);
  inline void set_serial_number(const char* value);
  inline void set_serial_number(const char* value, size_t size);
  inline ::std::string* mutable_serial_number();
  inline ::std::string* release_serial_number();
  inline void set_allocated_serial_number(::std::string* serial_number);

  // optional string path = 4;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 4;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // @@protoc_insertion_point(class_scope:DeviceDescriptor)
 private:
  inline void set_has_vendor_id();
  inline void clear_has_vendor_id();
  inline void set_has_product_id();
  inline void clear_has_product_id();
  inline void set_has_serial_number();
  inline void clear_has_serial_number();
  inline void set_has_path();
  inline void clear_has_path();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 vendor_id_;
  ::google::protobuf::uint32 product_id_;
  ::std::string* serial_number_;
  ::std::string* path_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static DeviceDescriptor* default_instance_;
};
// -------------------------------------------------------------------

class Configuration : public ::google::protobuf::Message {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);

  inline Configuration& operator=(const Configuration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Configuration& default_instance();

  void Swap(Configuration* other);

  // implements Message ----------------------------------------------

  Configuration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string whitelist_urls = 1;
  inline int whitelist_urls_size() const;
  inline void clear_whitelist_urls();
  static const int kWhitelistUrlsFieldNumber = 1;
  inline const ::std::string& whitelist_urls(int index) const;
  inline ::std::string* mutable_whitelist_urls(int index);
  inline void set_whitelist_urls(int index, const ::std::string& value);
  inline void set_whitelist_urls(int index, const char* value);
  inline void set_whitelist_urls(int index, const char* value, size_t size);
  inline ::std::string* add_whitelist_urls();
  inline void add_whitelist_urls(const ::std::string& value);
  inline void add_whitelist_urls(const char* value);
  inline void add_whitelist_urls(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& whitelist_urls() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_whitelist_urls();

  // repeated string blacklist_urls = 2;
  inline int blacklist_urls_size() const;
  inline void clear_blacklist_urls();
  static const int kBlacklistUrlsFieldNumber = 2;
  inline const ::std::string& blacklist_urls(int index) const;
  inline ::std::string* mutable_blacklist_urls(int index);
  inline void set_blacklist_urls(int index, const ::std::string& value);
  inline void set_blacklist_urls(int index, const char* value);
  inline void set_blacklist_urls(int index, const char* value, size_t size);
  inline ::std::string* add_blacklist_urls();
  inline void add_blacklist_urls(const ::std::string& value);
  inline void add_blacklist_urls(const char* value);
  inline void add_blacklist_urls(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& blacklist_urls() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_blacklist_urls();

  // required .google.protobuf.FileDescriptorSet wire_protocol = 3;
  inline bool has_wire_protocol() const;
  inline void clear_wire_protocol();
  static const int kWireProtocolFieldNumber = 3;
  inline const ::google::protobuf::FileDescriptorSet& wire_protocol() const;
  inline ::google::protobuf::FileDescriptorSet* mutable_wire_protocol();
  inline ::google::protobuf::FileDescriptorSet* release_wire_protocol();
  inline void set_allocated_wire_protocol(::google::protobuf::FileDescriptorSet* wire_protocol);

  // repeated .DeviceDescriptor known_devices = 4;
  inline int known_devices_size() const;
  inline void clear_known_devices();
  static const int kKnownDevicesFieldNumber = 4;
  inline const ::DeviceDescriptor& known_devices(int index) const;
  inline ::DeviceDescriptor* mutable_known_devices(int index);
  inline ::DeviceDescriptor* add_known_devices();
  inline const ::google::protobuf::RepeatedPtrField< ::DeviceDescriptor >&
      known_devices() const;
  inline ::google::protobuf::RepeatedPtrField< ::DeviceDescriptor >*
      mutable_known_devices();

  // optional uint32 valid_until = 5;
  inline bool has_valid_until() const;
  inline void clear_valid_until();
  static const int kValidUntilFieldNumber = 5;
  inline ::google::protobuf::uint32 valid_until() const;
  inline void set_valid_until(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Configuration)
 private:
  inline void set_has_wire_protocol();
  inline void clear_has_wire_protocol();
  inline void set_has_valid_until();
  inline void clear_has_valid_until();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> whitelist_urls_;
  ::google::protobuf::RepeatedPtrField< ::std::string> blacklist_urls_;
  ::google::protobuf::FileDescriptorSet* wire_protocol_;
  ::google::protobuf::RepeatedPtrField< ::DeviceDescriptor > known_devices_;
  ::google::protobuf::uint32 valid_until_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static Configuration* default_instance_;
};
// ===================================================================


// ===================================================================

// DeviceDescriptor

// optional uint32 vendor_id = 1;
inline bool DeviceDescriptor::has_vendor_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceDescriptor::set_has_vendor_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceDescriptor::clear_has_vendor_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceDescriptor::clear_vendor_id() {
  vendor_id_ = 0u;
  clear_has_vendor_id();
}
inline ::google::protobuf::uint32 DeviceDescriptor::vendor_id() const {
  return vendor_id_;
}
inline void DeviceDescriptor::set_vendor_id(::google::protobuf::uint32 value) {
  set_has_vendor_id();
  vendor_id_ = value;
}

// optional uint32 product_id = 2;
inline bool DeviceDescriptor::has_product_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceDescriptor::set_has_product_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceDescriptor::clear_has_product_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceDescriptor::clear_product_id() {
  product_id_ = 0u;
  clear_has_product_id();
}
inline ::google::protobuf::uint32 DeviceDescriptor::product_id() const {
  return product_id_;
}
inline void DeviceDescriptor::set_product_id(::google::protobuf::uint32 value) {
  set_has_product_id();
  product_id_ = value;
}

// optional string serial_number = 3;
inline bool DeviceDescriptor::has_serial_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceDescriptor::set_has_serial_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceDescriptor::clear_has_serial_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceDescriptor::clear_serial_number() {
  if (serial_number_ != &::google::protobuf::internal::kEmptyString) {
    serial_number_->clear();
  }
  clear_has_serial_number();
}
inline const ::std::string& DeviceDescriptor::serial_number() const {
  return *serial_number_;
}
inline void DeviceDescriptor::set_serial_number(const ::std::string& value) {
  set_has_serial_number();
  if (serial_number_ == &::google::protobuf::internal::kEmptyString) {
    serial_number_ = new ::std::string;
  }
  serial_number_->assign(value);
}
inline void DeviceDescriptor::set_serial_number(const char* value) {
  set_has_serial_number();
  if (serial_number_ == &::google::protobuf::internal::kEmptyString) {
    serial_number_ = new ::std::string;
  }
  serial_number_->assign(value);
}
inline void DeviceDescriptor::set_serial_number(const char* value, size_t size) {
  set_has_serial_number();
  if (serial_number_ == &::google::protobuf::internal::kEmptyString) {
    serial_number_ = new ::std::string;
  }
  serial_number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceDescriptor::mutable_serial_number() {
  set_has_serial_number();
  if (serial_number_ == &::google::protobuf::internal::kEmptyString) {
    serial_number_ = new ::std::string;
  }
  return serial_number_;
}
inline ::std::string* DeviceDescriptor::release_serial_number() {
  clear_has_serial_number();
  if (serial_number_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = serial_number_;
    serial_number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DeviceDescriptor::set_allocated_serial_number(::std::string* serial_number) {
  if (serial_number_ != &::google::protobuf::internal::kEmptyString) {
    delete serial_number_;
  }
  if (serial_number) {
    set_has_serial_number();
    serial_number_ = serial_number;
  } else {
    clear_has_serial_number();
    serial_number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string path = 4;
inline bool DeviceDescriptor::has_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceDescriptor::set_has_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceDescriptor::clear_has_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceDescriptor::clear_path() {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& DeviceDescriptor::path() const {
  return *path_;
}
inline void DeviceDescriptor::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void DeviceDescriptor::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void DeviceDescriptor::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceDescriptor::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  return path_;
}
inline ::std::string* DeviceDescriptor::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DeviceDescriptor::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Configuration

// repeated string whitelist_urls = 1;
inline int Configuration::whitelist_urls_size() const {
  return whitelist_urls_.size();
}
inline void Configuration::clear_whitelist_urls() {
  whitelist_urls_.Clear();
}
inline const ::std::string& Configuration::whitelist_urls(int index) const {
  return whitelist_urls_.Get(index);
}
inline ::std::string* Configuration::mutable_whitelist_urls(int index) {
  return whitelist_urls_.Mutable(index);
}
inline void Configuration::set_whitelist_urls(int index, const ::std::string& value) {
  whitelist_urls_.Mutable(index)->assign(value);
}
inline void Configuration::set_whitelist_urls(int index, const char* value) {
  whitelist_urls_.Mutable(index)->assign(value);
}
inline void Configuration::set_whitelist_urls(int index, const char* value, size_t size) {
  whitelist_urls_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Configuration::add_whitelist_urls() {
  return whitelist_urls_.Add();
}
inline void Configuration::add_whitelist_urls(const ::std::string& value) {
  whitelist_urls_.Add()->assign(value);
}
inline void Configuration::add_whitelist_urls(const char* value) {
  whitelist_urls_.Add()->assign(value);
}
inline void Configuration::add_whitelist_urls(const char* value, size_t size) {
  whitelist_urls_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Configuration::whitelist_urls() const {
  return whitelist_urls_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Configuration::mutable_whitelist_urls() {
  return &whitelist_urls_;
}

// repeated string blacklist_urls = 2;
inline int Configuration::blacklist_urls_size() const {
  return blacklist_urls_.size();
}
inline void Configuration::clear_blacklist_urls() {
  blacklist_urls_.Clear();
}
inline const ::std::string& Configuration::blacklist_urls(int index) const {
  return blacklist_urls_.Get(index);
}
inline ::std::string* Configuration::mutable_blacklist_urls(int index) {
  return blacklist_urls_.Mutable(index);
}
inline void Configuration::set_blacklist_urls(int index, const ::std::string& value) {
  blacklist_urls_.Mutable(index)->assign(value);
}
inline void Configuration::set_blacklist_urls(int index, const char* value) {
  blacklist_urls_.Mutable(index)->assign(value);
}
inline void Configuration::set_blacklist_urls(int index, const char* value, size_t size) {
  blacklist_urls_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Configuration::add_blacklist_urls() {
  return blacklist_urls_.Add();
}
inline void Configuration::add_blacklist_urls(const ::std::string& value) {
  blacklist_urls_.Add()->assign(value);
}
inline void Configuration::add_blacklist_urls(const char* value) {
  blacklist_urls_.Add()->assign(value);
}
inline void Configuration::add_blacklist_urls(const char* value, size_t size) {
  blacklist_urls_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Configuration::blacklist_urls() const {
  return blacklist_urls_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Configuration::mutable_blacklist_urls() {
  return &blacklist_urls_;
}

// required .google.protobuf.FileDescriptorSet wire_protocol = 3;
inline bool Configuration::has_wire_protocol() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Configuration::set_has_wire_protocol() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Configuration::clear_has_wire_protocol() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Configuration::clear_wire_protocol() {
  if (wire_protocol_ != NULL) wire_protocol_->::google::protobuf::FileDescriptorSet::Clear();
  clear_has_wire_protocol();
}
inline const ::google::protobuf::FileDescriptorSet& Configuration::wire_protocol() const {
  return wire_protocol_ != NULL ? *wire_protocol_ : *default_instance_->wire_protocol_;
}
inline ::google::protobuf::FileDescriptorSet* Configuration::mutable_wire_protocol() {
  set_has_wire_protocol();
  if (wire_protocol_ == NULL) wire_protocol_ = new ::google::protobuf::FileDescriptorSet;
  return wire_protocol_;
}
inline ::google::protobuf::FileDescriptorSet* Configuration::release_wire_protocol() {
  clear_has_wire_protocol();
  ::google::protobuf::FileDescriptorSet* temp = wire_protocol_;
  wire_protocol_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_wire_protocol(::google::protobuf::FileDescriptorSet* wire_protocol) {
  delete wire_protocol_;
  wire_protocol_ = wire_protocol;
  if (wire_protocol) {
    set_has_wire_protocol();
  } else {
    clear_has_wire_protocol();
  }
}

// repeated .DeviceDescriptor known_devices = 4;
inline int Configuration::known_devices_size() const {
  return known_devices_.size();
}
inline void Configuration::clear_known_devices() {
  known_devices_.Clear();
}
inline const ::DeviceDescriptor& Configuration::known_devices(int index) const {
  return known_devices_.Get(index);
}
inline ::DeviceDescriptor* Configuration::mutable_known_devices(int index) {
  return known_devices_.Mutable(index);
}
inline ::DeviceDescriptor* Configuration::add_known_devices() {
  return known_devices_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DeviceDescriptor >&
Configuration::known_devices() const {
  return known_devices_;
}
inline ::google::protobuf::RepeatedPtrField< ::DeviceDescriptor >*
Configuration::mutable_known_devices() {
  return &known_devices_;
}

// optional uint32 valid_until = 5;
inline bool Configuration::has_valid_until() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Configuration::set_has_valid_until() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Configuration::clear_has_valid_until() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Configuration::clear_valid_until() {
  valid_until_ = 0u;
  clear_has_valid_until();
}
inline ::google::protobuf::uint32 Configuration::valid_until() const {
  return valid_until_;
}
inline void Configuration::set_valid_until(::google::protobuf::uint32 value) {
  set_has_valid_until();
  valid_until_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2eproto__INCLUDED
