/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 22:37:27 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 23:11:20 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"

//execute the program
void	execute(char *buff, t_p *tetriments, t_p *all_valid)
{
	int size;

	valid_tetriminos(all_valid);
	put_elements(buff, tetriments);
	size = tetriments[27].pos[0].x;
	resize_all(tetriments, size);
	check_if_valid(tetriments, all_valid, size, -1, 0, 0);
	test_print(tetriments, size);
}

