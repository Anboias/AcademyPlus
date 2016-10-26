/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:19:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/27 00:29:43 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

bool	isEqual(char *n, char *m)
{
	if (strcmp(n, m)==0)
		return true;
	return false;
}

char	funct(char c)		// function to pass as argument (toupper)
{
	return (c - 32);
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
	if (isEqual(c, "putchar"))
	{
		ft_putchar(*f);
	}
	else if (isEqual(c, "putnbr"))
	{
		temp = atoi(f);
		ft_putnbr(temp);
	}
	else if (isEqual(c, "putstr"))
	{
		ft_putstr(f);
	}
	else if (isEqual(c, "memalloc"))
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
	else if (isEqual(c, "strlen"))
	{
		printf("%d", (int)ft_strlen(f));
	}
	else if (isEqual(c, "putendl"))
	{
		ft_putendl(f);
	}
	else if (isEqual(c, "strmap"))
	{
		char *p;
		
		p = malloc(ft_strlen(f)+1);
		p = ft_strmap(f, funct);
		printf("%s", p);
	}
	else if (isEqual(c, "strequ"))
	{
		printf("%d", ft_strequ(f, argv[3]));
	}
	else if (isEqual(c, "strnequ"))
	{
		temp = atoi(argv[4]);
		printf("%d", ft_strnequ(f, argv[3], (size_t)temp));
	}
	else if (isEqual(c, "strcmp"))
	{
		printf("%d", ft_strcmp(f, argv[3]));
		printf("\n%d", strcmp(f, argv[3]));
	}
	else if (isEqual(c, "strncmp"))
	{
		temp = atoi(argv[4]);
		printf("%d", ft_strncmp(f, argv[3], (size_t)temp));
		printf("\n%d", strncmp(f, argv[3], (size_t)temp));
	}
	else
		printf("This function doesn`t exist");

	printf("\n");
	return (0);
}
