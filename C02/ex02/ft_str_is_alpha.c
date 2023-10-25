/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:47:35 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:44:25 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	char str[]= "aBc58DeFgH";
	int result = 0;
	result = ft_str_is_alpha(str);
	printf("result = %d\n",result);
	return 0;
}*/
