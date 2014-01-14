/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 02:28:01 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:00:09 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *	ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *) malloc(sizeof(new))))
	{
		if (content)
		{
			new->content = (void*) content;
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	else
		new = NULL;
	return (new);
}
