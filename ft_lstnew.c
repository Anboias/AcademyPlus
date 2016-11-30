/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:34:08 by biasinov          #+#    #+#             */
/*   Updated: 2016/11/30 11:58:08 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if ((l = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		if ((l->content = malloc(content_size)) == NULL)
		{
			free(l);
			return (NULL);
		}
		ft_memcpy((l->content), content, sizeof(content));
		l->content_size = (size_t *)content_size;
	}
	l->next = NULL;
	return (l);
}
