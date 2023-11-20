#include "libft.h"

char *ft_strdup(const char *source) {
    size_t len;
    char *new_str;

    len = ft_strlen(source) + 1;
    new_str = malloc(sizeof(char) * len);

    if (new_str != NULL) {
        ft_memcpy(new_str, source, len);
    }

    return new_str;
}

/*
#include <stdio.h>
int main() {
    const char *original = "Hello, world!";
    
    
    char *copy = ft_strdup(original);

    if (copy == NULL) {
        printf("memory allocation error.\n");
        return 1;
    }

    printf("Original string: %s\n", original);
    printf("duplicated string: %s\n", copy);

    free(copy);
    return 0;
}*/

