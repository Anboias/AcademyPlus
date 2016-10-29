/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:38:06 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/30 00:26:36 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int	sign;
	int num;

	num = 0;
	sign = 1;
	while (*nptr > 9 && *nptr < 13 || *nptr == ' ')
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	while (*nptr == '0')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
		num = num * 10 + (*nptr++ - '0');
	return (num * sign);
}
