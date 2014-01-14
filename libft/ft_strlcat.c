/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:43:06 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/24 22:48:22 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		j;

	d = dest;
	s = src;
	i = size;
	while (*d && i--)
		d++;
	i = size - (d - dest);
	if (i == 0)
		return ((d - dest) + ft_strlen(s));
	j = i;
	while (*s)
	{
		if (i > 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return ((i - j) + (d - dest) + (s - src));
}
