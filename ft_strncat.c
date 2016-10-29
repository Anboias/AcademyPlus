/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 19:23:11 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/28 21:20:48 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (*dest)
	{
		dest++;
	}
	while (n-- && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}
