/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:54:42 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 08:55:52 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>
int main(void)
{
	int c = 10;
	int d = 20;

	printf(" a= %d and  b= %d \n", c,d);
       ft_swap(&c,&d);
       printf(" a= %d and  b= %d \n", c,d);
	return 0;
}*/	
