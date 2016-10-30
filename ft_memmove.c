/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 20:42:07 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/30 22:48:44 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*p;

	if (!dest || !src)
		return (dest);
	p = dest;
	if (dest < src)
	{
		while ((size_t)(dest - p) < n)
			*(t_byte *)dest++ = *(t_byte *)src++;
	}
	else
	{
		while (n-- > 0)
			((t_byte *)dest)[n] = ((t_byte *)src)[n];
	}
	return (p);
}
