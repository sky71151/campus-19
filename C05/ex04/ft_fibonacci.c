/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:16:53 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 10:19:20 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonnacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonnacci(index - 1) + ft_fibonnacci(index - 2));
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_fibonnacci(10));
}*/
