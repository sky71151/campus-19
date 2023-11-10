/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:51:51 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/31 07:12:36 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		counter;
	int		len;

	len = 0;
	if (argc > 1)
	{
		counter = argc - 1;
		while (counter >= 1)
		{
			len = 0;
			while (argv[counter][len])
			{
				write(1, &argv[counter][len], 1);
				len++;
			}
			write(1, "\n", 1);
			counter--;
		}
	}
	return (0);
}
