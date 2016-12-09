/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:50:21 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 23:04:13 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"
#include <stdlib.h>
#include <stdio.h>

void	test_print(t_p *all, int size)
{
	int j = 0;
	while (j < size)
	{
		for (int yy = 0; yy < 4; yy++)
		{
			for (int xx = 0; xx < 4; xx++)
			{
				if (all[j].pos[0].x == xx && all[j].pos[0].y == yy
				  || all[j].pos[1].x == xx && all[j].pos[1].y == yy
				  || all[j].pos[2].x == xx && all[j].pos[2].y == yy
				  || all[j].pos[3].x == xx && all[j].pos[3].y == yy )
					printf("#");
				else
					printf(".");
			}
			printf("\n");
		}
		j++;
		printf("\n");
	}	
}

void	test_find_spot()
{
	char map[4][4] =   {{'#','#','#', '.'},
						{'#','.','.', '.'},
						{'.','.','.', '.'},
						{'.','.','.', '.'}};

	find_spot(map);

	for (int j = 0; j < 4; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			printf("%c ",map[j][k]);
		}
		printf("\n");
	}
	printf("\n");

}
