/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 20:28:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:29:04 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char				*p;
	unsigned	int		i;

	p = ft_stralloc(s);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(s[i]);
		p[i] = '\0';
	}
	return (p);
}
