/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:21:31 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:02:33 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		l;
	char	*str;
	int		k;

	i = 0;
	j = 0;
	l = 0;
	k = ft_strlen(s);
	str = (char*) malloc(ft_strlen(s) + 1);
	while (i < k && (s[l] == ' ' || s[l] == '\t' || s[l] == '\n'))
	{
		l++;
		i++;
	}
	while (s[l])
		l++;
	while (j++ < k && (s[l] == ' ' || s[l] == '\t' || s[l] == '\n' || !(s[l])))
		l--;
	j = 0;
	while (i <= l)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
