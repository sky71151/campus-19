#include "libft.h"


char *ft_strchr(const char *str, int c) {

    while (*str != '\0') 
    {
        if (*str == (char)c) 
            return (char *)str;
        str++;
    }
    if ((char)c == '\0') 
        return (char *)str;
    return (NULL);
}
