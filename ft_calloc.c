/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:38:58 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/21 15:55:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	len;

	len = count * size;
	arr = malloc(len);
	if (arr == 0)
		return (arr);
	ft_bzero(arr, len);
	return (arr);
}
