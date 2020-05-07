/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:51:27 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/07 04:28:19 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	j = 0;
	if (!(res = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{
			res[j][i] = s[i];
			i++;
		}
		j++;
	}
	res[j][i] = 0;
	printf("%s", res[j]);
	return (res);
}