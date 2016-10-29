/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 01:09:30 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/30 02:01:23 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrsplit(char const *str, char c)
{
	char	**p;

	p = ft_strsplit(str, c);
	while (*p)
	{
		ft_putstr(*p++);
		ft_putchar('\n');
	}
}
