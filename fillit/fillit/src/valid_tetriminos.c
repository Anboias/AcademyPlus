/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 15:05:04 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/17 13:00:18 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	valid_tetriminos(t_p *all)
{
	all[0] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){0, 2}, (t_c){1, 2}}};
	all[1] = (t_p){{(t_c){0, 0}, (t_c){-2, 1}, (t_c){-1, 1}, (t_c){0, 1}}};
	all[2] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){1, 1}, (t_c){1, 2}}};
	all[3] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){2, 0}, (t_c){0, 1}}};
	all[4] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){-1, 2}, (t_c){0, 2}}};
	all[5] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){2, 0}, (t_c){2, 1}}};
	all[6] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){0, 1}, (t_c){0, 2}}};
	all[7] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){1, 1}, (t_c){2, 1}}};
	all[8] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){1, 1}, (t_c){1, 2}}};
	all[9] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){-1, 1}, (t_c){0, 1}}};
	all[10] = (t_p){{(t_c){0, 0}, (t_c){-1, 1}, (t_c){0, 1}, (t_c){-1, 2}}};
	all[11] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){1, 1}, (t_c){2, 1}}};
	all[12] = (t_p){{(t_c){0, 0}, (t_c){-1, 1}, (t_c){0, 1}, (t_c){1, 1}}};
	all[13] = (t_p){{(t_c){0, 0}, (t_c){-1, 1}, (t_c){0, 1}, (t_c){0, 2}}};
	all[14] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){2, 0}, (t_c){1, 1}}};
	all[15] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){1, 1}, (t_c){0, 2}}};
	all[16] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){2, 0}, (t_c){3, 0}}};
	all[17] = (t_p){{(t_c){0, 0}, (t_c){0, 1}, (t_c){0, 2}, (t_c){0, 3}}};
	all[18] = (t_p){{(t_c){0, 0}, (t_c){1, 0}, (t_c){0, 1}, (t_c){1, 1}}};
}