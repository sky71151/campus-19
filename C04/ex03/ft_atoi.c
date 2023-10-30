/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:46:17 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:29 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	checkposorneg(char *str, int *neg, int len)
{
	while (str[len] == '-' || str[len] == '+')
	{
		if (str[len] == '-' && str[len + 1] == '-')
		{
			str[len + 1] = '+';
			*neg = 0;
		}
		else if (str[len] == '-' && str[len + 1] == '+')
		{
			str[len + 1] = '-';
			*neg = 1;
		}
		else if (str[len] == '+' && str[len + 1] == '-')
			*neg = 1;
		else if (str[len] == '+' && str[len + 1] == '+')
			*neg = 0;
		len++;
	}
	return (len);
}

int	ft_atoi(char *str)
{	
	int	result;
	int	neg;
	int	len;

	result = 0;
	neg = 0;
	len = 0;
	while (ft_isspace(str[len]))
		len++;
	len = checkposorneg(str, &neg, len);
	while (str[len] >= '1' && str[len] <= '9')
	{
		if (result != 0)
		{
			result *= 10;
			result += (str[len++] - 48);
		}
		else
			result = str[len++] -48;
	}	
	if (neg)
		result *= -1;
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "	 ---+--+1234ab567";

	printf("%d\n", ft_atoi(str));
	return 0;
}
*/		
