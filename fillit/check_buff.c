/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_buff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:16:19 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 22:13:53 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillheader.h"
#include "libft.h"

/*
** Checks the string 'buff' for having the correct format.
** Each tetrimino...
** 	- must have 4 rows of 4 characters and an end of line each;
** 	- is separated by next with a new line;
**  - contains 4 '#" and 12 '.';
*/

void	check_buff(char *buff)
{
	int	nline;
	int dot;
	int diez;

	nline = 0;
	dot = 0;
	diez = 0;
	while (*buff)
	{
		if (*buff == '.')
			dot++;
		else if (*buff == '#')
			diez++;
		else if (*buff == '\n')
			nline++;
		else
			error_exit(1);
		buff++;
	}
	if (dot % 12 != 0 || diez % 4 != 0 || (nline + 1) % 5 != 0)
		error_exit(1);
}
