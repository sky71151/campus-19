/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:48:55 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/30 16:56:43 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc < 1)
		return (0);
	while (argv[0][len])
	{
		write(1, &argv[0][len], 1);
		len++;
	}	
	write(1, "\n", 1);
	return (0);
}
