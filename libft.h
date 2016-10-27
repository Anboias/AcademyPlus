/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:31:14 by biasinov          #+#    #+#             */
/*   Updated: 2016/10/28 01:27:01 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "typedef.h"

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);

size_t	ft_strlen(char const *s);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strnew(size_t size);
char	*ft_strmap(char const *s, char(*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);
int		ft_strtrim_front(char const *s1);
int		ft_strtrim_end(char const *s1);
int		ft_firstwordsize(char const *s, char c);
int		ft_countwords(char const *s, char c);
char	*ft_strtrim(char const *s);

char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
int		ft_numsize(int n);
int		ft_abs(int n);

#endif
