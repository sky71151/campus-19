/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:37:25 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/26 22:42:44 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int main() {
    int base = 2;
    int exponent = 5;

    int result = ft_recursive_power(2, 3);
    printf("%i ^ %i = %i\n", base, exponent, result);
	result = ft_recursive_power(2, -3);
	printf("%i ^ %i = %i\n", base, exponent, result);
	result = ft_recursive_power(2, 0);
	printf("%i ^ %i = %i\n", base, exponent, result);
	result = ft_recursive_power(-2, 3);
	printf("%i ^ %i = %i\n", base, exponent, result);

    return 0;
}
*/
