/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_fit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:43:53 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 11:04:34 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

/*
** Checks if given tetrimino fits in empty spot found.
*/

int		try_fit(char map[][4], int x, int y, t_p *tetriments)
{
	int i;
	int posX;
	int posY;

	i = 0;
	while (i < 4)
	{
		x -= tetriments[0].pos[0].x;
		y -= tetriments[0].pos[0].y;
		if (x < 0)
			return (1);
		posX = tetriments[0].pos[i].x + x;
		posY = tetriments[0].pos[i].y + y;
		if (map[posY][posX] == '.')
			i++;
		else
			return (1);
	}
	return (0);
}
