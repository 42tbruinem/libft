/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:40:27 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/25 16:10:21 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)str);
	while (*str && len >= needle_len && len > 0)
	{
		if (*str == needle[0])
		{
			if (ft_strncmp(str, needle, needle_len) == 0)
				return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
