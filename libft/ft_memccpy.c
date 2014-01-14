/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 01:48:26 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/22 23:41:23 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*str;

	dest = s1;
	str = s2;
	i = 0;
	while (i < n)
	{
		dest[i] = *str;
		if (*str == c)
			return (s1 + i + 1);
		str++;
		i++;
	}
	return (NULL);
}
