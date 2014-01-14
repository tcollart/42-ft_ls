/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 00:27:21 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/15 04:14:11 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

void	print_result_simple(ls_list *list)
{
	while (list)
	{
		ft_putstr(list->files);
		ft_putchar('\n');
		list = list->next;
	}
}

void	print_result(ls_list *list)
{
	while (list)
	{
		ft_putstr(list->rights);
		ft_putchar(' ');
		ft_putstr(list->n_links);
		ft_putchar(' ');
		ft_putstr(list->uids);
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putstr(list->gids);
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putstr(list->sizes);
		ft_putchar(' ');
		ft_putstr(list->times);
		ft_putchar(' ');
		ft_putstr(list->files);
		ft_putchar('\n');
		list = list->next;
	}
}

void	print_result_r(ls_list *list)
{
	while (list->prev)
	{
		ft_putstr(list->rights);
		ft_putchar(' ');
		ft_putstr(list->n_links);
		ft_putchar(' ');
		ft_putstr(list->uids);
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putstr(list->gids);
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putstr(list->sizes);
		ft_putchar(' ');
		ft_putstr(list->times);
		ft_putchar(' ');
		ft_putstr(list->files);
		ft_putchar('\n');
		list = list->prev;
	}
}
