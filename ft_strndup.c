/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 19:04:17 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/28 19:15:56 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (n + 1));
	if (p)
	{
		ft_strncpy(p, s, n);
	}
	return (p);
}
