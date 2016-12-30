/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_elements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:33:03 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 12:58:17 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

/*
** Reads each tetriment from String 'buff' - where the input file`s content is
** kept -, put it in a t_p struct and add it to tetriments[].
** Input file can contain a maximum of 26 tetriminos, and I`ve used the 27`th
** element to keep, at pos[0].x, the size of valid tetriminos.
*/

void	put_elem(char *buff, t_p tetriments[27], int w, int h, int i, int elem)
{
	while (buff)
	{
		if (*buff == '#')
		{
			tetriments[i].pos[elem % 4].x = (w - i) % 5;
			tetriments[i].pos[elem % 4].y = (h - i) % 4;
			elem++;
			if (elem % 4 == 0 && elem != 0)
			{
				tetriments[i].index = i + 65;
				i++;
			}
		}
		if (i == 27)
			error_exit(4);
		if (*buff == '\0')
			break;
		if (*buff == '\n')
			h++;
		w++;
		buff++;
	}
	tetriments[27].pos[0].x = i;
}

void	put_elements(char *buff, t_p tetriments[27])
{
	put_elem(buff, tetriments, 0, 0, 0, 0);
}
