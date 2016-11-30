/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 16:25:09 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:02:02 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	char	*p;
	size_t	start;

	p = (char *)dest;
	start = n;
	while (*src && n--)
		*dest++ = *src++;
	if (n < start)
		ft_bzero(dest, n);
	return (p);
}
