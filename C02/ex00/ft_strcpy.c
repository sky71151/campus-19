/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:18:13 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 09:59:08 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*rtn;

	rtn = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (rtn);
}

/*
#include <stdio.h>

int main(void)
{
	char src[] = "dit is een test";
	char dest[100];

	printf("%s\n", ft_strcpy(dest, src));	
	printf("%s\n", dest);
}*/
