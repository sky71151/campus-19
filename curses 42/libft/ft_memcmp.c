#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num) 
{
    const unsigned char *p1 = ptr1;
    const unsigned char *p2 = ptr2;

    while (num > 0) {
        if (*p1 != *p2) {
            return ((int)*p1 - (int)*p2);
        }
        p1++;
        p2++;
        num--;
    }

    return 0;
}
