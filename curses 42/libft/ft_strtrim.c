#include "libft.h"

static int in_set(char c, const char *set) 
{
    while (*set) 
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

static size_t trimmed_length(const char *str, const char *set) 
{
    size_t len;
    size_t start;
    size_t end;

    len = strlen(str);
    start = 0;
    end = len - 1;
    
    while (in_set(str[start], set) && start < len)
        start++;

    if (start == len)
        return (0);

    while (in_set(str[end], set))
        end--;


    return (end - start + 1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len;
    size_t start;
    char *trimmed;
    
    len = trimmed_length(s1, set);
    start = 0;
      trimmed = malloc((len + 1) * sizeof(char));
    if (!trimmed) 
        return (NULL);


    while (in_set(s1[start], set))
        start++;

    ft_memcpy(trimmed, &s1[start], len);
    trimmed[len] = '\0';
    return (trimmed);
}
/*
int main() {
    // Test string and set of characters to trim
    char *original = "___Hello, this is a test string.___";
    char *set = "_";

    // Call ft_strtrim
    char *trimmed = ft_strtrim(original, set);
    
    // Output the result
    if (trimmed != NULL) {
        printf("Original string: \"%s\"\n", original);
        printf("Set of characters to trim: \"%s\"\n", set);
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed);
    } else {
        printf("Error: Memory allocation failure.\n");
    }

    return 0;
}*/
