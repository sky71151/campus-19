/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:21:52 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 13:25:55 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*result;

	len = 0;
	index = 0;
	while (src[len])
		len++;
	result = (char *)malloc(len);
	while (len != 0 && src[index])
	{
		result[index] = src[index];
		index++;
		len--;
	}
	result[index] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "this is a string";

	printf("%s\n", ft_strdup(str));
	return (0);
} */
