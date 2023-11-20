#include "libft.h"


void    *ft_memcpy(void *destination, const void *source, size_t num) 
{
    char *dest = (char *)destination;
    const char *src = (const char *)source;
    size_t index;

    index = 0;
    while (num--)
    {
        dest[index] = src[index];
        index++;
    }
    return destination;
}
