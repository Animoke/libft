/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:12:57 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/22 16:24:38 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > size)
		dstlen = size;
	if (dstlen == size)
		return (size + srclen);
	len = ft_strlen(dst);
	while (len + 1 < size && *src)
		dst[len++] = *src++;
	if (size)
		dst[len] = 0;
	return (dstlen + srclen);
}
