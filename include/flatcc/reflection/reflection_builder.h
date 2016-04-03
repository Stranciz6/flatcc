#ifndef REFLECTION_BUILDER_H
#define REFLECTION_BUILDER_H

/* Generated by flatcc 0.3.0.x FlatBuffers schema compiler for C by dvide.com */

#ifndef REFLECTION_READER_H
#include "reflection_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#if defined __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#elif defined __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#elif defined _MSC_VER
#pragma warning( push )
#pragma warning(disable: 4101) /* unused local variable */
#endif
#undef flatbuffers_identifier
#define flatbuffers_identifier "BFBS"
#undef flatbuffers_extension
#define flatbuffers_extension ".bfbs"

#define __reflection_BaseType_formal_args , reflection_BaseType_enum_t v0
#define __reflection_BaseType_call_args , v0
__flatbuffers_build_scalar(flatbuffers_, reflection_BaseType, reflection_BaseType_enum_t)

static const flatbuffers_voffset_t __reflection_Type_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, reflection_Type, 3)
static const flatbuffers_voffset_t __reflection_EnumVal_required[] = { 0, 0 };
__flatbuffers_build_table(flatbuffers_, reflection_EnumVal, 3)
static const flatbuffers_voffset_t __reflection_Enum_required[] = { 0, 1, 3, 0 };
__flatbuffers_build_table(flatbuffers_, reflection_Enum, 4)
static const flatbuffers_voffset_t __reflection_Field_required[] = { 0, 1, 0 };
__flatbuffers_build_table(flatbuffers_, reflection_Field, 9)
static const flatbuffers_voffset_t __reflection_Object_required[] = { 0, 1, 0 };
__flatbuffers_build_table(flatbuffers_, reflection_Object, 5)
static const flatbuffers_voffset_t __reflection_Schema_required[] = { 0, 1, 0 };
__flatbuffers_build_table(flatbuffers_, reflection_Schema, 5)
#define __reflection_Type_formal_args , reflection_BaseType_enum_t v0, reflection_BaseType_enum_t v1, int32_t v2
#define __reflection_Type_call_args , v0, v1, v2
static inline reflection_Type_ref_t reflection_Type_create(flatbuffers_builder_t *B __reflection_Type_formal_args);
#define __reflection_EnumVal_formal_args , flatbuffers_string_ref_t v0, int64_t v1, reflection_Object_ref_t v2
#define __reflection_EnumVal_call_args , v0, v1, v2
static inline reflection_EnumVal_ref_t reflection_EnumVal_create(flatbuffers_builder_t *B __reflection_EnumVal_formal_args);
#define __reflection_Enum_formal_args , flatbuffers_string_ref_t v0, reflection_EnumVal_vec_ref_t v1, flatbuffers_bool_t v2, reflection_Type_ref_t v3
#define __reflection_Enum_call_args , v0, v1, v2, v3
static inline reflection_Enum_ref_t reflection_Enum_create(flatbuffers_builder_t *B __reflection_Enum_formal_args);
#define __reflection_Field_formal_args ,\
  flatbuffers_string_ref_t v0, reflection_Type_ref_t v1, uint16_t v2, uint16_t v3,\
  int64_t v4, double v5, flatbuffers_bool_t v6, flatbuffers_bool_t v7, flatbuffers_bool_t v8
#define __reflection_Field_call_args ,\
  v0, v1, v2, v3,\
  v4, v5, v6, v7, v8
static inline reflection_Field_ref_t reflection_Field_create(flatbuffers_builder_t *B __reflection_Field_formal_args);
#define __reflection_Object_formal_args ,\
  flatbuffers_string_ref_t v0, reflection_Field_vec_ref_t v1, flatbuffers_bool_t v2, int32_t v3, int32_t v4
#define __reflection_Object_call_args ,\
  v0, v1, v2, v3, v4
static inline reflection_Object_ref_t reflection_Object_create(flatbuffers_builder_t *B __reflection_Object_formal_args);
#define __reflection_Schema_formal_args ,\
  reflection_Object_vec_ref_t v0, reflection_Enum_vec_ref_t v1, flatbuffers_string_ref_t v2, flatbuffers_string_ref_t v3, reflection_Object_ref_t v4
#define __reflection_Schema_call_args ,\
  v0, v1, v2, v3, v4
static inline reflection_Schema_ref_t reflection_Schema_create(flatbuffers_builder_t *B __reflection_Schema_formal_args);

__flatbuffers_build_scalar_field(0, flatbuffers_, reflection_Type_base_type, reflection_BaseType, reflection_BaseType_enum_t, 1, 1, 0)
__flatbuffers_build_scalar_field(1, flatbuffers_, reflection_Type_element, reflection_BaseType, reflection_BaseType_enum_t, 1, 1, 0)
__flatbuffers_build_scalar_field(2, flatbuffers_, reflection_Type_index, flatbuffers_int32, int32_t, 4, 4, -1)

static inline reflection_Type_ref_t reflection_Type_create(flatbuffers_builder_t *B __reflection_Type_formal_args)
{
    if (reflection_Type_start(B)
        || reflection_Type_index_add(B, v2)
        || reflection_Type_base_type_add(B, v0)
        || reflection_Type_element_add(B, v1)) {
        return 0;
    }
    return reflection_Type_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_Type, reflection_Type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, reflection_EnumVal_name)
__flatbuffers_build_scalar_field(1, flatbuffers_, reflection_EnumVal_value, flatbuffers_int64, int64_t, 8, 8, 0)
__flatbuffers_build_table_field(2, flatbuffers_, reflection_EnumVal_object, reflection_Object)

static inline reflection_EnumVal_ref_t reflection_EnumVal_create(flatbuffers_builder_t *B __reflection_EnumVal_formal_args)
{
    if (reflection_EnumVal_start(B)
        || reflection_EnumVal_value_add(B, v1)
        || reflection_EnumVal_name_add(B, v0)
        || reflection_EnumVal_object_add(B, v2)) {
        return 0;
    }
    return reflection_EnumVal_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_EnumVal, reflection_EnumVal_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, reflection_Enum_name)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, reflection_Enum_values, reflection_EnumVal)
__flatbuffers_build_scalar_field(2, flatbuffers_, reflection_Enum_is_union, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)
__flatbuffers_build_table_field(3, flatbuffers_, reflection_Enum_underlying_type, reflection_Type)

static inline reflection_Enum_ref_t reflection_Enum_create(flatbuffers_builder_t *B __reflection_Enum_formal_args)
{
    if (reflection_Enum_start(B)
        || reflection_Enum_name_add(B, v0)
        || reflection_Enum_values_add(B, v1)
        || reflection_Enum_underlying_type_add(B, v3)
        || reflection_Enum_is_union_add(B, v2)) {
        return 0;
    }
    return reflection_Enum_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_Enum, reflection_Enum_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, reflection_Field_name)
__flatbuffers_build_table_field(1, flatbuffers_, reflection_Field_type, reflection_Type)
__flatbuffers_build_scalar_field(2, flatbuffers_, reflection_Field_id, flatbuffers_uint16, uint16_t, 2, 2, 0)
__flatbuffers_build_scalar_field(3, flatbuffers_, reflection_Field_offset, flatbuffers_uint16, uint16_t, 2, 2, 0)
__flatbuffers_build_scalar_field(4, flatbuffers_, reflection_Field_default_integer, flatbuffers_int64, int64_t, 8, 8, 0)
__flatbuffers_build_scalar_field(5, flatbuffers_, reflection_Field_default_real, flatbuffers_double, double, 8, 8, 0)
__flatbuffers_build_scalar_field(6, flatbuffers_, reflection_Field_deprecated, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)
__flatbuffers_build_scalar_field(7, flatbuffers_, reflection_Field_required, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)
__flatbuffers_build_scalar_field(8, flatbuffers_, reflection_Field_key, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)

static inline reflection_Field_ref_t reflection_Field_create(flatbuffers_builder_t *B __reflection_Field_formal_args)
{
    if (reflection_Field_start(B)
        || reflection_Field_default_integer_add(B, v4)
        || reflection_Field_default_real_add(B, v5)
        || reflection_Field_name_add(B, v0)
        || reflection_Field_type_add(B, v1)
        || reflection_Field_id_add(B, v2)
        || reflection_Field_offset_add(B, v3)
        || reflection_Field_deprecated_add(B, v6)
        || reflection_Field_required_add(B, v7)
        || reflection_Field_key_add(B, v8)) {
        return 0;
    }
    return reflection_Field_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_Field, reflection_Field_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, reflection_Object_name)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, reflection_Object_fields, reflection_Field)
__flatbuffers_build_scalar_field(2, flatbuffers_, reflection_Object_is_struct, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)
__flatbuffers_build_scalar_field(3, flatbuffers_, reflection_Object_minalign, flatbuffers_int32, int32_t, 4, 4, 0)
__flatbuffers_build_scalar_field(4, flatbuffers_, reflection_Object_bytesize, flatbuffers_int32, int32_t, 4, 4, 0)

static inline reflection_Object_ref_t reflection_Object_create(flatbuffers_builder_t *B __reflection_Object_formal_args)
{
    if (reflection_Object_start(B)
        || reflection_Object_name_add(B, v0)
        || reflection_Object_fields_add(B, v1)
        || reflection_Object_minalign_add(B, v3)
        || reflection_Object_bytesize_add(B, v4)
        || reflection_Object_is_struct_add(B, v2)) {
        return 0;
    }
    return reflection_Object_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_Object, reflection_Object_identifier)

/* vector has keyed elements */
__flatbuffers_build_table_vector_field(0, flatbuffers_, reflection_Schema_objects, reflection_Object)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, reflection_Schema_enums, reflection_Enum)
__flatbuffers_build_string_field(2, flatbuffers_, reflection_Schema_file_ident)
__flatbuffers_build_string_field(3, flatbuffers_, reflection_Schema_file_ext)
__flatbuffers_build_table_field(4, flatbuffers_, reflection_Schema_root_table, reflection_Object)

static inline reflection_Schema_ref_t reflection_Schema_create(flatbuffers_builder_t *B __reflection_Schema_formal_args)
{
    if (reflection_Schema_start(B)
        || reflection_Schema_objects_add(B, v0)
        || reflection_Schema_enums_add(B, v1)
        || reflection_Schema_file_ident_add(B, v2)
        || reflection_Schema_file_ext_add(B, v3)
        || reflection_Schema_root_table_add(B, v4)) {
        return 0;
    }
    return reflection_Schema_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, reflection_Schema, reflection_Schema_identifier)

#if defined __clang__
#pragma clang diagnostic pop
#elif defined __GNUC__
#pragma GCC diagnostic pop
#elif defined _MSC_VER
#pragma warning( pop )
#endif
#endif /* REFLECTION_BUILDER_H */
