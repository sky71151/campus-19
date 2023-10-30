/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:05:29 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 10:08:28 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		result;

	if (nb <= 0)
		return (0);
	result = nb;
	nb--;
	while (nb >= 1)
	{
		result *= nb;
		nb -= 1;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
