/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_fill.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 00:04:20 by rperez-t          #+#    #+#             */
/*   Updated: 2023/11/09 09:04:48 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SEARCH_AND_FILL_H
# define SEARCH_AND_FILL_H

# include "ft_h.h"
# include "ft_filehandeling.h"
//#include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int		fill_board(char *file, int filesize, t_board *settings);
int		can_place_square(int x, int y, int size, t_board *board);
int		find_biggest_square(t_board *board);
void	print_grid(t_board *board);
int		search_and_fill(char *file, int filesize, t_board *settings);
#endif
