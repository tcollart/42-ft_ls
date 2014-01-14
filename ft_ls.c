/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:07:56 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/15 12:40:19 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

ls_list *		push_it_to_the_lists(ls_list *item, 
		struct stat infos, ls_list *previous, struct dirent *dir)
{
	if (!previous)
		item = (ls_list *) malloc(sizeof(ls_list));
	item->rights = (char *)get_rights(infos);
	item->n_links = (char *)get_links(infos, get_larger_number_nlink());
	item->uids = (char *)get_uid(infos);
	item->gids = (char *)get_gid(infos);
	item->sizes = (char *)get_size(infos, get_larger_number_size());
	item->times = (char *)get_date(infos);
	item->files = get_files(dir);
	item->prev = previous;
	item->next = NULL;
	return (item);
}

void		proc(ls_list **list, ls_list **temp, char *argu1, char *argu2)
{
	DIR				*d;
	struct dirent	*dir;
	struct stat		infos;

	d = opendir(argu2);
	if (d)
	{
		if (*argu1 != '.')
		{
			ft_putstr(get_total_blocks(argu1, argu2));
			ft_putchar('\n');
		}
		while ((dir = readdir(d)) != NULL)
		{
			if (ft_strstr(argu1, "a") || dir->d_name[0] != '.')
			{
				lstat(dir->d_name, &infos);
				*list = push_it_to_the_lists(*list, infos, *temp, dir);
				*temp = *list;
				(*list)->next = (ls_list *) malloc(sizeof(ls_list));
				*list = (*list)->next;
			}
		}
		*list = *temp;
		(*list)->next = NULL;
	}
	closedir(d);
}

int				main(int ac, char **av)
{
	ls_list		*list;
	ls_list		*temp;
	size_t		i;

	list = NULL;
	temp = NULL;
	if (ac >= 2)
		proc(&list, &temp, av[1], ".");
	else 
		proc(&list, &temp, ".", ".");
	i = 0;
	while (list->prev)
	{
		list = list->prev;
		i++;
	}
	list = sort(list, (i));
	if (ac == 1)
		print_result_simple(list);
	else
		print_result(list);
	return (0);
}
