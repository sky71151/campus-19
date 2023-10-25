/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:52:25 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 14:59:24 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*save;

	save = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb != 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (save);
}
/*

#include <stdio.h>

int main(int argc, char **argv)
{	
	char dest[100] = "start";
	char source[] = "stop";
	printf("%s\n",ft_strncat(dest,source,3));
	printf("%s\n",dest);
	return 0;
}*/
