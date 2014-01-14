/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:34:53 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/24 22:09:49 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*one;
	const char	*two;
	size_t		i;

	one = s1;
	two = s2;
	i = 0;
	while (i < n)
	{
		if (*one != *two)
			return (*one - *two);
		one++;
		two++;
		i++;
	}
	return (0);
}
