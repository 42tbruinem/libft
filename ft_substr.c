/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:09:01 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/19 12:38:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
		len = (ft_strlen(s) - start);
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	while (j < len)
	{
		newstr[j] = s[start + j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
