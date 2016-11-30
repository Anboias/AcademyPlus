/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 20:24:14 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:27:29 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t left;

	left = size;
	while (*dest && left > 0 && left--)
		dest++;
	while (*src && left > 1 && left--)
		*dest++ = *src++;
	if (left == 1)
		*dest = '\0';
	return (size - left);
}
