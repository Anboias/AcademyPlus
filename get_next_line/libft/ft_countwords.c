/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:31:43 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/06 21:07:38 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countwords(char const *s, char c)
{
	int w;
	int i;

	w = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		if (i > 0)
			w++;
	}
	return (w);
}