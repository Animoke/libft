/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 00:05:40 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/06 16:33:31 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		set_checker(const char *set, const char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_strndup_local(char const *str, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (set_checker(set, *s1) == 1)
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && set_checker(set, s1[i - 1]))
		i--;
	return (ft_strndup_local(s1, i));
}
