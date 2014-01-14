/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:43:51 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:33:22 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (ft_strlen(s2) == 0)
		return ((char *) s1);
	while (k < n && *(s1 + i))
	{
		j = 0;
		while ((k + j) < n && s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *) (s1 + i));
		i++;
		k++;
	}
	return (NULL);
}
