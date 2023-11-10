/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:21:11 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 14:53:55 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int	index;
	int	rtn;

	index = 0;
	rtn = 0;
	while (*s1 && *s2 && *s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}
/*

#include <stdio.h>

int main(int argc,char **argv)
{	
	int a = 4;
	printf("%d\n",ft_strncmp(argv[1],argv[2],a));
	return 0;
}*/
