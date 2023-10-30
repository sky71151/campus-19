/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:59:51 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/30 06:40:50 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 1;
	while ((sqrt * sqrt < nb) && (sqrt < nb / 2))
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
/*
int main (int argc, char **argv)
{
	int test = argv[1][0];
	int res = 0;
	if(argc == 2)
		res = ft_sqrt(8);
	printf("testvalue = %c, result = %c\n",test,res+'0');
	return 0;
}*/
