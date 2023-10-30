/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:56:01 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/26 21:32:28 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main ()
{
     int res = ft_recursive_factorial(5);
     printf("test output; %i\n",res);
     res = ft_recursive_factorial(0);
     printf("test output; %i\n",res);
     res = ft_recursive_factorial(-15);
     printf("test output; %i\n",res);
	 return 0;
}
*/
