/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:31:14 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/26 17:28:39 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include "typedef.h"

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void 	ft_putendl(char const *s);

size_t	ft_strlen(char const *s);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);

#endif
