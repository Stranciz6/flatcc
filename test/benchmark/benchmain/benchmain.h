#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "support/elapsed.h"

#ifdef NDEBUG
#define COMPILE_TYPE "(optimized)"
#else
#define COMPILE_TYPE "(debug)"
#endif

int main(int argc, char *argv[])
{
    const int bufsize = 1000, rep = 1000000;
    void *buf;
    size_t size, old_size;
    double t1, t2, t3;
    /* Use volatie to prevent over optimization. */
    volatile int64_t total = 0;
    int i, ret = 0;
    DECLARE_BUILDER(B);

    buf = malloc(bufsize);

    /* Warmup to preallocate internal buffers. */
    size = bufsize;
    encode(B, buf, &size);
    t1 = elapsed_realtime();
    for (i = 0; i < rep; ++i) {
        size = bufsize;
        ret |= encode(B, buf, &size);
        assert(ret == 0);
        if (i > 0 && size != old_size) {
            printf("abort on inconsistent encoding size\n");
            goto done;
        }
        old_size = size;
    }
    t2 = elapsed_realtime();
    for (i = 0; i < rep; ++i) {
        total = decode(buf, size, total);
    }
    t3 = elapsed_realtime();
    if (total != -8725036910085654784LL) {
        printf("ABORT ON CHECKSUM FAILURE\n");
        goto done;
    }
    printf("----\n");
    show_benchmark(BENCH_TITLE " encode " COMPILE_TYPE, t1, t2, size, rep, "1M");
    printf("\n");
    show_benchmark(BENCH_TITLE " decode/traverse " COMPILE_TYPE, t2, t3, size, rep, "1M");
    printf("----\n");
    ret = 0;
done:
    if (buf) {
        free(buf);
    }
    CLEAR_BUILDER(B);
    return 0;
}
