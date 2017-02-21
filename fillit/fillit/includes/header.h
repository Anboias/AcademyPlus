/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:31:24 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 20:04:26 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

# define BUFF 600

typedef	struct		s_coord
{
	char			x;
	char			y;
}					t_c;

typedef	struct		s_piece
{
	t_c				pos[4];
}					t_p;

typedef	struct		s_all
{
	char			visited;
	char			index;
	t_p				piece;
	struct s_all	*next;
}					t_pieces;

void				ft_putendl(const char *s);
void				error_exit(int n);
void				valid_tetriminos(t_p *all);
void				print_map(char **map, int size);
t_pieces			*get_pieces_from_buff(char *buff);
int					fillit_execute(t_pieces *start, char	no_of_pieces);
char				**create_map(int square_size, int i, int j);
t_c					find_next_position(char **map, t_pieces *one, t_c coord,
		char size);

#endif
