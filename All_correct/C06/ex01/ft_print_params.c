/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:50:50 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 07:09:54 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{	
	int	counter;
	int	len;

	counter = 1;
	len = 0;
	while (counter < argc)
	{	
		len = 0;
		while (argv[counter][len])
		{
			write(1, &argv[counter][len], 1);
			len++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
