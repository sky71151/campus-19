/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:27:28 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 17:11:01 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*p;
	int	index;

	index = 0;
	if (min >= max)
		return (NULL);
	p = (int *)malloc((max - min) * sizeof(int));
	if (!p)
		return (NULL);
	while ((min + index) < max)
	{
		p[index] = min + index;
		index++;
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
