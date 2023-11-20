#include <stdio.h>
#include "libft.h"

int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hxllo";
    size_t num = 5; // Number of bytes to compare

    int result = ft_memcmp(str1, str2, num);

    if (result == 0) {
        printf("The first %zu bytes are identical.\n", num);
    } else if (result < 0) {
        printf("The first %zu bytes in str1 are less than in str2.\n", num);
    } else {
        printf("The first %zu bytes in str1 are greater than in str2.\n", num);
    }

    return 0;
}
