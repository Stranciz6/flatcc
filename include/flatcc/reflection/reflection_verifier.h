#ifndef REFLECTION_VERIFIER_H
#define REFLECTION_VERIFIER_H

/* Generated by flatcc 0.3.6-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef REFLECTION_READER_H
#include "reflection_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#define PDIAGNOSTIC_IGNORE_UNUSED
#include "flatcc/portable/pdiagnostic_push.h"

static int __reflection_Type_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_EnumVal_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Enum_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Field_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Object_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Schema_table_verifier(flatcc_table_verifier_descriptor_t *td);

static int __reflection_Type_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* base_type */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 1, 1) /* element */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* index */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Type_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Type_identifier, &__reflection_Type_table_verifier);
}

static inline int reflection_Type_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Type_type_identifier, &__reflection_Type_table_verifier);
}

static inline int reflection_Type_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Type_table_verifier);
}

static inline int reflection_Type_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_Type_table_verifier);
}

static int __reflection_EnumVal_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 8, 8) /* value */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 2, 0, &__reflection_Object_table_verifier) /* object */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_EnumVal_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_EnumVal_identifier, &__reflection_EnumVal_table_verifier);
}

static inline int reflection_EnumVal_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_EnumVal_type_identifier, &__reflection_EnumVal_table_verifier);
}

static inline int reflection_EnumVal_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_EnumVal_table_verifier);
}

static inline int reflection_EnumVal_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_EnumVal_table_verifier);
}

static int __reflection_Enum_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &__reflection_EnumVal_table_verifier) /* values */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 1, 1) /* is_union */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 3, 1, &__reflection_Type_table_verifier) /* underlying_type */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Enum_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Enum_identifier, &__reflection_Enum_table_verifier);
}

static inline int reflection_Enum_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Enum_type_identifier, &__reflection_Enum_table_verifier);
}

static inline int reflection_Enum_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Enum_table_verifier);
}

static inline int reflection_Enum_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_Enum_table_verifier);
}

static int __reflection_Field_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 1, &__reflection_Type_table_verifier) /* type */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 2, 2) /* id */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 2, 2) /* offset */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 8, 8) /* default_integer */)) return ret;
    if ((ret = flatcc_verify_field(td, 5, 8, 8) /* default_real */)) return ret;
    if ((ret = flatcc_verify_field(td, 6, 1, 1) /* deprecated */)) return ret;
    if ((ret = flatcc_verify_field(td, 7, 1, 1) /* required */)) return ret;
    if ((ret = flatcc_verify_field(td, 8, 1, 1) /* key */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Field_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Field_identifier, &__reflection_Field_table_verifier);
}

static inline int reflection_Field_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Field_type_identifier, &__reflection_Field_table_verifier);
}

static inline int reflection_Field_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Field_table_verifier);
}

static inline int reflection_Field_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_Field_table_verifier);
}

static int __reflection_Object_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &__reflection_Field_table_verifier) /* fields */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 1, 1) /* is_struct */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 4, 4) /* minalign */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 4, 4) /* bytesize */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Object_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Object_identifier, &__reflection_Object_table_verifier);
}

static inline int reflection_Object_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Object_type_identifier, &__reflection_Object_table_verifier);
}

static inline int reflection_Object_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Object_table_verifier);
}

static inline int reflection_Object_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_Object_table_verifier);
}

static int __reflection_Schema_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 1, &__reflection_Object_table_verifier) /* objects */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &__reflection_Enum_table_verifier) /* enums */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 2, 0) /* file_ident */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 3, 0) /* file_ext */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 4, 0, &__reflection_Object_table_verifier) /* root_table */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Schema_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Schema_identifier, &__reflection_Schema_table_verifier);
}

static inline int reflection_Schema_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Schema_type_identifier, &__reflection_Schema_table_verifier);
}

static inline int reflection_Schema_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Schema_table_verifier);
}

static inline int reflection_Schema_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__reflection_Schema_table_verifier);
}

#include "flatcc/portable/pdiagnostic_pop.h"
#endif /* REFLECTION_VERIFIER_H */
