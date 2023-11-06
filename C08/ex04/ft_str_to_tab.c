/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:54:01 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/06 10:02:05 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strndup(char *src)
{
	int		i;
	char	*dup_ptr;

	dup_ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup_ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup_ptr[i] = src[i];
		i++;
	}
	dup_ptr[i] = '\0';
	return (dup_ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	tmp_stock;
	t_stock_str	*strs_stocks;

	strs_stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs_stocks)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tmp_stock.size = ft_strlen(av[i]);
		tmp_stock.str = av[i];
		tmp_stock.copy = ft_strndup(av[i]);
		if (!tmp_stock.copy)
			return (NULL);
		strs_stocks[i++] = tmp_stock;
	}
	strs_stocks[ac].str = 0;
	return (strs_stocks);
}
