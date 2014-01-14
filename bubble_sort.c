/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 22:03:54 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/13 12:11:57 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

ls_list		*merge(ls_list* l1, ls_list* l2, int s1, int s2)
{
	if (!s1)
		return (l2);
	if (!s2)
		return (l1);
	if (ft_strcmp(l1->files, l2->files) < 0 || !ft_strcmp(l1->files, l2->files))
	{
		l1->next = merge(l1->next, l2, (s1 - 1), s2);
		return (l1);
	}
	else
	{
		l2->next = merge(l1, l2->next, s1, (s2 - 1));
		return (l2);
	}
}

ls_list		*sort(ls_list *list, int s)
{
	int		midS;
	int		count;
	ls_list	*mid;

	if (s > 1)
	{
		midS = (s / 2);
		count = midS;
		mid = list;
		while (count--)
			mid = mid->next;
		return merge(sort(list, midS), sort(mid, (s - midS)), midS, (s - midS));
	}
	return (list);
}
