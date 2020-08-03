/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@sudent.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 01:08:05 by gpatingr          #+#    #+#             */
/*   Updated: 2020/08/02 19:39:00 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (tmp == NULL)
		return ;
	ptr = tmp;
	while (ptr)
	{
		(*del)(ptr->content);
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*lst = NULL;
}
