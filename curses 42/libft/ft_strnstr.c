#include "libft.h"

char *ft_strnstr(const char *source, const char *search, size_t len) 
{
    size_t search_len = ft_strlen(search);

    if (!*search) {
        return (char *)source;
    }

    while (*source && len >= search_len) {
        if (*source == *search && ft_strncmp(source, search, search_len) == 0) {
            return (char *)source;
        }
        source++;
        len--;
    }

    return NULL;
}

/*
#include <stdio.h>
int main() {
    const char haystack[] = "This is a sample string to search within.";
    const char needle[] = "sample";

    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack));

    if (result != NULL) {
        printf("Substring '%s' found at position: %ld\n", needle, result - haystack);
    } else {
        printf("Substring '%s' not found\n", needle);
    }

    return 0;
}*/
