/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 15:31:02 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 19:04:47 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**create_map(int square_size, int i, int j)
{
	char	**map;
	char	**begin;
	char	*row;
	char	*start_of_row;

	map = (char **)malloc(sizeof(char *) * square_size + 1);
	begin = map;
	while (i < square_size)
	{
		row = (char *)malloc(sizeof(char *) * square_size + 1);
		start_of_row = row;
		while (j < square_size)
		{
			*row = '.';
			row++;
			j++;
		}
		*row = '\0';
		*map = start_of_row;
		map++;
		i++;
		j = 0;
	}
	return (begin);
}
