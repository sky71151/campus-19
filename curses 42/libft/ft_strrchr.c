#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    const char *last_occurrence;

    last_occurrence = NULL;

    if (str == NULL)
        return (NULL);

    while (*str != '\0') {
        if (*str == (char)c)
            last_occurrence = str;
        str++;
    }

    if (last_occurrence != NULL)
        return (char *)last_occurrence;
    else
        return NULL;
}

/*
int main() {
    const char *test_string = "This is a test string!";
    int character_to_find = 's'; // Change this character to test different characters

    char *result = ft_strrchr(test_string, character_to_find);

    if (result != NULL) {
        printf("Last occurrence of '%c' found at position: %ld\n", character_to_find, result - test_string);
    } else {
        printf("Character '%c' not found in the string.\n", character_to_find);
    }

    return 0;
}
*/