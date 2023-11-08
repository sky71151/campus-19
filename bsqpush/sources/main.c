/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:47:31 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/08 15:47:11 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include "ft_filehandeling.h"
#include "ft_filereader.h"
#include "ft_board.h"
#include "ft_valid.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

static board_settings *settings;
static t_map *field;

void init()
{
	settings = malloc(sizeof(board_settings));
}

void init_board()
{	
	int i;

	i =0;
	field = malloc(sizeof(t_map));
	field->board = malloc(sizeof(char *) * (settings->rows + 1));
	while(i < settings->rows)
	{
		field->board[i] = malloc (sizeof(char) * (settings->line_lenght + 1));
		i++;
	}
	field->board[i] = 0; 
}

void free_board()
{
	int i;
	
	i = 0;
	while(i <= settings->rows)
	{
		free(field->board[i]);
		i++;
	}
	free(field->board);
	free(field);
}

int	main(int argc, char **argv)
{
	int				index;
	char			*file;
	//char			*line;
	
	init();	

	index = 1;
	if (argc < 2)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	file = ft_return_file(argv[1]);
	int fs = file_size(argv[1]);
	printf("%s\n", file);
	//line = readline(file,1);
	//printf("%i\n",fs);
	//int ls = get_line_size(file,fs,0);
	//printf("%i\n",ls);
	while (index < argc)
	{
		if (!check_map_valid(argv[index], settings))
		{
			write(2, "map error\n", 10);
			return (0);	
		}
		index++;
	}
	init_board();
	fill_board(file,fs,settings,field);
	printf("\n\n");
	for(int i = 0;i<settings->rows;i++)
		printf("%s\n", field->board[i]);
	free(file);
	free_board();
	free(settings);
	return (0);
}
