/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:22:35 by rperez-t          #+#    #+#             */
/*   Updated: 2023/11/08 22:44:23 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_board.h"
#include "ft_h.h"
#include "ft_filehandeling.h"
#include "ft_filereader.h"

void	print_grid(t_map *field)
{
	int	i;

	i = 0;
	while (i < field->rows)
	{
		write(1, field->board[i], field->size);
		i++;
	}
}

void	fill_struct(board_settings *settings, t_map *field, int count)
{
	field->obstacles = count;
	field->rows = settings->rows;
	field->size = settings->line_lenght;
	field->empty = settings->empty;
	field->obstacle = settings->obstacle;
	field->fill = settings->fill;
	free(settings);
}

int	fill_board(char *f, int fs, board_settings *settings, t_map *field)
{
	int		vertical;
	int		horizontal;
	int		skipparams;
	int		count;
	char	*line;
	char	c;

	vertical = 0;
	horizontal = 0;
	count = 0;
	skipparams = get_line_size(f, fs, 0);
	printf("%i",skipparams);
	while (vertical < settings->rows)
	{
		line = field->board[vertical];
		while (horizontal < settings->line_lenght)
		{
			c = f[horizontal + vertical + skipparams];
			if (c == '\n')
				c = f[horizontal + vertical + skipparams + 1];
			if (!(c == settings->empty || c == settings->obstacle))
				return (1);
			if (c == settings-> obstacle)
				count++;
			line[horizontal] = c;
			horizontal++;
		}
		line[horizontal] = 0;
		skipparams += horizontal;
		horizontal = 0;
		vertical++;
	}
	fill_struct(settings, field, count);
	return (0);
}
