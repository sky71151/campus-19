#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int len;
	int index;
	char *result;
	
	len = 0;
	index = 0;
	while (src[len])
		len++;
	
	result = (char*)malloc(len);
	while (len != 0 && src[index])
	{
		result[index] = src[index];
		index++;
		len--;
	}
	result[index] = '\0';
	return (result);
}




int main(void)
{
	char str[] = "this is a string";

	printf("%s\n", ft_strdup(str));
	return (0);
} 
