/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:18:08 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:54:02 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126))
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
	//char str[]= "aBcDeFgH";
	//char str[]= {32,31,30};
	char str[]= "";
	int result = 0;
	result = ft_str_is_printable(str);
	printf("de soms is = %d\n",result);
	return 0;
}
*/
