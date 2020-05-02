/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:12:57 by gpatingr          #+#    #+#             */
/*   Updated: 2020/04/30 22:26:33 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		i++;
		size--;
	}
	while (*src && (size - 1 > 1))
		*dst++ = *src++;
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (srclen + i);
}
