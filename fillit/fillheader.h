/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillheader.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:08:13 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 23:11:29 by biasinov         ###   ########.fr       */
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
}				t_p;

void			*read_file(char *source, char *buff);
void			check_buff(char *buff);
void			valid_tetriminos(t_p *all);
void			put_elements(char *buff, t_p tetriments[27]);
void			resize_all(t_p *temp, int size);
void			check_if_valid(t_p *ours, t_p *all, int size_ours, int i,
							int k, int z);
void			find_spot(char map[4][4]);
int				try_fit(char map[][4], int x, int y, t_p tetriments[27]);
void			error_exit(int n);
void 			execute(char *buff, t_p *tetriments, t_p *all_valid);

/*
**test functions
*/
void			test_print(t_p *all, int size);
void			test_find_spot();

#endif
