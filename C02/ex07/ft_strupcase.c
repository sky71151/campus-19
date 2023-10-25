/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:20:49 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:56:00 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*rtn;

	rtn = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	return (rtn);
}
/*

#include <stdio.h>

int main(void)
{
	char str[]= "aBcDeFgH";
	char result[100];
	
	printf("result = %s\n%s",str,ft_strupcase(str));
	return 0;
}
*/
