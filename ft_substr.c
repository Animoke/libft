/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:42:02 by gpatingr          #+#    #+#             */
/*   Updated: 2020/07/23 15:26:15 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[start] != '\0' && i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
