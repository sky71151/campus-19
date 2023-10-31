/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:27:28 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 13:27:58 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*p;
	int	size;
	int	index;

	index = 0;
	size = max - min;
	if (min >= max)
	{
		p = (int *)malloc(1);
		p[0] = 0;
		return (p);
	}
	p = (int *)malloc(size * sizeof(int));
	while ((min + index) < max)
	{
		p[index] = min + index;
		index++;
		size--;
	}
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	int *array;
	int index;
	int min;
	int max;
	
	min = -9;
	max = 10;
	index = 0;

	array = ft_range(min, max);

	while (index < (max - min))
	{
		printf("%d\n", array[index]);
		index++;
	}
	return (0);
}*/
