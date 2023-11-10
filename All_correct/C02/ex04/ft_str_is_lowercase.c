/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:05:02 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:51:49 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
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
	char str[]= "abcdefeh";
	int result = 0;
	result = ft_str_is_lowercase(str);
	printf("the result = %d\n",result);
	return 0;
}*/
