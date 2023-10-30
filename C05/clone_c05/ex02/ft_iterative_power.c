/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:07:46 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/26 21:35:42 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*
int main ()
{
	int res = ft_iteratieve_power(2,2);
	printf("testing res; %i\n",res);
	res = ft_iteratieve_power(2,0);
	printf("testing res; %i\n",res);
	res = ft_iteratieve_power(0,2);
 	printf("testing res; %i\n",res);
	res = ft_iteratieve_power(-2,2);
	printf("testing res; %i\n",res);
	res = ft_iteratieve_power(2,-2);
    printf("testing res; %i\n",res);
	return 0;
}*/
