/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@sudent.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:51:27 by gpatingr          #+#    #+#             */
/*   Updated: 2020/08/03 19:01:20 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_counter(char const *s, char c)
{
	size_t	spl;
	int		i;

	spl = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		spl++;
	}
	return (spl);
}

static void		*ft_free_strings(char **strs)
{
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
		if (!(strs[h++] = ft_substr(s, j, i)))
			return (ft_free_strings(strs));
		j += i - 1;
	}
	strs[h] = NULL;
	return (strs);
}
