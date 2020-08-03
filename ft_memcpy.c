/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:16:11 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/29 22:45:30 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
