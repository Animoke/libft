/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:51:27 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/21 00:04:01 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
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

char	**ft_split(char const *s, char c)
{
	char	**res;
	if (!s)
		return (NULL);
	while (set_checker(s, c) == 1)
	{
		**res = *s;
		s++;
		res++;
	}
	if (set_checker(s, c) == 0)
		return (NULL);
	return (NULL);
}*/


static size_t	ft_split_counter(char const *s, char c)
{
	size_t	splits;
	int		i;

	splits = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		splits++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (splits);
}

static void		*ft_free_strings(char **strings)
{
	if (strings == NULL)
		return (NULL);
	while (*strings != NULL)
		free(*strings++);
	free(strings);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	a;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	a = ft_split_counter(s, c);
	if ((strs = (char**)malloc(sizeof(char*) * (a + 1))) == NULL)
		return (NULL);
	a = 0;
	j = -1;
	while (s[++j])
	{
		if (s[j] == c)
			continue ;
		i = 0;
		while (s[j + i] && s[j + i] != c)
			i++;
		if ((strs[a++] = ft_substr(s, j, i)) == NULL)
			return (ft_free_strings(strs));
		j += i - 1;
	}
	strs[a] = NULL;
	return (strs);
}
