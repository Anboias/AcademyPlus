/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:19:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/26 13:45:10 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "libft.h"

bool	isEqual(char *n, char *m)
{
	if (strcmp(n, m)==0)
		return true;
	return false;
}

int		main(int argc, char **argv)
{
	char *c;
	char *f;
	int temp;
	
	c = argv[1]; // name of the function to be tested
	f = argv[2]; // first value to be tested
	if (argc < 3){
		printf("Enter the function`s name followed by the parameters it takes.\nTry again.\n");
		return (0);
	}
	if (isEqual(c, "ft_putchar"))
	{
		ft_putchar(*f);
		printf(" --- our function\n");
		putchar(*f);
		printf(" --- library function");
	}
	else if (isEqual(c, "ft_putchar_fd"))
	{
		ft_putchar_fd(*f, 1);
	}
	else if (isEqual(c, "ft_putnbr_fd"))
	{
		temp = atoi(f);
		ft_putnbr_fd(temp, 1);
	}
	else if (isEqual(c, "ft_putnbr"))
	{
		temp = atoi(f);
		ft_putnbr(temp);
	}
	else if (isEqual(c, "ft_putstr_fd"))
	{
		ft_putstr_fd(f, 1);
	}
	else if (isEqual(c, "ft_putstr"))
	{
		ft_putstr(f);
	}
	else
		printf("This function doesn`t exist");

	printf("\n");
	return (0);
}
