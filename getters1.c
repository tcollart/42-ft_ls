/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 23:23:54 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/11 00:25:54 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char *				get_rights(struct stat infos)
{
	char	*str;

	str = (char *)malloc(13);
	str[0] = ((S_ISDIR(infos.st_mode)) ? 'd' : '-');
	str[1] = ((infos.st_mode & S_IRUSR) ? 'r' : '-');
	str[2] = ((infos.st_mode & S_IWUSR) ? 'w' : '-');
	str[3] = ((infos.st_mode & S_IXUSR) ? 'x' : '-');
	str[4] = ((infos.st_mode & S_IRGRP) ? 'r' : '-');
	str[5] = ((infos.st_mode & S_IWGRP) ? 'w' : '-');
	str[6] = ((infos.st_mode & S_IXGRP) ? 'x' : '-');
	str[7] = ((infos.st_mode & S_IROTH) ? 'r' : '-');
	str[8] = ((infos.st_mode & S_IWOTH) ? 'w' : '-');
	str[9] = ((infos.st_mode & S_IXOTH) ? 'x' : '-');
	str[10] = ' ';
	str[11] = '\0';
	return (str);
}

char *				get_links(struct stat infos, int len)
{
	int 			i;
	int 			j;
	char			*str;
	char			*temp;

	i = 0;
	j = 0;
	while (i < len - ft_nbrlen(infos.st_nlink))
		i++;
	str = malloc(ft_nbrlen(infos.st_nlink) + i + 1);
	while (i)
	{
		str[j] = ' ';
		j++;
		i--;
	}
	temp = ft_itoa(infos.st_nlink);
	while (*temp)
	{
		str[j] = *temp;
		j++;
		temp++;
	}
	str[j] = '\0';
	return (str);
}

char *				get_uid(struct stat infos)
{
	struct passwd	*pw;
	struct passwd	*owner;

	pw = getpwuid(infos.st_uid);
	owner = getpwuid(pw->pw_uid);
	return ((char *)owner->pw_name);
}

char *				get_gid(struct stat infos)
{
	struct passwd	*pw;
	struct group	*grpe;

	pw = getpwuid(infos.st_uid);
	grpe = getgrgid(pw->pw_gid);
	return ((char *)grpe->gr_name);
}

char *				get_size(struct stat infos, int len)
{
	int				i;
	int 			j;
	char			*str;
	char			*temp;

	i = 0;
	j = 0;
	while (i < len - ft_nbrlen(infos.st_size))
		i++;
	str = malloc(ft_nbrlen(infos.st_size) + i + 1);
	while (i)
	{
		str[j] = ' ';
		j++;
		i--;
	}
	temp = ft_itoa(infos.st_size);
	while (*temp)
	{
		str[j] = *temp;
		j++;
		temp++;
	}
	str[j] = '\0';
	return (str);
}
