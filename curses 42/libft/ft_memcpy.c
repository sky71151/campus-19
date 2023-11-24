#include "libft.h"


void    *ft_memcpy(void *destination, const void *source, size_t num) 
{
    unsigned char *dest;
    const char *src;
    size_t index;
    
    if (destination == NULL || source == NULL || num == 0)
        return destination;
    
    dest = (unsigned char *)destination;
    src  = (const char *)source;
    index = 0;
    while (num--)
    {
        dest[index] = src[index];
        index++;
    }
    return destination;
}
/*
#include <stdio.h>

int main() {
    char source[] = "This is the source string.";
    char destination[50];

    // Copying the source string to the destination using ft_memcpy
    ft_memcpy(destination, source, strlen(source) + 1);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/