#include <unistd.h>

int	ft_fibonnacci(int index)
{
	if (index < 0
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonnacci(index -1) +ft_fibonnacci(index -2));
}
/*

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_fibonnacci(10));
}*/
