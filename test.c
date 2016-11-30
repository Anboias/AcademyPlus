/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:19:10 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 10:44:11 by biasinov         ###   ########.fr       */
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
	printf("Your function: ");
	if 		(!ft_strcmp(c, "putchar"))  ft_putchar(*f);
	else if (!ft_strcmp(c, "putnbr"))	ft_putnbr(atoi(f));
	else if (!ft_strcmp(c, "putstr"))	ft_putstr(f);
	else if (!ft_strcmp(c, "putendl"))	ft_putendl(f);
	else if (!ft_strcmp(c, "strlen"))	printf("%d", (int)strlen(f));
	else if (!ft_strcmp(c, "strmap"))	printf("%s", ft_strmap(f, funct));
	else if (!ft_strcmp(c, "strequ"))	printf("%d", ft_strequ(f, g));
	else if (!ft_strcmp(c, "strnequ"))	printf("%d", ft_strnequ(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strcmp"))	printf("%d", ft_strcmp(f, g));
	else if (!ft_strcmp(c, "strncmp"))	printf("%d", ft_strncmp(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strsub"))	printf("%s", ft_strsub(f, atoi(g), (atoi(h))));
	else if (!ft_strcmp(c, "strcpy"))	printf("%s", ft_strcpy(f, g));
	else if (!ft_strcmp(c, "strncpy"))	printf("%s", ft_strncpy(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strjoin"))	printf("%s", ft_strjoin(f, g));
	else if (!ft_strcmp(c, "strtrim"))	printf("%s", ft_strtrim(f));
	else if (!ft_strcmp(c, "strtrim_end"))		printf("%d", ft_strtrim_end(f));
	else if (!ft_strcmp(c, "strtrim_front"))	printf("%d", ft_strtrim_front(f));
	else if (!ft_strcmp(c, "countwords"))		printf("%d", ft_countwords(f, *g));
	else if (!ft_strcmp(c, "strsplit"))	ft_putstrsplit(f, *g);
	else if (!ft_strcmp(c, "numsize"))	printf("%d", ft_numsize(atoi(f)));
	else if (!ft_strcmp(c, "itoa"))		printf("%s", ft_itoa(atoi(f)));
	else if (!ft_strcmp(c, "abs"))		printf("%d", ft_abs(atoi(f)));
	else if (!ft_strcmp(c, "strdup"))	printf("%s", ft_strdup(f));
	else if (!ft_strcmp(c, "strndup"))	printf("%s", ft_strndup(f, atoi(g)));
	else if (!ft_strcmp(c, "strcat"))	printf("%s", ft_strcat(f, g));
	else if (!ft_strcmp(c, "strncat"))	printf("%s", ft_strncat(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strlcat"))	printf("%d", (int)ft_strlcat(f, g, (atoi(h))));
	else if (!ft_strcmp(c, "strchr"))	printf("%s", ft_strchr(f, *g));
	else if (!ft_strcmp(c, "strrchr"))	printf("%s", ft_strrchr(f, *g));
	else if (!ft_strcmp(c, "strstr"))	printf("%s", ft_strstr(f, g));
	else if (!ft_strcmp(c, "strnstr"))	printf("%s", ft_strnstr(f, g, atoi(h)));
	else if (!ft_strcmp(c, "isalpha"))  printf("%d", ft_isalpha(*f));
	else if (!ft_strcmp(c, "isdigit"))  printf("%d", ft_isdigit(*f));
	else if (!ft_strcmp(c, "isalnum"))  printf("%d", ft_isalnum(*f));
	else if (!ft_strcmp(c, "isascii"))  printf("%d", ft_isascii(*f));
	else if (!ft_strcmp(c, "iscntrl"))  printf("%d", ft_iscntrl(*f));
	else if (!ft_strcmp(c, "isprint"))  printf("%d", ft_isprint(*f));
	else if (!ft_strcmp(c, "toupper"))  printf("%d", ft_toupper(*f));
	else if (!ft_strcmp(c, "tolower"))  printf("%d", ft_tolower(*f));
	else if (!ft_strcmp(c, "atoi"))		printf("%d", ft_atoi(f));
	else if (!ft_strcmp(c, "memalloc"))	printf("%s", (char *)ft_memalloc(atoi(f)));
	else if (!ft_strcmp(c, "memset"))	printf("%s", (char *)ft_memset(f, *g, atoi(h)));
	else if (!ft_strcmp(c, "memcpy"))	printf("%s", (char *)ft_memcpy(f, g, atoi(h)));
	else if (!ft_strcmp(c, "memmove"))	printf("%s", (char *)ft_memmove(f, g, atoi(h)));
	else if (!ft_strcmp(c, "memchr"))	printf("%s", (char *)ft_memchr(f, *g, atoi(h)));
	else if (!ft_strcmp(c, "memcmp"))	printf("%d", ft_memcmp(f, g, atoi(h)));
	else
		printf("This function doesn`t exist");
	printf("\n");

//compare with built-in functions
	if		(!ft_strcmp(c, "isalpha"))  printf("Built-in fnct: %d\n", isalpha(*f));
	else if (!ft_strcmp(c, "isdigit"))  printf("Built-in fnct: %d\n", isdigit(*f));
	else if (!ft_strcmp(c, "isalnum"))  printf("Built-in fnct: %d\n", isalnum(*f));
	else if (!ft_strcmp(c, "isascii"))  printf("Built-in fnct: %d\n", isascii(*f));
	else if (!ft_strcmp(c, "iscntrl"))  printf("Built-in fnct: %d\n", iscntrl(*f));
	else if (!ft_strcmp(c, "isprint"))  printf("Built-in fnct: %d\n", isprint(*f));
	else if (!ft_strcmp(c, "toupper"))  printf("Built-in fnct: %d\n", toupper(*f));
	else if (!ft_strcmp(c, "tolower"))  printf("Built-in fnct: %d\n", tolower(*f));
	else if (!ft_strcmp(c, "memset"))	printf("Built-in fnct: %s\n", (char *)memset(f, *g, atoi(h)));
	else if (!ft_strcmp(c, "memcpy"))	printf("Built-in fnct: %s (can be overlaped only manually by replacing g with f+ as parameter) \n", (char *)ft_memcpy(f, g, atoi(h)));
	else if (!ft_strcmp(c, "memmove"))	printf("Built-in fnct: %s (can be overlaped only manually by replacing g with f+ as parameter)\n", (char *)memmove(f, g, atoi(h)));
	else if (!ft_strcmp(c, "memchr"))	printf("Built-in fnct: %s\n", (char *)memchr(f, *g, atoi(h)));
	else if (!ft_strcmp(c, "memcmp"))	printf("Built-in fnct: %d\n", memcmp(f, g, atoi(h)));
	else if (!ft_strcmp(c, "atoi"))		printf("Built-in fnct: %d\n", atoi(f));
	else if (!ft_strcmp(c, "strcat"))	printf("Built-in fnct: %s\n", strcat(f, g));
	else if (!ft_strcmp(c, "strncat"))	printf("Built-in fnct: %s\n", strncat(f, g, atoi(h)));
	else if (!ft_strcmp(c, "strcmp"))	printf("Built-in fnct: %d\n", strcmp(f, g));
	else if (!ft_strcmp(c, "strcpy"))	printf("Built-in fnct: %s\n", strcpy(f, g));
	else if (!ft_strcmp(c, "strdup"))	printf("Built-in fnct: %s\n", strdup(f));
}
