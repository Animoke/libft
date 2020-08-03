/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@sudent.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:51:27 by gpatingr          #+#    #+#             */
/*   Updated: 2020/08/02 18:41:34 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void		*ft_free_strings(char **strs)
{
	if (strs == NULL)
		return (NULL);
	while (*strs)
		free(*strs++);
	free(strs);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	h;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	h = ft_split_counter(s, c);
	if (!(strs = (char**)malloc(sizeof(char*) * (h + 1))))
		return (NULL);
	h = 0;
	j = -1;
	while (s[++j])
	{
		if (s[j] == c)
			continue ;
		i = 0;
		while (s[j + i] && s[j + i] != c)
			i++;
		if ((strs[h++] = ft_substr(s, j, i)) == NULL)
			return (ft_free_strings(strs));
		j += i - 1;
	}
	strs[h] = NULL;
	return (strs);
}
