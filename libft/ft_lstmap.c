/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:36:33 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 22:58:43 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *	ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	**first;

	tmp = (t_list *) malloc(sizeof(t_list));
	first = &tmp;
	if (tmp)
	{
		while (lst)
		{
			tmp = (t_list *) malloc(sizeof(t_list));
			if (tmp)
			{
				tmp = (*f)(lst);
				tmp = tmp->next;
				lst = lst->next;
			}
			else
				return (NULL);
		}
		return ((t_list *) first);
	}
	return (NULL);
}
