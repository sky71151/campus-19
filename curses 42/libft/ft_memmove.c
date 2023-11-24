#include "libft.h"

void *memmove(void *destination, const void *source, size_t num) {
    char *dest;
    const char *src;

    if (destination == NULL || source == NULL || num == 0) 
        return destination;

    dest = (char *)destination;
    src = (const char *)source;

    if (dest <= src || dest >= src + num) {
        for (size_t i = 0; i < num; ++i) {
            dest[i] = src[i];
        }
    } else {
        for (size_t i = num; i > 0; --i) {
            dest[i - 1] = src[i - 1];
        }
    }

    return destination;
}
/*
#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[20];

    // Testing ft_memmove
    ft_memmove(str2, str1, ft_strlen(str1) + 1); // +1 to include the null terminator

    // Display the copied string
    printf("Copied string: %s\n", str2);

    // Check if the strings are equal
    if (ft_strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
*/
