#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "this is a test with letters and numbers";

	printf("%d\n",ft_strlen(str));
	return (0);
}*/
