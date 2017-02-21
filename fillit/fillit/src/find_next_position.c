/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 15:36:22 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 19:36:53 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int		try_fit(char **map, t_pieces *one, t_c coord, char size)
{
	char	i;
	char	try_x;
	char	try_y;

	i = 3;
	while (i >= 0)
	{
		try_x = one->piece.pos[i].x + coord.x;
		try_y = one->piece.pos[i].y + coord.y;
		if (try_x >= size || try_x < 0 || try_y >= size || try_y < 0 ||
			map[try_y][try_x] != '.')
			return (0);
		i--;
	}
	return (1);
}

t_c				find_next_position(char **map, t_pieces *one, t_c coord,
		char size)
{
	t_c nothing;

	nothing = (t_c){-1, -1};
	while (coord.y < size)
	{
		if (try_fit(map, one, coord, size) == 1)
			return (coord);
		coord.x++;
		if (coord.x == size)
		{
			coord.x = 0;
			coord.y++;
		}
	}
	return (nothing);
}
