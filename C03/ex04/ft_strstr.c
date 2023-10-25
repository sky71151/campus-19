/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:21:05 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 14:29:38 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare_substring(const char *str, const char *to_find)
{
	int	index;

	index = 0;
	while (str[index] == to_find[index] && to_find[index] != '\0')
	{
		if (str[index] != to_find[index])
		{
			return (0);
		}
		index++;
	}
	return (to_find[index] == '\0');
}

char	*find_substring(const char *str, const char *to_find)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == to_find[0])
		{
			if (compare_substring(&str[index], to_find))
			{
				return ((char *)&str[index]);
			}
		}
		index++;
	}
	return (0);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	if (str == 0 || to_find == 0)
	{
		return (0);
	}
	return (find_substring(str, to_find));
}
/*

#include <stdio.h>

int main() {
     char str[] = "hello, World!";
     char str_to_find[] = "World";

    char *resultaat = ft_strstr(str,str_to_find);
    if (resultaat) {
        printf("Substring on index %ld\n", resultaat - str);
    } else {
        printf("no match\n");
    }

    return 0;
}
*/
