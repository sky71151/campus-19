/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:44:11 by rperez-t          #+#    #+#             */
/*   Updated: 2023/10/26 23:25:57 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main ()
{
	int res = ft_fibonacci(0);
	printf("%i\n",res);
res = ft_fibonacci(1);
printf("%i\n",res);
res = ft_fibonacci(2);
printf("%i\n",res);
res = ft_fibonacci(3);
printf("%i\n",res);
res = ft_fibonacci(6);
printf("%i\n",res);

return 0;
}
*/
