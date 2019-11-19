/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:40:27 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/19 12:20:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	if (needle_len > ft_strlen(str) || len == 0)
		return (NULL);
	while (str[i] && i < len - (needle_len + 1))
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
