/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:20:55 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/08 11:47:57 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i] != c && set[i] != 0)
		i++;
	return (set[i] == c);
}

static int	to_trim(const char *s, const char *set)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (s[i] && is_in_set(s[i], set))
	{
		i++;
		size++;
	}
	while (s[i])
		i++;
	while (i != 0 && is_in_set(s[i - 1], set))
	{
		i--;
		size++;
	}
	if ((size_t)size >= ft_strlen(s))
		return (ft_strlen(s));
	return (size);
}

char		*ft_strtrim(const char *s1, char const *set)
{
	char	*newstr;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL || s1[i] == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1) - to_trim(s1, set);
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (j < len)
	{
		newstr[j] = s1[i + j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
