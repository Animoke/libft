/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:50:54 by gpatingr          #+#    #+#             */
/*   Updated: 2020/07/23 16:35:32 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	ft_local_lstclear(t_list **lst, void (*del)(void*))
{
	ft_lstclear(start, (*del));
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*item;
	t_list	*pre;
	t_list	*start;
	void	*ptr;

	pre = NULL;
	start = NULL;
	while (lst)
	{
		ptr = (*f)(lst->content);
		if (!(item = ft_lstnew(ptr)))
			return (ft_local_lstclear(&start, (*del)));
		if (!start)
			start = item;
		if (pre)
			pre->next = item;
		pre = item;
		item = item->next;
		if (!ptr)
			(*del)(lst->content);
		lst = lst->next;
	}
	return (start);
}
