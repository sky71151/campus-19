/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:58:28 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 08:59:50 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*

#include <stdio.h>

int	main(void)
{
	int a = 8;
	int b = 3;

	ft_ultmate_div_mod(&a, &b);

	printf("result = %d\nmod is %d",a,b);
	return 0;
}*/
