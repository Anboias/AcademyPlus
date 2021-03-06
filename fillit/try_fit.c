/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_fit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:43:53 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:39:08 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

//de sters
#include "stdio.h"

/*
** Checks if given tetrimino fits in empty spot found.
*/

int		try_fit(char map[][15], int x, int y, t_p tetriminos)
{
	int i;
	int j;
	int posX;
	int posY;

	i = 0;
	while (j < 1)
	{
		x -= tetriminos.pos[0].x;
		y -= tetriminos.pos[0].y;
//		if (x < 0)
//			return (1);
		posX = tetriminos.pos[i].x + x;
		posY = tetriminos.pos[i].y + y;
		if (map[posY][posX] == '.' || map[posY][posX] == 'o')
			i++;
		else
			j++;
		if (i == 4)
			return (0);
	}
	return (1);
}
