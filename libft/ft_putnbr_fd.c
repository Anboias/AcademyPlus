/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 01:18:32 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/31 15:14:51 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int rev;

	rev = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	while (n > 0)
	{
		rev = (rev * 10) + n % 10;
		n /= 10;
	}
	while (rev > 0)
	{
		ft_putchar_fd((rev % 10) + '0', fd);
		rev /= 10;
	}
}
