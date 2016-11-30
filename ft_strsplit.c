/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:07:58 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:14:11 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*p;
	char	**pp;
	char	**cc;

	pp = (char **)malloc(sizeof(char*) * (ft_countwords(s, c) + 1));
	cc = pp;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			p = (char *)malloc(sizeof(char) * (ft_firstwordsize(s, c) + 1));
			*pp++ = p;
			while (*s != c && *s)
				*p++ = *s++;
			*p = '\0';
		}
	}
	*pp = '\0';
	return (cc);
}
