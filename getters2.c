/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:24:08 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/11 00:16:34 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char *		get_date(struct stat infos)
{
	char	*date;

	date = malloc(12);
	strftime(date, 20, "%b %e %H:%M", localtime(&(infos.st_mtime)));
	return ((char *)date);
}

char *		get_files(struct dirent *dir)
{
	char	*str;

	str = dir->d_name;
	return (str);
}
