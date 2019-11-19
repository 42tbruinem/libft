/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:27:07 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/04 15:59:36 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char b;

	b = (unsigned char)c;
	b = b << 1;
	b = b >> 1;
	if (b == c)
		write(fd, &c, 1);
	else
		write(fd, "ø", 2);
}
