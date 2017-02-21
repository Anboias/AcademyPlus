/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 20:42:07 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/06 16:26:23 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;
	size_t	i;

	i = -1;
	source = (char *)src;
	dst = (char *)dest;
	if (source < dst)
		while ((int)(--n) >= 0)
			*(dst + n) = *(source + n);
	else
		while (++i < n)
			*(dst + i) = *(source + i);
	return (dst);
}
