/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:14:00 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/13 11:41:41 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					get_larger_number_size(void)
{
	int				max;
	DIR				*f;
	struct dirent	*dir;
	struct stat		infos;
	int				nb;

	nb = 0;
	max = 0;
	f = opendir(".");
	if (f)
	{
		while ((dir = readdir(f)) != NULL)
		{
			if (dir->d_name[0] != '.')
			{
				lstat(dir->d_name, &infos);
				nb = ft_nbrlen(infos.st_size);
				if (nb > max)
					max = nb;
			}
		}
	}
	closedir(f);
	return (max);
}

int					get_larger_number_nlink(void)
{
	int             max;
	DIR             *f;
	struct dirent   *dir;
	struct stat     infos;
	int             nb;

	nb = 0;
	max = 0;
	f = opendir(".");
	if (f)
	{
		while ((dir = readdir(f)) != NULL)
		{
			if (dir->d_name[0] != '.')
			{
				lstat(dir->d_name, &infos);
				nb = ft_nbrlen(infos.st_nlink);
				if (nb > max)
					max = nb;
			}
		}
	}
	closedir(f);
	return (max);
}
