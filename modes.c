/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 00:44:58 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/09 03:19:14 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	test_l(char *str)
{
	int	test;

	test = 0;
	if (*str == '-' && ft_strchr(str, 'l'))
		test = 1;
	return (test);
}

char	test_R(char *str)
{
	int	test;

	test = 0;
	if (*str == '-' && ft_strchr(str, 'R'))
		test = 10;
	return (test);
}

char	test_a(char *str)
{
	int	test;

	test = 0;
	if (*str == '-' && ft_strchr(str, 'a'))
		test = 100;
	return (test);
}

char	test_r(char *str)
{
	int	test;

	test = 0;
	if (*str == '-' && ft_strchr(str, 'r'))
		test = 1000;
	return (test);
}

char	test_t(char *str)
{
	int	test;

	test = 0;
	if (*str == '-' && ft_strchr(str, 't'))
		test = 10000;
	return (test);
}
