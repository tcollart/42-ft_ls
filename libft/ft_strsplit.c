/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:34:18 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:02:33 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char **	ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	str = (char **) malloc(ft_strlen(s) + 1);
	str[i] = (char *) malloc(ft_strlen(s) + 1);
	while (*s)
	{
		j = 0;
		str[i] = (char *) malloc(ft_strlen(s) + 1);
		if (*s != c)
		{
			str[i] = (char *) malloc(ft_strlen(s) + 1);
			while (*s && *s != c)
				str[i][j++] = *s++;
			str[i++][j] = '\0';
		}
		if (*s)
			s++;
	}
	str[i] = '\0';
	return (str);
}
