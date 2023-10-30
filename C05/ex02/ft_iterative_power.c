/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:11:21 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 10:14:37 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
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
