#include "libft.h"

static char *ft_strncpy(char *dest, const char *src, size_t n) {
    size_t index;
    
    index = 0;
    while (index < n && src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }

    while (index < n) {
        dest[index] = '\0';
        index++;
    }

    return dest;
}

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
    size_t length;
    char *substr;
    
    length = ft_strlen(s);
    if (start >= length) 
        return ft_strdup("");
    if (len > length - start) 
        len = length - start;
    substr = malloc((len + 1) * sizeof(char));
    if (!substr) 
        return NULL;
    ft_strncpy(substr, s + start, len);
    substr[len] = '\0';
    return substr;
}
/*
#include <stdio.h>

int main() {
    
    char *original = "This is a test string.";
    
    unsigned int start = 5;
    size_t length = 7;

    char *result = ft_substr(original, start, length); 
    if (result != NULL) {
        printf("Original string: \"%s\"\n", original);
        printf("Substring from position %u with length %zu: \"%s\"\n", start, length, result);
        free(result); 
    } else {
        printf("Memory allocation error\n");
    }

    return 0;
}*/