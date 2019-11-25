/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:21:31 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/25 16:21:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	while (str[i] && str[i] != (char)c)
		i++;
	if (str[i] == (char)c)
		ptr = (char *)&str[i];
	return (ptr);
}
