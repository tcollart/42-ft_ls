/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 03:56:23 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:02:33 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		tot_size;

	tot_size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (*(s1))
	{
		*str = *s1 ;
		s1++;
		str++;
	}
	while (*(s2))
	{
		*str = *s2;
		s2++;
		str++;
	}
	*str = '\0';
	while (tot_size)
	{
		str--;
		tot_size--;
	}
	return (str);
}
