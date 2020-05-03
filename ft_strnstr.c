/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:11:15 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/03 17:10:54 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == 0)
		return ((char *)s);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (find[j] != '\0' && s[i + j] == find[j] && (i + j) < len)
		{
			j++;
			if (find[j] == '\0')
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
