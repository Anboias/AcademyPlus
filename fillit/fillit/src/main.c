/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:06:54 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 21:18:42 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	void	check_buff_length(char *buff)
{
	int		i;

	while (*buff)
	{
		i++;
		buff++;
	}
	if (i < 20)
		error_exit(1);
}

static	void	check_buff(char *buff)
{
	int	nline;
	int dot;
	int diez;

	nline = 0;
	dot = 0;
	diez = 0;
	if (buff == NULL)
		error_exit(1);
	while (*buff)
	{
		if (*buff == '.')
			dot++;
		else if (*buff == '#')
			diez++;
		else if (*buff == '\n')
			nline++;
		else
			error_exit(1);
		buff++;
		if (nline == 4 && (diez % 4 != 0 || dot % 12 != 0 || (dot != diez * 3)))
			error_exit(1);
		if (nline == 5)
			nline = 0;
	}
}

static	void	read_file(char *source, char *buff)
{
	int	fd;
	int ret;

	fd = open(source, O_RDONLY);
	if (fd == -1)
		error_exit(2);
	ret = read(fd, buff, 600);
	buff[ret] = '\0';
	check_buff(buff);
	check_buff_length(buff);
	if (close(fd) == -1)
		error_exit(3);
}

int				main(int argc, char **argv)
{
	char		*buff;
	t_pieces	*all_pieces;
	t_pieces	*all_count;
	char		no_of_pieces;

	if (argc != 2)
		error_exit(0);
	no_of_pieces = 0;
	buff = (char *)malloc(BUFF);
	read_file(argv[1], buff);
	all_pieces = get_pieces_from_buff(buff);
	free(buff);
	all_count = all_pieces;
	while (all_count)
	{
		no_of_pieces = all_count->index;
		all_count = all_count->next;
	}
	fillit_execute(all_pieces, no_of_pieces);
	return (1);
}
