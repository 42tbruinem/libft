/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:24:56 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/25 15:51:04 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					n;
	unsigned long long	res;
	int					i;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > 9223372036854775807 && n == 1)
			return (-1);
		if (res > 9223372036854775807 && n == -1)
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}
