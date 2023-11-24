#include "libft.h"

int ft_isalpha(int c)
{
    if (ft_isascii(c))
    {
        if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
            return (1);
        else
            return (0);
    }else
        return (0);

}