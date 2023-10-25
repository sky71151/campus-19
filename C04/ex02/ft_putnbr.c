#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[20];
	char	mod;
	char	index;

	index = 0;
	while (nb)
	{
		mod = nb % 10;
		str[index++] = mod + 48;
		nb /= 10;
	}
	while (index)
	{
		write(1,&str[--index],1);
	}
}

/*
#include <stdio.h>
int main(void)
{
	int	num;

	num = 6789;
	ft_putnbr(num);
	printf("\n");
	num = 32000;
	ft_putnbr(num);
	return 0;
}*/
