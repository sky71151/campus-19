#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num) 
{
    const unsigned char *p;
    unsigned char v;
    
    p = ptr;
    v = (unsigned char)value;
    while (num--) {
        if (*p == v) 
            return p;
        
        p++;
    }

    return NULL;
}
