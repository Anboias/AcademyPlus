/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:59:50 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/30 17:52:23 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (start--)
		{
			s++;
		}
		ft_strncpy(p, s, len);
		p[len] = '\0';
	}
	return (p);
}
