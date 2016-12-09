/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:31:40 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 22:21:58 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillheader.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/*
** Function to open file, read it`s content, put it into a String 'buff'
** and return it to caller.
*/

void	*read_file(char *source, char *buff)
{
	int	fd;
	int ret;

	fd = open(source, O_RDONLY);
	if (fd == -1)
		error_exit(2);
	ret = read(fd, buff, 600);
	buff[ret] = '\0';
	check_buff(buff);
	if (close(fd) == -1)
		error_exit(3);
}
