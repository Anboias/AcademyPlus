/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 09:36:12 by biasinov          #+#    #+#             */
/*   Updated: 2017/02/09 19:38:11 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	get_pos(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static	int	get_one_line(char **current, char **line, int size)
{
	*line = ft_strsub(*current, 0, size);
	*current = ft_strsub(*current, size + 1, ft_strlen(*current) - size);
	return (1);
}

static	int	read_file(int fd, char **current, char **line)
{
	char	str[BUFF_SIZE + 1];
	int		size;
	int		ret;

	while ((ret = read(fd, str, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		str[ret] = '\0';
		*current = ft_strjoin(*current, str);
		size = get_pos(*current);
		if (size > -1)
		{
			get_one_line(current, line, size);
			return (1);
		}
	}
	return (-2);
}

int			get_next_line(const int fd, char **line)
{
	static char		*all[FD_SIZE];
	int				ret;
	int				pos;

	if (fd < 0 || fd >= FD_SIZE || BUFF_SIZE < 1 || line == NULL)
		return (-1);
	if (all[fd] == NULL)
		all[fd] = ft_strnew(0);
	pos = get_pos(all[fd]);
	if (pos > -1)
		return (get_one_line(&(all[fd]), line, pos));
	if ((ret = read_file(fd, &(all[fd]), line)) && ret != -2)
		return (ret);
	pos = get_pos(all[fd]);
	if (pos == -1 && ft_strlen(all[fd]) > 0)
	{
		*line = ft_strsub(all[fd], 0, ft_strlen(all[fd]));
		all[fd] = ft_strdup("");
		return (1);
	}
	return (0);
}
