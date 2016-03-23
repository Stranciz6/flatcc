#ifndef REFLECTION_VERIFIER_H
#define REFLECTION_VERIFIER_H

/* Generated by flatcc 0.2.1 FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_verifier.h"
#if defined __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-variable"
#elif defined __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif

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

static inline int reflection_Type_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Type_table_verifier);
}

static int __reflection_EnumVal_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 8, 8) /* value */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 2, 0, &__reflection_Object_table_verifier) /* object */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_EnumVal_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_EnumVal_table_verifier);
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

static inline int reflection_Enum_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Enum_table_verifier);
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

static inline int reflection_Field_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Field_table_verifier);
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

static inline int reflection_Object_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Object_table_verifier);
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

static inline int reflection_Schema_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Schema_table_verifier);
}

#if defined __clang__
#pragma clang diagnostic pop
#elif defined __GNUC__
#pragma GCC diagnostic pop
#endif
#endif /* REFLECTION_VERIFIER_H */
