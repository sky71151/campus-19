#include "libft.h"

static size_t get_num_length(int n) {
    size_t length = (n <= 0) ? 1 : 0; 
    while (n != 0)
    {
        length++;
        n /= 10;
    }
    return length;
}

char *ft_itoa(int n)
{
    size_t length;
    int is_negative;
    char *result;
    if (n == 0) {
        result = malloc(2 * sizeof(char));
        if (!result)
            return NULL;
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    length = get_num_length(n);
    is_negative = (n < 0) ? 1 : 0;
    result = malloc((length + 1) * sizeof(char));
    if (!result) 
        return NULL;
    result[length--] = '\0';
    if (is_negative) {
        result[0] = '-';
        n = -n; 
    }
    while (n > 0) {
        result[length--] = '0' + (n % 10);
        n /= 10;
    }
    return result;
}
