/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:19:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/30 01:58:22 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

char	funct(char c) // random function to pass as an argument where necessary
{
	return (c - 32);
}

//test the libft functions by passing functions name as first argument and values to be tested as following arguments
//ex1: ./a.out putchar 	c
//ex2: ./a.out strcpy 	destString srcString
void	main(int argc, char **argv)
{
	char 	*c;
	char 	*f;
	char 	*g;
	char 	*h;
	
	c = argv[1]; // Name of the function to be tested, passed as first argument.
	f = argv[2]; // first value to be tested, passed as second argument.
	g = argv[3]; // third value
	h = argv[4]; // forth value
	if (argc < 3){ 
		printf("Enter the function`s name followed by the parameters it takes.\nTry again.\n");
		return;
	}
	if 		(!ft_strcmp(c, "putchar"))  ft_putchar(*f);
	else if (!ft_strcmp(c, "putnbr"))	ft_putnbr(atoi(f));
	else if (!ft_strcmp(c, "putstr"))	ft_putstr(f);
	else if (!ft_strcmp(c, "putstrln"))	ft_putstr_ln(f);
	else if (!ft_strcmp(c, "putendl"))	ft_putendl(f);
	else if (!ft_strcmp(c, "strlen"))	printf("%d", (int)strlen(f));
	else if (!ft_strcmp(c, "strmap"))	printf("%s", ft_strmap(f, funct));
	else if (!ft_strcmp(c, "strequ"))	printf("%d", ft_strequ(f, g));
	else if (!ft_strcmp(c, "strnequ"))	printf("%d", ft_strnequ(f, g, (size_t)atoi(h)));
	else if (!ft_strcmp(c, "strcmp"))	printf("%d", ft_strcmp(f, g));
	else if (!ft_strcmp(c, "strncmp"))	printf("%d", ft_strncmp(f, g, (size_t)atoi(h)));
	else if (!ft_strcmp(c, "strsub"))	printf("%s", ft_strsub(f, (unsigned int)atoi(g), (size_t)(atoi(h))));
	else if (!ft_strcmp(c, "strcpy"))	printf("%s", ft_strcpy(f, g));
	else if (!ft_strcmp(c, "strncpy"))	printf("%s", ft_strncpy(f, g, (size_t)atoi(h)));
	else if (!ft_strcmp(c, "strjoin"))	printf("%s", ft_strjoin(f, g));
	else if (!ft_strcmp(c, "strtrim"))	printf("%s", ft_strtrim(f));
	else if (!ft_strcmp(c, "strtrim_end"))		printf("%d", ft_strtrim_end(f));
	else if (!ft_strcmp(c, "strtrim_front"))	printf("%d", ft_strtrim_front(f));
	else if (!ft_strcmp(c, "countwords"))		printf("%d", ft_countwords(f, *g));
	else if (!ft_strcmp(c, "strsplit"))	ft_putstrsplit(f, *g);
	else if (!ft_strcmp(c, "numsize"))	printf("%d", ft_numsize(atoi(f)));
	else if (!ft_strcmp(c, "itoa"))		printf("%s", ft_itoa(atoi(f)));
	else if (!ft_strcmp(c, "strdup"))	printf("%s", ft_strdup(f));
	else if (!ft_strcmp(c, "strndup"))	printf("%s", ft_strndup(f, atoi(g)));
	else if (!ft_strcmp(c, "strcat"))	printf("%s", ft_strcat(f, g));
	else if (!ft_strcmp(c, "strncat"))	printf("%s", ft_strncat(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strlcat"))	printf("%d", (int)ft_strlcat(f, g, (size_t)(atoi(h))));
	else if (!ft_strcmp(c, "strchr"))	printf("%s", ft_strchr(f, (int)*g));
	else if (!ft_strcmp(c, "strrchr"))	printf("%s", ft_strrchr(f, (int)*g));
	else if (!ft_strcmp(c, "strstr"))	printf("%s", ft_strstr(f, g));
	else if (!ft_strcmp(c, "strnstr"))	printf("%s", ft_strnstr(f, g, (size_t)atoi(h)));
	else if (!ft_strcmp(c, "atoi"))		printf("%d", ft_atoi(f));
//	else if (!ft_strcmp(c, "isupper"))	
	else
		printf("This function doesn`t exist");

	printf("\n");
}
