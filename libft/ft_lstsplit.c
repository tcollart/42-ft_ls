/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:17:59 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 02:47:09 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list **	ft_lstsplit(char const *s, char c)
{
	char	**tabstr;
	t_list	**first;
	t_list	*lst;
	int		i;

	first = &lst;
	tabstr = ft_strsplit(s, c);
	lst = (t_list *) malloc(sizeof(t_list));
	i = 0;
	while (i < ft_strlen((char *) tabstr) && lst)
	{
		lst->content = tabstr[i];
		lst->content_size = ft_strlen(tabstr[i] + 1);
		lst = lst->next;
		i++;
	}
	return (first);
}
