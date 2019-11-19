/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:38:58 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/11 18:35:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	arr = malloc(len);
	if (arr == 0)
		return (arr);
	str = (char *)arr;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return (arr);
}
