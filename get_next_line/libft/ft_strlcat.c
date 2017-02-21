/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 20:24:14 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/07 13:35:20 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;
	int		j;

	j = 0;
	i = ft_strlen(dest);
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size < dest_size + 1)
		return (src_size + size);
	if (size > dest_size + 1)
	{
		while (i < size - 1)
			*(dest + i++) = *(src + j++);
		*(dest + i) = '\0';
	}
	return (dest_size + src_size);
}
