#include "libft.h"

void    ft_bzero(void *ptr, size_t num)
{
    unsigned char *p;

     if (ptr == NULL || num == 0)
        return;

    p = (unsigned char *)ptr;
    while (num--)
    {
        *p = 0;
        p++;
    }

}