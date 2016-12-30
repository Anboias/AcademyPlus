/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:31:32 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 11:53:45 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"
#include "libft.h"

void	check_if_valid(t_p *ours, t_p *all, int size_ours, int i, int k, int z)
{
	int valid;

	valid = 0;
	while (++i < size_ours)
	{
		k = -1;
		while (++k < 19)
		{
			z = -1;
			while (++z < 4)
			{
				if (ours[i].pos[z].x == all[k].pos[z].x &&
						ours[i].pos[z].y == all[k].pos[z].y)
					valid++;
				else
					valid = 0;
			}
			if (valid == 4)
				break;
		}
		if (valid != 4)
			error_exit(1);
	}
}
