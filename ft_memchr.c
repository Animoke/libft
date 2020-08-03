/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:15:42 by gpatingr          #+#    #+#             */
/*   Updated: 2020/04/29 00:30:40 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return (void *)&src[i];
		i++;
	}
	return (0);
}
