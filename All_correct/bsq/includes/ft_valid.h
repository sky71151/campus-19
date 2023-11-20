/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:49:24 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/11/09 08:51:30 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALID_H
# define FT_VALID_H

# include "ft_h.h"
# include "ft_filehandeling.h"
//#include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int	check_map_valid(char *filename, t_board *settings);
int	get_rows(char *line, int size);
int	check_first_line(char *file, t_board *settings);
int	get_line_lenght(char *file, int line_number);
int	check_all_lines_lenght(char *file, t_board *settings);
int	check_printable(t_board *settings);
#endif
