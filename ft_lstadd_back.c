/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 22:04:32 by gpatingr          #+#    #+#             */
/*   Updated: 2020/07/23 15:38:01 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *res;
	t_list *temp;

	if (alst == NULL)
	{
		alst = &new;
		return ;
	}
	temp = *alst;
	if (temp == NULL)
	{
		*alst = new;
		return ;
	}
	res = ft_lstlast(*alst);
	if (res)
		res->next = new;
}
