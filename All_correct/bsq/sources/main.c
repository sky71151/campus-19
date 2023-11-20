/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:47:31 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/09 09:15:43 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include "ft_filehandeling.h"
#include "search_and_fill.h"
#include "ft_filereader.h"
#include "ft_valid.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

static t_board	*g_settings;

void	init(void)
{
	g_settings = malloc(sizeof(t_board));
}

void	init_board(t_board *settings)
{	
	int	i;
	int	size;

	i = 0;
	settings->board = malloc(sizeof(char *) * (settings->rows + 1));
	size = (settings->line_lenght + 1);
	while (i < settings->rows)
	{
		settings->board[i] = malloc (sizeof(char) * size);
		i++;
	}
	settings->board[i] = 0;
}

void	free_board(char *file)
{
	int	i;

	i = 0;
	while (i <= g_settings->rows)
	{
		free(g_settings->board[i]);
		i++;
	}
	free(g_settings->board);
	free(g_settings);
	free(file);
}

int	main(int argc, char **argv)
{
	int				index;
	char			*file;
	int				fs;

	index = 1;
	if (argc < 2)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	while (index < argc)
	{
		file = ft_return_file(argv[index]);
		fs = file_size(argv[index]);
		init();
		if (check_map_valid(argv[index], g_settings) == 0)
		{
			write(2, "map error\n", 10);
			free(file);
			free(g_settings);
		}
		else
		{
			init_board(g_settings);
			if (!search_and_fill(file, fs, g_settings))
				write(2, "map error\n", 10);
			free_board(file);
		}
		index++;
	}
	return (0);
}
