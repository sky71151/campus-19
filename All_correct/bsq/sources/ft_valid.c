/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:47:12 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/09 10:03:58 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"
#include "ft_filehandeling.h"
#include "ft_filereader.h"
#include "ft_valid.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int	check_map_valid(char *filename, t_board *settings)
{
	char	*file;

	file = ft_return_file(filename);
	if (!file)
	{
		free(file);
		return (0);
	}
	if (check_first_line(file, settings) == 0)
	{
		free(file);
		return (0);
	}
	if (check_printable(settings) == 0)
	{	
		free(file);
		return (0);
	}
	if (check_all_lines_lenght (file, settings) == 0)
	{	
		free(file);
		return (0);
	}
	free(file);
	return (1);
}

int	get_rows(char *line, int size)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (i < (size - 3))
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			rows *= 10;
			rows += line[i++] - 48 ;
		}
		else
			return (-1);
	}
	return (rows);
}

int	check_first_line(char *file, t_board *settings)
{
	int		index;
	char	*line;
	t_board	set;

	index = 0;
	line = readline(file, 1);
	while (line[index] != '\0')
		index++;
	if (index >= 4)
	{
		set.rows = get_rows(line, index);
		set.empty = line[index - 3];
		set.obstacle = line[index - 2];
		set.fill = line[index -1];
		set.line_lenght = get_line_lenght(file, 2);
	}
	else
	{
		free(line);
		return (0);
	}
	free(line);
	*settings = set;
	return (1);
}

int	get_line_lenght(char *file, int line_number)
{
	int		line_lenght;
	char	*line;

	line_lenght = 0;
	line = readline(file, line_number);
	while (line[line_lenght] != '\0' )
		line_lenght++;
	free(line);
	return (line_lenght);
}

int	check_all_lines_lenght(char *file, t_board *settings)
{
	t_board	setup;
	int		index_rows;
	int		line_lenght;
	char	*line;

	line_lenght = 0;
	index_rows = 2;
	setup = *settings;
	while (index_rows < (setup.rows + 1))
	{	
		line_lenght = 0;
		line = readline(file, index_rows++);
		while (line[line_lenght] != '\0' )
		{
			if (line[line_lenght] != settings->empty
				&& line[line_lenght] != settings->obstacle)
			{
				free(line);
				return (0);
			}
			line_lenght++;
		}
		if (line_lenght != settings->line_lenght)
		{
			free(line);
			return (0);
		}
		free(line);
	}	
	return (1);
}
