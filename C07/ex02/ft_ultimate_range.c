/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:30:06 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 13:44:18 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;

	size = max - min;
	index = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[index] = min;
		index++;
		min++;
	}
	return (size);
}
/*

#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	size;
	int	*p;
	int	index;

	min = 0;
	max = 12;
	index = 0;
	size = ft_ultimate_range(&p, min, max);

	if (size <= 0)
	{
		printf("pointer = 0");
		return (0);
	}
	
	while (size)
	{
		printf("%d\n",p[index]);
		size--;
		index++;
	}
}*/
