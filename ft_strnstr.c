/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:38:04 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/29 19:31:03 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (len > 0)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			{
				return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}
