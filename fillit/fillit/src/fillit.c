/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_execute.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 14:55:42 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 19:27:34 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	void	add_remove_piece(char **map, t_pieces *one, t_c coord, char ch)
{
	char	i;

	i = 0;
	while (i < 4)
	{
		map[coord.y + one->piece.pos[i].y][coord.x + one->piece.pos[i].x] = ch;
		i++;
	}
	if (ch == '.')
		one->visited = 0;
	else
		one->visited = 1;
}

static	int		fillit(char **map, t_pieces *start, t_c coord, char size)
{
	t_c			new_coord;
	t_pieces	temp;

	while (coord.x < size && coord.y < size)
	{
		new_coord = find_next_position(map, start, coord, size);
		if (new_coord.x == -1)
			return (0);
		add_remove_piece(map, start, new_coord, (start->index + 65));
		if (start->next == NULL)
			return (1);
		temp = *start;
		start = start->next;
		if (fillit(map, start, (t_c){0, 0}, size))
			return (1);
		start = &temp;
		add_remove_piece(map, start, new_coord, '.');
		coord.x++;
		if (coord.x == size)
		{
			coord.y++;
			coord.x = 0;
		}
	}
	return (0);
}

static	char	min_square(char no_of_pieces)
{
	char	num;
	char	i;
	char	res;

	res = 0;
	i = 0;
	num = no_of_pieces * 4;
	while (res < num)
	{
		i++;
		res = i * i;
	}
	return (i);
}

int				fillit_execute(t_pieces *start, char no_of_pieces)
{
	char	square_size;
	char	**map;
	t_c		coord;
	int		i;

	coord.x = 0;
	coord.y = 0;
	square_size = min_square(no_of_pieces);
	map = create_map(square_size, 0, 0);
	while (!fillit(map, start, coord, square_size))
	{
		i = 0;
		while (i < square_size)
			free(map[i++]);
		free(map);
		square_size++;
		map = create_map(square_size, 0, 0);
	}
	print_map(map, square_size);
	free(map);
	return (1);
}
