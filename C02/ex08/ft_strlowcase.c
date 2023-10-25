/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:22:29 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 11:24:39 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*rtn;

	rtn = str;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
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
	int result = 0;
	
	printf("result = %s\n%s",str,ft_strlowcase(str));
	return 0;
}*/
