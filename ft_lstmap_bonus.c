/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:09:58 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/19 11:52:32 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*map_one(t_list *lst, void *(*f)(void *), void (*del)(void *),
		t_list **toclear)
{
	t_list *new;

	new = NULL;
	if (f)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(toclear, del);
			return (NULL);
		}
	}
	return (new);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *begin;
	t_list *start;
	t_list *tmp;

	if (lst == NULL)
		return (NULL);
	start = lst;
	begin = NULL;
	while (lst)
	{
		tmp = map_one(lst, f, del, &begin);
		if (tmp == NULL)
			return (NULL);
		if (lst == start)
			begin = tmp;
		tmp = tmp->next;
		lst = lst->next;
	}
	return (begin);
}
