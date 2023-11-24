#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num) 
{
    const unsigned char *p1;
    const unsigned char *p2;
    if (ptr1 == NULL || ptr2 == NULL)
        return -1;
    

    p1 = ptr1;
    p2 = ptr2;
    while (num > 0) {
        if (*p1 != *p2) {
            return ((int)*p1 - (int)*p2);
        }
        p1++;
        p2++;
        num--;
    }

    return 0;
}

int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, CPT!";
    const char *str4 = "hello, world!"; // Different case

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t len3 = strlen(str3);
    size_t len4 = strlen(str4);

    // Test case 1: Same strings, same length
    printf("Test case 1: Same strings, same length\n");
    int result1 = ft_memcmp(str1, str2, len1);
    printf("ft_memcmp result: %d\n", result1);

    // Test case 2: Different strings, same length
    printf("\nTest case 2: Different strings, same length\n");
    int result2 = ft_memcmp(str1, str3, len1);
    printf("ft_memcmp result: %d\n", result2);

    // Test case 3: Different strings, different length
    printf("\nTest case 3: Different strings, different length\n");
    int result3 = ft_memcmp(str1, str4, len1);
    printf("ft_memcmp result: %d\n", result3);

    // Using memcmp for comparison
    int std_result1 = memcmp(str1, str2, len1);
    int std_result2 = memcmp(str1, str3, len1);
    int std_result3 = memcmp(str1, str4, len1);

    printf("\nresult 1 = %d, result 2 = %d, result 3 = %d\n", std_result1,std_result2,std_result3);

    if (result1 != std_result1 || result2 != std_result2 || result3 != std_result3) {
        printf("\nError: ft_memcmp and memcmp give different results.\n");
    } else {
        printf("\nResults match!\n");
    }

    return 0;
}