#ifndef REFLECTION_VERIFIER_H
#define REFLECTION_VERIFIER_H

/* Generated by flatcc 0.1.1+ FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_verifier.h"
#if __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

static int __reflection_Type_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_EnumVal_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Enum_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Field_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Object_table_verifier(flatcc_table_verifier_descriptor_t *td);
static int __reflection_Schema_table_verifier(flatcc_table_verifier_descriptor_t *td);

static int __reflection_Type_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_field(td, 0, 1, 1) /* base_type */
        && flatcc_verify_field(td, 1, 1, 1) /* element */
        && flatcc_verify_field(td, 2, 4, 4) /* index */;
}

static inline int reflection_Type_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Type_table_verifier);
}

static int __reflection_EnumVal_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_string_field(td, 0, 1) /* name */
        && flatcc_verify_field(td, 1, 8, 8) /* value */
        && flatcc_verify_table_field(td, 2, 0, &__reflection_Object_table_verifier) /* object */;
}

static inline int reflection_EnumVal_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_EnumVal_table_verifier);
}

static int __reflection_Enum_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_string_field(td, 0, 1) /* name */
        && flatcc_verify_table_vector_field(td, 1, 1, &__reflection_EnumVal_table_verifier) /* values */
        && flatcc_verify_field(td, 2, 1, 1) /* is_union */
        && flatcc_verify_table_field(td, 3, 1, &__reflection_Type_table_verifier) /* underlying_type */;
}

static inline int reflection_Enum_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Enum_table_verifier);
}

static int __reflection_Field_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_string_field(td, 0, 1) /* name */
        && flatcc_verify_table_field(td, 1, 1, &__reflection_Type_table_verifier) /* type */
        && flatcc_verify_field(td, 2, 2, 2) /* id */
        && flatcc_verify_field(td, 3, 2, 2) /* offset */
        && flatcc_verify_field(td, 4, 8, 8) /* default_integer */
        && flatcc_verify_field(td, 5, 8, 8) /* default_real */
        && flatcc_verify_field(td, 6, 1, 1) /* deprecated */
        && flatcc_verify_field(td, 7, 1, 1) /* required */
        && flatcc_verify_field(td, 8, 1, 1) /* key */;
}

static inline int reflection_Field_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Field_table_verifier);
}

static int __reflection_Object_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_string_field(td, 0, 1) /* name */
        && flatcc_verify_table_vector_field(td, 1, 1, &__reflection_Field_table_verifier) /* fields */
        && flatcc_verify_field(td, 2, 1, 1) /* is_struct */
        && flatcc_verify_field(td, 3, 4, 4) /* minalign */
        && flatcc_verify_field(td, 4, 4, 4) /* bytesize */;
}

static inline int reflection_Object_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Object_table_verifier);
}

static int __reflection_Schema_table_verifier(flatcc_table_verifier_descriptor_t *td)
{
    return flatcc_verify_table_vector_field(td, 0, 1, &__reflection_Object_table_verifier) /* objects */
        && flatcc_verify_table_vector_field(td, 1, 1, &__reflection_Enum_table_verifier) /* enums */
        && flatcc_verify_string_field(td, 2, 0) /* file_ident */
        && flatcc_verify_string_field(td, 3, 0) /* file_ext */
        && flatcc_verify_table_field(td, 4, 0, &__reflection_Object_table_verifier) /* root_table */;
}

static inline int reflection_Schema_verify_as_root(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__reflection_Schema_table_verifier);
}

#if __clang__
#pragma clang diagnostic pop
#endif
#endif /* REFLECTION_VERIFIER_H */
