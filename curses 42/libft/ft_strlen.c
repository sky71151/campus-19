#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while (str[len])
    {
        if (len == SIZE_MAX)
           return (0);
        len++;
    }
    return (len);
}
/*
#include <stdio.h>
#include <string.h> 

size_t ft_strlen(const char *str);

int main() {
    const char *test_string = "Hello, this is a test string.";

    // Testing ft_strlen
    size_t len = ft_strlen(test_string);

    printf("Length calculated by ft_strlen: %d\n", len);
    printf("Length calculated by strlen: %d\n", strlen(test_string));

    return 0;
}*/