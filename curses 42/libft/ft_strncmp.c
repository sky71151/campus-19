#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{	
	while (*s1 && *s1 == *s2 && n - 1)
	{
		s1++;
		s2++;
		n--;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    unsigned int n = 8; // Change n to test different lengths

    int result_ft = ft_strncmp(str1, str2, n);
    int result_std = strncmp(str1, str2, n);

    if (result_ft == 0) {
        printf("ft_strncmp: The first %u characters are equal.\n", n);
    } else {
        printf("ft_strncmp: The first %u characters are not equal.\n", n);
    }

    if (result_std == 0) {
        printf("strcmp: The first %u characters are equal.\n", n);
    } else {
        printf("strcmp: The first %u characters are not equal.\n", n);
    }

    return 0;
}*/