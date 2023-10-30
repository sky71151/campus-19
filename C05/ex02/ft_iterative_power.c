#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (0);

	int result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(-2,7));
	return (0);
}*/
