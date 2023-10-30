/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:25:48 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 10:28:58 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		if (i >= 46341)
			return (0);
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int counter = 1;

	while (counter <= 100)
	{
		printf("sqr  of %d = %d\n",counter, ft_sqrt(counter));
		counter++;
	}
}*/
