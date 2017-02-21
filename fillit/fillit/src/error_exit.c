/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:08:49 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/17 12:59:51 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	error_exit(int n)
{
	if (n == 0)
	{
		ft_putendl("Incorrect no. of arguments.");
		ft_putendl("Must pass the filename "
				"containing the tetriminos as argument.");
	}
	if (n == 1)
		ft_putendl("error");
	else if (n == 2)
		ft_putendl("Open() failed!");
	else if (n == 3)
		ft_putendl("Close() failed!");
	else if (n == 4)
		ft_putendl("Too many tetriminos!");
	exit(1);
}
