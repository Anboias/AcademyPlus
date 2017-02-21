/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:22:12 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/06 21:12:34 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		nsize;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	nsize = ft_numsize(n) + neg;
	if ((p = (char *)malloc(sizeof(char) * (nsize + 1))) == NULL)
		return (NULL);
	p[nsize] = '\0';
	while (nsize--)
	{
		p[nsize] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		p[0] = '-';
	return (p);
}
