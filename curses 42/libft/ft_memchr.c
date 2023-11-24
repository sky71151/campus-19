#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num) 
{
    const unsigned char *p;
    unsigned char v;

    if (ptr == NULL)
        return NULL;
    
    p = ptr;
    v = (const unsigned char)value;
    while (num--) {
        if (*p == v) 
            return (void *)p;
        
        p++;
    }

    return NULL;
}

/*
int main() {
    const char *str = "This is a test string";
    int search_char = 't';
    size_t str_len = strlen(str);
    size_t i;

    printf("String: %s\n", str);
    printf("Searching for character '%c'\n", search_char);

    // Using ft_memchr
    void *result_ft = ft_memchr(str, search_char, str_len);

    if (result_ft != NULL) {
        printf("Character '%c' found at position: %ld\n", search_char, (char *)result_ft - str);
    } else {
        printf("Character '%c' not found.\n", search_char);
    }

    // Using memchr for comparison
    void *result_std = memchr(str, search_char, str_len);

    if (result_ft != result_std) {
        printf("Error: ft_memchr and memchr give different results.\n");
    }

    return 0;
}*/