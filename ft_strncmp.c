/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 02:18:30 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/21 00:23:18 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				res;
	unsigned char	*a1;
	unsigned char	*a2;

	res = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while ((n != 0) && (*a1 != 0) && (*a1 == *a2))
	{
		a1++;
		a2++;
		n--;
	}
	if (n != 0)
	{
		res = (*a1 - *a2);
	}
	return (res);
}
