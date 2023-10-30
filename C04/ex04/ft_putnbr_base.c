/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:22:39 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/27 13:39:18 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_conversion(int nb, char *str, char div)
{
	int		index1;
	int		mod;

	index1 = 0;
	while (nb)
	{
		mod = nb % div;
		if (mod > 9)
			str[index1++] = (mod -10) + 65;
		else
			str[index1++] = (mod + 48);
		nb /= div;
	}
	return (index1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	checkbase(char *base)
{
	if (!ft_strcmp("0123456789", base))
		return (10);
	else if (!ft_strcmp("01", base))
		return (2);
	else if (!ft_strcmp("0123456789ABCDEF", base))
		return (16);
	else if (!ft_strcmp("poneyvif", base))
		return (8);
	else
		return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	char	div;
	char	str[50];
	int		index;

	div = checkbase(base);
	if (!div)
		return ;
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	index = ft_conversion(nb, str, div);
	while (index--)
		write(1, &str[index], 1);
}
/*
#include <stdio.h>

int     main(void)
{
        int     num;

        num = -6789;
        ft_putnbr_base(num, "0123456789ABCDEF");
        printf("\n");
        num = 32000;
        ft_putnbr_base(num, "01");
        return (0);
}*/
