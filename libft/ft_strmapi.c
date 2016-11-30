/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:04:37 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:29:23 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	p = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(i, s[i]);
		p[i] = '\0';
	}
	return (p);
}
