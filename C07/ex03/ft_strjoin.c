/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:38:00 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 16:25:35 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int		index;
	int		len;

	index = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[index])
	{
		dest[len] = src[index];
		len++;
		index++;
	}
	dest[len] = '\0';
}

char	*pointerzero(char *p)
{
	p = (char *)malloc(1);
	p[0] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		index;
	char	*p;
	int		lenght;

	index = 0;
	lenght = 0;
	if (size == 0)
		return (pointerzero(p));
	while (index < size)
		lenght += ft_strlen(strs[index++]);
	lenght += ((size -1) * ft_strlen(sep));
	p = (char *)malloc(sizeof(char) * (lenght + 1));
	p[0] = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(p, strs[index]);
		if (index < size - 1)
			ft_strcat(p, sep);
		index++;
	}
	return (p);
}
/*
#include <stdio.h>

int main(void)
{
	char sep[] = "/./";
	char *src[] = {"hello","world","how","are","you","doing"};

	printf("%s\n", ft_strjoin(0,src, sep));
	return (0);
}*/
