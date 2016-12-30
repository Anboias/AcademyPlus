/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillheader.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:08:13 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/09 14:38:58 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLHEADER_H
# define FILLHEADER_H

typedef	struct	s_coord
{
	int			x;
	int			y;
}				t_c;

typedef	struct	s_tetriminos
{
	t_c			pos[4];
	char		index;
	char		visited;
}				t_p;

void			*read_file(char *source, char *buff);
void			check_buff(char *buff);
void			valid_tetriminos(t_p *all);
void			put_elements(char *buff, t_p tetriments[27]);
void			resize_all(t_p *temp, int size);
void			check_if_valid(t_p *ours, t_p *all, int size_ours, int i,
							int k, int z);
t_c				find_spot(char map[][15]);
int				try_fit(char map[][15], int x, int y, t_p tetriminos);
void			error_exit(int n);
void 			execute(char *buff, t_p *tetriments, t_p *all_valid, char map[][15]);
void			empty_map(char map[][15]);
void 			find_match(char map[][15], t_p *tetriminos, int size);
void			insert_element(char map[][15], t_p tetriminos, t_c coord);
void			fill_map(char map[][15], t_p *tetriminos, int size);

/*
**test functions
*/
void			test_print(t_p *all, int size);
void			test_find_spot();

#endif
