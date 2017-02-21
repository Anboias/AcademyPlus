/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:07:58 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/07 13:34:27 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	wrd = ft_countwords(s, c);
	if (!(str = (char **)malloc(sizeof(str) * (wrd + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < wrd && s[i])
	{
		str[j] = ft_word(s, c, &i);
		j++;
	}
	str[j] = NULL;
	return (str);
}
