/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:56:31 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 08:56:51 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int a = 8;
	int b = 3;
	int div = 0;
	int mod = 0;

	ft_div_mod(a,b,&div,&mod);

	printf("result = %d \nremainer = %d",div,mod);
	return 0;
}
*/
