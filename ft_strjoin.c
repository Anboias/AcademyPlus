/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 16:57:42 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/27 18:21:54 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*c;

	p = (char *)malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	c = p;
	while (*s1)
	{
		*p++ = *s1++;
	}
	while (*s2)
	{
		*p++ = *s2++;
	}
	return (c);
}
