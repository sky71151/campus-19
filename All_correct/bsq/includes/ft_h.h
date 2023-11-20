/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:54:47 by rperez-t          #+#    #+#             */
/*   Updated: 2023/11/09 08:52:06 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H_H
# define FT_H_H

typedef struct setup
{
	int		rows;
	int		line_lenght;
	char	empty;
	char	obstacle;
	char	fill;
	char	**board;
}	t_board;
#endif
