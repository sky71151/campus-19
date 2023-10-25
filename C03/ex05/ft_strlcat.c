/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:30:19 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 15:05:43 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (dest_len + src_len);
	else
	{
		i = 0;
		while (i < (size - (dest_len -1)) && src[i])
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + src_len);
	}
}
/*

#include <stdio.h>

int main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	printf("%lu\n",sizeof(dest));
	unsigned int result = ft_strlcat(dest, src, sizeof(dest));
	printf("%lu\n",sizeof(dest));
	printf("string: %s\n", dest);
	printf("Total length: %u\n", result);
}*/
