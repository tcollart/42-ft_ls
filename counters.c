/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:19:07 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/13 12:11:57 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char *				get_total_blocks(char *flags, char *str)
{
	int				max;
	DIR				*e;
	struct dirent	*dir;
	struct stat		infos;
	int				nb;

	nb = 0;
	e = opendir(str);
	if (e)
	{
		while ((dir = readdir(e)) != NULL)
		{
			lstat(dir->d_name, &infos);
			if (ft_strstr(flags, "a") || dir->d_name[0] != '.')
			{
				nb += (infos.st_blocks);
				if (nb > max)
					max = nb;
			}
		}
	}
	closedir(e);
	return ((char *)ft_strjoin("total ", ft_itoa(nb)));
}

int					count_elements(char *directory)
{
	DIR				*d;
	struct dirent	*dir;
	int				i;

	i = 0;
	d = opendir(directory);
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
			i++;
	}
	closedir(d);
	return (i);
}
