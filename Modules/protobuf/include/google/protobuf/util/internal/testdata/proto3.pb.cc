// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/proto3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/util/internal/testdata/proto3.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
class Proto3MessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Proto3Message> {
} _Proto3Message_default_instance_;

namespace protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Proto3Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Proto3Message, enum_value_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Proto3Message)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Proto3Message_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/util/internal/testdata/proto3.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _Proto3Message_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Proto3Message_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n3google/protobuf/util/internal/testdata"
      "/proto3.proto\022\027google.protobuf.testing\"\177"
      "\n\rProto3Message\022E\n\nenum_value\030\001 \001(\01621.go"
      "ogle.protobuf.testing.Proto3Message.Nest"
      "edEnum\"\'\n\nNestedEnum\022\007\n\003FOO\020\000\022\007\n\003BAR\020\001\022\007"
      "\n\003BAZ\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/util/internal/testdata/proto3.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto

const ::google::protobuf::EnumDescriptor* Proto3Message_NestedEnum_descriptor() {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::file_level_enum_descriptors[0];
}
bool Proto3Message_NestedEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Proto3Message_NestedEnum Proto3Message::FOO;
const Proto3Message_NestedEnum Proto3Message::BAR;
const Proto3Message_NestedEnum Proto3Message::BAZ;
const Proto3Message_NestedEnum Proto3Message::NestedEnum_MIN;
const Proto3Message_NestedEnum Proto3Message::NestedEnum_MAX;
const int Proto3Message::NestedEnum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Proto3Message::kEnumValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Proto3Message::Proto3Message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.Proto3Message)
}
Proto3Message::Proto3Message(const Proto3Message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  enum_value_ = from.enum_value_;
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.Proto3Message)
}

void Proto3Message::SharedCtor() {
  enum_value_ = 0;
  _cached_size_ = 0;
}

Proto3Message::~Proto3Message() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.Proto3Message)
  SharedDtor();
}

void Proto3Message::SharedDtor() {
}

void Proto3Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Proto3Message::descriptor() {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::file_level_metadata[0].descriptor;
}

const Proto3Message& Proto3Message::default_instance() {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::InitDefaults();
  return *internal_default_instance();
}

Proto3Message* Proto3Message::New(::google::protobuf::Arena* arena) const {
  Proto3Message* n = new Proto3Message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Proto3Message::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.Proto3Message)
  enum_value_ = 0;
}

bool Proto3Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.Proto3Message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::google::protobuf::testing::Proto3Message_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.Proto3Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.Proto3Message)
  return false;
#undef DO_
}

void Proto3Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.Proto3Message)
  // .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->enum_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.Proto3Message)
}

::google::protobuf::uint8* Proto3Message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.Proto3Message)
  // .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->enum_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.Proto3Message)
  return target;
}

size_t Proto3Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.Proto3Message)
  size_t total_size = 0;

  // .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Proto3Message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.Proto3Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Proto3Message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Proto3Message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.Proto3Message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.Proto3Message)
    MergeFrom(*source);
  }
}

void Proto3Message::MergeFrom(const Proto3Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.Proto3Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
}

void Proto3Message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.Proto3Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Proto3Message::CopyFrom(const Proto3Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.Proto3Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Proto3Message::IsInitialized() const {
  return true;
}

void Proto3Message::Swap(Proto3Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Proto3Message::InternalSwap(Proto3Message* other) {
  std::swap(enum_value_, other->enum_value_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Proto3Message::GetMetadata() const {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Proto3Message

// .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
void Proto3Message::clear_enum_value() {
  enum_value_ = 0;
}
::google::protobuf::testing::Proto3Message_NestedEnum Proto3Message::enum_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.Proto3Message.enum_value)
  return static_cast< ::google::protobuf::testing::Proto3Message_NestedEnum >(enum_value_);
}
void Proto3Message::set_enum_value(::google::protobuf::testing::Proto3Message_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.Proto3Message.enum_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
