#include "libft.h"

int ft_toupper(int c)
{
    if (ft_isascii(c))
    {    
        if (c >= 'a' && c <= 'z')
            return (c = (c - 'a') + 'A');
        else
            return (c);
    }else
        return (0);

}