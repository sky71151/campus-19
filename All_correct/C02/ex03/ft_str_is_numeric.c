/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:58:37 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:47:14 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
		{
			str++;
		}
		else
		{
			result = 0;
			break ;
		}
	}
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	char str[]= "12as3456866";
	int result = 0;
	result = ft_str_is_numeric(str);
	printf("result = %d\n",result);
	return 0;
}*/
