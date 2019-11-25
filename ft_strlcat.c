/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:22:07 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/25 16:06:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strnlen(dest, dstsize);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((i + j < dstsize - 1) && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dstlen + srclen);
}
