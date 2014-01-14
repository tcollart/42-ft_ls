/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:21:17 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:02:33 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		error;
	size_t	i;

	i = 0;
	error = 0;
	if ((str = (char *) malloc(len)) == 0)
		return (NULL);
	while (i < len)
	{
		*str = s[start + i];
		str++;
		i++;
	}
	*str = '\0';
	i = 0;
	while (i < len)
	{
		str--;
		i++;
	}
	return (str);
}
