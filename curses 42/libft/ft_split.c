#include "libft.h"

static size_t count_words(const char *s, char c) 
{
    size_t count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && !in_word) 
        {
            in_word = 1;
            count++;
        } else if (*s == c)
            in_word = 0;
        s++;
    }
    return count;
}

static char *strndup(const char *s, size_t n) {
    char *dup;
    const char *end;
    char *ptr;

    dup = (char *)malloc(sizeof(char) * (n + 1));
    if (!dup)
        return NULL;

    end = s + n;
    ptr = dup;
    while (s < end)
        *ptr++ = *s++;
    *ptr = '\0';

    return dup;
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;

    size_t word_count;
    char **result;
    size_t word_len;

    word_count = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result) 
        return NULL;
    result[word_count] = NULL;

    while (*s) {
        if (*s != c) {
            const char *start = s;
            while (*s && *s != c)
                s++;
            word_len = s - start;
            *result++ = strndup(start, word_len);
            if (!*(result - 1)) {
                // Free memory allocated so far if strndup fails
                while (result > result - word_count)
                    free(*(--result));
                free(result - word_count);
                return NULL;
            }
        } else
            s++;
    }

    return result - word_count;
}

/*
void print_str_array(char **str_arr) {
    while (*str_arr) {
        printf("%s\n", *str_arr);
        str_arr++;
    }
}

void free_str_array(char **str_arr) {
    char **ptr = str_arr;
    while (*ptr) {
        free(*ptr);
        ptr++;
    }
    free(str_arr);
}

int main() {
    char *input_string = "This is a test string for splitting";
    char delimiter = ' ';

    printf("Input String: %s\n", input_string);
    printf("Delimiter: '%c'\n", delimiter);

    char **result = ft_split(input_string, delimiter);

    if (result == NULL) {
        printf("Memory allocation failed or input was NULL.\n");
        return 1;
    }

    printf("Split Strings:\n");
    print_str_array(result);

    free_str_array(result);

    return 0;
}
*/