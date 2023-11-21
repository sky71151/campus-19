#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2) {
    size_t len1;
    size_t len2;
    size_t total_length;
    char *result;
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    total_length = len1 + len2;
    result = malloc(sizeof(char) * (total_length + 1));
    if (result == NULL) 
        return NULL;
    while (*s1 != '\0')
        *result++ = *s1++;
    while (*s2 != '\0')
        *result++ = *s2++;
    *result = '\0';
    result -= total_length;
    return result;
}
/*
#include <stdio.h>

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";

    char *joined = ft_strjoin(str1, str2);
    if (joined != NULL) {
        printf("Joined string: %s\n", joined);
        free(joined);
    } else {
        printf("Memory allocation error.\n");
    }

    return 0;
}*/