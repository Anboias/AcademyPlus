/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:19:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/26 16:30:06 by biasinov         ###   ########.fr       */
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
	
	c = argv[1]; // Name of the function to be tested, passed as first argument.
	f = argv[2]; // First value to be tested, passed as second argument.
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
	else if (isEqual(c, "ft_putnbr"))
	{
		temp = atoi(f);
		ft_putnbr(temp);
	}
	else if (isEqual(c, "ft_putstr"))
	{
		ft_putstr(f);
	}
	else if (isEqual(c, "ft_memalloc"))
	{
		temp = atoi(f);
		one_byte *memall = ft_memalloc(temp);
		int i = 0;
		while (*memall==0){
			printf("%d\n", ++i);
			*memall++;
		}
		return (0);
	}
	else if (isEqual(c, "ft_strlen"))
	{
		printf("%d", (int)ft_strlen(f));
		printf(" --- our function\n");
		printf("%d", (int)strlen(f));
		printf(" --- library function");
	}
	else if (isEqual(c, "ft_putendl"))
	{
		ft_putendl_fd(f);
	}
	else
		printf("This function doesn`t exist");

	printf("\n");
	return (0);
}
