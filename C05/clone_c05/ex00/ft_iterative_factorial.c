/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:39:49 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/26 20:24:41 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (0 <= nb)
	{
		while (i <= nb)
		{
			res *= i;
			i++;
		}
		return (res);
	}
	return (0);
}

/*
int main ()
{
	int res = ft_iterative_factorial(5);
	printf("test output; %i\n",res);
	res = ft_iterative_factorial(0);
	printf("test output; %i\n",res);
	res = ft_iterative_factorial(-15);
	printf("test output; %i\n",res);


	return 0;
}
*/
