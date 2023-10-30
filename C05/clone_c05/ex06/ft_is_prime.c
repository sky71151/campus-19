/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 06:25:19 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/30 06:40:01 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	prime;
	int	max_int;

	max_int = 2147483647;
	if (nb <= 1)
		return (0);
	if (nb == max_int)
		return (1);
	prime = 1;
	while (prime <= nb)
	{
		if (nb % prime == 0)
			if (prime != 1 && prime != nb)
				return (0);
		prime++;
	}
	return (1);
}
/*
int main()
{
	int nbr = 31;
	int res = ft_is_prime(nbr);
	if(res)
		printf("This number is prime: %i\n",nbr);
	else
		printf("This number is not prime: %i\n",nbr);
	return 0;
}*/
