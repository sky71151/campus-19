/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:18:21 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/06 13:48:27 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	count_words(char *str, char *charset)
{
	int	words;
	int	index;
	int	charset_index;

	words = 0;
	index = 0;
	charset_index = 0;
	while (str[index] != '\0')
	{
		charset_index = 0;
		while (charset[charset_index] != '\0')
		{
			if (str[index] == charset[charset_index])
			{
				words += 1;
				break ;
			}
			charset_index++;
		}
		index++;
	}
	return (words + 1);
}

int	check_char_if_sep(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index++;
	}
	return (0);
}

void	ft_word_split(char *str, char *charset, char **ptr)
{
	int	index;
	int	start;
	int	word;
	int	i;

	index = 0;
	start = 0;
	word = 0;
	i = 0;
	while (str[index] != '\0' || str[index] == '\0')
	{
		if (check_char_if_sep(str[index], charset) == 1 || str[index] == '\0' )
		{
			ptr[word] = malloc(sizeof(char) * (index - start) + 1);
			i = 0;
			while (start < index)
				ptr[word][i++] = str[start++];
			ptr[word][i] = '\0';
			if (str[index] == '\0')
				return ;
			start = index + 1;
			word++;
		}
		index++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	int		words;
	char	**ptr;

	index = 0;
	words = 0;
	words = count_words(str, charset);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	ptr[words] = 0;
	ft_word_split(str, charset, ptr);
	return (ptr);
}
/*

#include <stdio.h>

int	main(int argc, char ** argv)
{

	char str[] = "this is a string! a very long string  ?";
	char sep[] = " ";
	char **ptr = ft_split(str,sep);
	int index = 0;

	while (ptr[index] != 0)
	{
		printf("%s\n",ptr[index++]);
	}
	return (0);
}*/
