/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 00:25:20 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/22 23:42:05 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = s1;
	s = s2;
	i = 0;
	while (i < n)
	{
		d[i] = *s;
		s++;
		i++;
	}
	return (d);
}
