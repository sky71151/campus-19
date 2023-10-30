#include <unistd.h>

int	ft_is_prime(int nb)
{	
	int div;

	div = 2;
	if ( nb <= 1)
		return (0);
	while(div < nb)
	{
		if((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}


#include <stdio.h>

int main(void)
{
	int counter;
	int result;

	counter = 0;
	result	= 0;
	while (counter <= 100)
	{
		result = ft_is_prime(counter);
		
		if (result)
			printf("%d = a prime number\n", counter);
		else
			printf("%d = NOT a prime number\n", counter);
		counter++;
	}
	return (0);
}
