/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pieces_from_buff.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:59:55 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 18:55:01 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	void		check_if_valid(t_pieces **start, int k, int z, int valid)
{
	t_p			all_valid[19];

	valid_tetriminos(all_valid);
	while (*start)
	{
		k = -1;
		while (++k < 19)
		{
			valid = 0;
			z = -1;
			while (++z < 4)
			{
				if ((*start)->piece.pos[z].x == all_valid[k].pos[z].x &&
						(*start)->piece.pos[z].y == all_valid[k].pos[z].y)
					valid++;
			}
			if (valid == 4)
				break ;
		}
		if (valid != 4)
			error_exit(1);
		start = &(*start)->next;
	}
}

static	void		resize_all(t_pieces **start, int i, char min_x, char min_y)
{
	t_pieces *each;
	t_pieces *temp;

	each = *start;
	while (each)
	{
		i = -1;
		min_x = each->piece.pos[0].x;
		min_y = each->piece.pos[0].y;
		if (min_x > 5 || min_y > 5 || min_x < 0 || min_y < 0)
		{
			temp->next = NULL;
			return ;
		}
		while (++i < 4)
		{
			each->piece.pos[i].x -= min_x;
			each->piece.pos[i].y -= min_y;
		}
		each->visited = 0;
		i = 0;
		temp = each;
		each = each->next;
	}
}

static	void		put_element(t_pieces ***each, char pos,
		unsigned char counter, char indx)
{
	(**each)->piece.pos[pos].x = (((counter - indx) % 5) % 4);
	(**each)->piece.pos[pos].y = (((counter - indx) / 5) % 4);
}

static	t_pieces	*get_pieces(char *buff, t_pieces **start, t_pieces **temp,
		t_pieces **each)
{
	unsigned char	counter;
	char			indx;
	char			pos;

	counter = 0;
	indx = 0;
	pos = 0;
	while (*buff)
	{
		if (*buff == '#')
			put_element(&each, pos++, counter, indx);
		if (++counter % 21 == 0)
		{
			(*temp) = (t_pieces *)malloc(sizeof(t_pieces));
			(*each)->index = indx++;
			(*each)->next = *temp;
			(*temp)->next = NULL;
			*each = *temp;
			pos = 0;
		}
		buff++;
	}
	(*each)->index = indx;
	return (*start);
}

t_pieces			*get_pieces_from_buff(char *buff)
{
	t_pieces	*start;
	t_pieces	*temp;
	t_pieces	*each;

	each = (t_pieces *)malloc(sizeof(t_pieces));
	start = each;
	start = get_pieces(buff, &start, &temp, &each);
	resize_all(&start, 0, 0, 0);
	check_if_valid(&start, 0, 0, 0);
	return (start);
}
