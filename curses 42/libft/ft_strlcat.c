#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = ft_strlen(dest);
	j = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);

	if (size <= len_d)
		return (len_s + size);


	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';


	return (len_d + len_s);
}
/*
#include <stdio.h>
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t dest_size = sizeof(dest);

    // Test ft_strlcat
    size_t result_length = ft_strlcat(dest, src, dest_size);

    printf("Concatenated string: %s\n", dest);
    printf("Total length after concatenation: %zu\n", result_length);

    return 0;
}*/