/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:31:33 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 14:20:57 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int		div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div < nb / 2)
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (nb == 2147483647)
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
        int counter;
        int result;

        counter = 0;
        result  = 0;
        while (counter <= 200000)
        {
                result = ft_find_next_prime(counter);
    		printf("%d = next prime number of nummer %d\n", result, counter);
                counter++;
        }
        return (0);
}*/
