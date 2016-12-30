/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_spot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:47:31 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:38:55 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"
#include "libft.h"

/*
** Search for the next free spot
** (needs replacement with recursive)
** n    = how many spots you need;
*/

void	switcher(int *sw, int *y, int *i, int *x, int *base)
{
	if (*sw == 2)
	{
		(*i)++;
		*sw = 0;
	}
	else if (*sw == 0)
	{
		(*sw)++;
		*y = *i;
		*x = *base;
	}
	else if (*sw == 1)
	{
		(*sw)++;
		*y = *base;
		*x = *i;
	}
}

t_c		find_the_spot(char map[][15], int n, int *sw, 
							int *base, int *i, int *x, int *y)
{
	while (n != 0)
	{
		if (map[*y][*x] == '.')
		{
//			map[*y][*x] = n + '0';
			return	(t_c){*x, *y};
			*x = 0;
			*y = 0;
			*sw = 0;
			*i = 0;
			*base = 0;
			n--;
		}
		if (*x == *y)
		{
			(*base)++;
			*i = 0;
			*sw = 0;
		}
		switcher(sw, y, i, x, base);
	}
	return (t_c){99,99};
}

t_c		find_spot(char map[][15])
{
	int switch_var;
	int base;
	int increment;
	int x;
	int y;

	switch_var = 0;
	base = 0;
	increment = 0;
	x = 0;
	y = 0;
	return find_the_spot(map, 9, &switch_var, &base, &increment, &x, &y);
}
