/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:11:21 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 13:09:36 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	num = nb;
	while (power-- > 1)
		nb *= num;
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(4239,0));
	return (0);
}*/
