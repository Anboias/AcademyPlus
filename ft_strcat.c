/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 19:16:48 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:22:54 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return ((char *)dest);
}
