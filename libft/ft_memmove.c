/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 01:59:05 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/22 23:48:07 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = s1;
	src = s2;
	i = 0;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	return (s1);
}
