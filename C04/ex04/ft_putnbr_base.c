/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:30:29 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/06 10:50:09 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_in_base(char c, char *base)
{
	int	index;
	
	index = 0;
	while (base[index])
		if (c == base[index++])
			return (1);
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1)
			|| (base[size] >= 9 && base[size] <= 13))
			return ;
		size++;
	}
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, size);
	}
	else
		ft_print(nbr, base, size);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{	
	if (argc == 3)
	{
		int number = atoi(argv[1]);
		ft_putnbr_base(number, argv[2]);
	}
	return (0);
}
