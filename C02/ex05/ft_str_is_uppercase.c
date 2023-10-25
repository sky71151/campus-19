/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:15:30 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 11:17:59 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
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
	char str[]= "ABCDEFEG";
	int result = 0;
	result = ft_str_is_uppercase(str);
	printf("de soms is = %d\n",result,str);
	return 0;
}
*/
