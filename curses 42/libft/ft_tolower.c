#include "libft.h"

int ft_tolower(int c)
{
    if (ft_isascii(c))
    {
        if (c >= 'A' && c <= 'Z')
            return (c = (c - 'A') + 'a');
        else
            return (c);
    }else
        return (0);

}