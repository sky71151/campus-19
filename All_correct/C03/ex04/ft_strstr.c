/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:21:05 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/26 10:56:44 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{	
	char	*s;
	char	*t;

	if (!str || !to_find)
		return (0);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*

#include <stdio.h>

int main() {
     char str[] = "hello World! this is a test";
     char str_to_find[] = "this";

    char *resultaat = ft_strstr(str,str_to_find);
    if (resultaat) {
        printf("Substring on index %ld\n", resultaat - str);
    } else {
        printf("no match\n");
    }

    return 0;
}*/
