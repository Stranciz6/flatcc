 /* Note: only one hash table can be implemented a single file. */
#include "../symbols.h"
#include "hash/hash_table_def.h"
DEFINE_HASH_TABLE(fb_name_table)
/*
 * TODO: also try "hash_table_impl_srh.h": it is slower on simple hashes
 * but may speed up complex keys such as parser tokens, and cache the
 * hash function.
 */
#include "hash/hash_table_impl.h"

static inline int ht_match(const void *key, size_t len, fb_name_t *name)
{
    return len == (size_t)name->name.s.len && memcmp(key, name->name.s.s, len) == 0;
}

static inline const void *ht_key(fb_name_t *name)
{
    return name->name.s.s;
}

static inline size_t ht_key_len(fb_name_t *name)
{
    return name->name.s.len;
}
