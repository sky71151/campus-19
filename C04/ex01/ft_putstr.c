#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

/*
int main(void)
{
	char str[]="this is a string";
	ft_putstr(str);
	return 0;
}*/
