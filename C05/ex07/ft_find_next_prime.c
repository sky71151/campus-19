#include <unistd.h>

int     ft_is_prime(int nb) 
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

int	ft_find_next_prime(int nb)
{
	while(1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

#include <stdio.h>

int main(void)
{
        int counter;
        int result;

        counter = 0;
        result  = 0;
        while (counter <= 100)
        {
                result = ft_find_next_prime(counter);
    		printf("%d = next prime number of nummer %d\n", result, counter);
                counter++;
        }
        return (0);
}
