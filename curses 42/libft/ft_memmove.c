#include "libft.h"


void *memmove(void *destination, const void *source, size_t num) {
    char *dest = (char *)destination;
    const char *src = (const char *)source;

    if (dest <= src || dest >= src + num) {
        for (size_t i = 0; i < num; ++i) {
            dest[i] = src[i];
        }
    } else {
        for (size_t i = num; i > 0; --i) {
            dest[i - 1] = src[i - 1];
        }
    }

    return destination;
}

