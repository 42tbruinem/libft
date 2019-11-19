/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:12:33 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/19 12:09:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (src[i] && i + 1 < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dest[i] = '\0';
	return (srclen);
}
