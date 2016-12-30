/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:12:38 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 11:50:34 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

/*
** Takes address of tetriments array along with number of available elements
** as parameter, and move each tetriment to upper-left corner.
** (i. e) pos[0].x: 2 and pos[1].x: 3 get values 0 and 1 respectively
*/

void	resize_all(t_p *ttrm, int size)
{
	int	i;
	int minX;
	int minY;

	while (--size >= 0)
	{
		i = -1;
		minX = 4;
		minY = 4;
		while (++i < 4)
		{
			if (ttrm[size].pos[i].x < minX)
				minX = ttrm[size].pos[i].x;
			if (ttrm[size].pos[i].y < minY)
				minY = ttrm[size].pos[i].y;
		}
		i = -1;
		while (++i < 4)
		{
			ttrm[size].pos[i].x -= minX;
			ttrm[size].pos[i].y -= minY;
		}
	}
}
