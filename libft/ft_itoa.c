/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:51:36 by tcollart          #+#    #+#             */
/*   Updated: 2013/11/26 23:02:33 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;

	if (n == -2147483648)
		return ("-2147483648");
	neg = 0;
	if (n < 0)
	{
		str = (char *) malloc(ft_nbrlen(n) + 1);
		n = -n;
		neg = 1;
	}
	else if (n == 0)
		return ("0");
	else
		str = (char *) malloc(ft_nbrlen(n));
	while (*str++);
	while (n)
	{
		*--str = (n % 10) + 48;
		n /= 10;
	}
	if (neg == 1)
		*--str = '-';
	return (str);
}
