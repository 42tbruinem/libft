/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 11:55:08 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/07 11:48:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;
	t_list	**begin;

	if (lst == NULL || *lst == NULL)
		return ;
	begin = lst;
	while (*lst)
	{
		last = *lst;
		*lst = (*lst)->next;
		del(last->content);
		free(last);
		last = NULL;
	}
	*begin = NULL;
}
