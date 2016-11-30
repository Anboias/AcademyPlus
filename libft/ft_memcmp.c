/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 22:49:31 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/31 14:58:31 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		if ((*(t_byte *)s1 != *(t_byte *)s2 ||
				(!*(t_byte *)s1 && !*(t_byte *)s2)))
			return (*(t_byte *)s1 - *(t_byte *)s2);
		s1++;
		s2++;
	}
	return (0);
}
