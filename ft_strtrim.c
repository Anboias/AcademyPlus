/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 17:33:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/27 18:23:01 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	size_t	len;

	start = ft_strtrim_front(s);
	end = ft_strtrim_end(s);
	len = (size_t)end - (size_t)start + 1;
	return (ft_strsub(s, (unsigned int)start, len));
}
