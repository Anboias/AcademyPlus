/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 23:07:05 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:39:00 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

//de sters
#include "stdio.h"

void	insert_bars(char map[][15], t_p *tetriminos, int size, char yfirst)
{
	int i;
	t_c coord;

	i = 0;
	coord = find_spot(map);
	while (i < size)
	{
		if (yfirst != 'y')
		{
			if (tetriminos[i].pos[3].y == 3
					&& tetriminos[i].visited != 'y')
			{
				insert_element(map, tetriminos[i], coord);
				tetriminos[i].visited = 'y';
				coord = find_spot(map);
			}
		}
		else
		{
			if (tetriminos[i].pos[3].x == 3
					&& tetriminos[i].visited != 'y')
			{
				insert_element(map, tetriminos[i], coord);
				tetriminos[i].visited = 'y';
				coord = find_spot(map);
			}
		}
		i++;
	}
	if (yfirst == 'y') return;
	insert_bars(map, tetriminos, size, 'y');
}

void	find_match(char map[][15], t_p *tetriminos, int size)
{
	int i;
	t_c coord;
	char remains;

	i = 0;
	insert_bars(map, tetriminos, size, 'x');
	while (i <= size)
	{
		coord = find_spot(map);

		if (tetriminos[i].visited != 'y')
		{
			if (try_fit(map, coord.x, coord.y, tetriminos[i]) == 0)
			{
				tetriminos[i].visited = 'y';
				insert_element(map, tetriminos[i], coord);
				i = 0;
			}
			else
			{	
				i++;
				remains = 'y';
			}
		}
		else
			i++;
		if (i == size)
			if (remains == 'y')
			{
				i = 0;
				remains = 'n';
				map[coord.y][coord.x] = 'o';
			}
		else
			break;
	}
}
