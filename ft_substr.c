/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:42:02 by gpatingr          #+#    #+#             */
/*   Updated: 2020/08/04 18:07:53 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res[0] = 0;
		return (res);
	}
	while (s[start] && i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
