#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size) {
    size_t i = 0;
    
    while (i + 1 < size && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    
    if (i < size)
        dest[i] = '\0';
    
    while (src[i] != '\0') {
        i++; // 
    }
    
    return i;
}
