/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 01:08:05 by gpatingr          #+#    #+#             */
/*   Updated: 2020/07/23 14:35:44 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*item;
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (tmp == NULL)
		return ;
	item = tmp;
	while (item)
	{
		(*del)(item->content);
		tmp = item->next;
		free(item);
		item = tmp;
	}
	*lst = NULL;
}
