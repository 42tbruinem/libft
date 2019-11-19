/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:12:10 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/19 12:15:39 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	if (n == 0)
		return (0);
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (c1[i] != c2[i] || (!c1[i] || !c2[i]))
			return (c1[i] - c2[i]);
		i++;
		n--;
	}
	return (0);
}
