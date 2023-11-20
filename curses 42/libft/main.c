#include <stdio.h>
#include "libft.h"

int main() {
    const char *str1 = "adcdef";
    const char *str2 = "abc\375xx";

    int result = ft_strncmp(str1, str2, 5);

    printf("%d\n", result);

    return 0;
}

