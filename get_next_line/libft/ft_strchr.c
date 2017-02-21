/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 20:45:35 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/06 17:22:00 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	*p;

	i = ft_strlen(s);
	if (c == '\0')
	{
		p = &s[i];
		return ((char *)p);
	}
	while (*s != c && *s)
		s++;
	if (*s == '\0')
		return (NULL);
	return ((char *)s);
}
