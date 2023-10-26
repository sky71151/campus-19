/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:20:45 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/26 16:20:49 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[50];
	char	mod;
	char	index;
	char	neg;

	index = 0;
	neg = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		neg = 1;
	}
	while (nb)
	{
		mod = nb % 10;
		str[index++] = mod + 48;
		nb /= 10;
	}
	if (neg)
		str[index++] = '-';
	while (index--)
	{
		write(1, &str[index], 1);
	}
}
/*

#include <stdio.h>
int main(void)
{
	int	num;

	num = -2147483647;
	ft_putnbr(num);
	printf("\n");
	num = 32000;
	ft_putnbr(num);
	return 0;
}*/
