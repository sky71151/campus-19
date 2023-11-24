#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t i;

    i = 0;

    if (dest== NULL || src == NULL || size == 0) 
        return 0; 
    
    while (i + 1 < size && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    
    if (i < size)
        dest[i] = '\0';
    
    while (src[i] != '\0') {
        i++; // 
    }
    
    return i;
}
/*
#include <stdio.h>

int main() {
    char source[] = "This is a test string."; 
    char destination[20];

    size_t copied_length = ft_strlcpy(destination, source, sizeof(destination));
    

    printf("Copied string: %s\n", destination);
    printf("Copied length: %d\n", copied_length);

    return 0;
}*/