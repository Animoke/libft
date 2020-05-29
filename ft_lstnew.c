/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 15:22:11 by animoke           #+#    #+#             */
/*   Updated: 2020/05/29 20:06:43 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*res;

	if (!(res = malloc(sizeof(t_list))))
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
