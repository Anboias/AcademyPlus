/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 10:57:51 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/04 11:39:49 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newelem;
	t_list	*root;

	root = NULL;
	if (lst)
	{
		newelem = (*f)(lst);
		root = newelem;
		while (lst)
		{
			newelem->next = (*f)(lst->next);
			newelem = newelem->next;
			lst = lst->next;
		}
	}
	return (root);
}
