/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 12:16:27 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:39:03 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

void	insert_element(char map[][15], t_p tetriminos, t_c coord)
{
	int i;
	int posX;
	int posY;

	i = 0;
	while (i < 4)
	{
		posX = coord.x + tetriminos.pos[i].x;
		posY = coord.y + tetriminos.pos[i].y;
		map[posY][posX] = tetriminos.index;
		i++;
	}
}
