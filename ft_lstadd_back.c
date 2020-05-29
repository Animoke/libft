/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 22:04:32 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/29 23:23:16 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *res;

	res = ft_lstlast(*alst);
	if (alst == NULL)
	{
		alst = &new;
		return ;
	}
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	if (res)
		res->next = new;
}