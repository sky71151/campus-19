#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    const char *last_occurrence = NULL;
    
    while (*str != '\0') {
        if (*str == (char)c) {
            last_occurrence = str;
        }
        str++;
    }

    if (*str == (char)c) {
        return (char *)str; // Return the pointer to the last occurrence
    } else {
        return (char *)last_occurrence; // Return the pointer to the last occurrence found
    }
}
