/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 22:01:24 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 22:32:25 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_exit(int n)
{
	if (n == 0)
	{
		ft_putstr("Incorrect no. of arguments.\nMust pass the filename" 
		"containing the tetriments as argument.\n");
	}
	if (n == 1)
		ft_putstr("Tetriments are not valid!\n");
	else if (n == 2)
		ft_putstr("Open() failed!\n");
	else if (n == 3)
		ft_putstr("Close() failed!\n");
	else if (n == 4)
		ft_putstr("Too many tetriminos!\n");
	exit (1);
}
