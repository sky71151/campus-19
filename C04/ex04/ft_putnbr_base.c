/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:22:39 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/02 16:23:41 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_erreur(char *base, int *erreur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[i] && *erreur == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*erreur = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*erreur = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		erreur;
	long	nb;

	lbase = 0;
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
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
        ft_putnbr_base(num, "1234");
        return (0);
}*/
