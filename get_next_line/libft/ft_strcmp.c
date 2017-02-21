/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:37:13 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/07 13:26:16 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned int	diff;

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	diff = (unsigned char)*s1 - (unsigned char)*s2;
	return (diff);
}
