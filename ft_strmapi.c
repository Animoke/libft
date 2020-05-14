/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:31:22 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/14 17:52:09 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (!(ptr = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
		ptr[i++] = *s++;
	ptr[i] = 0;
	i = 0;
	while (ptr[i])
	{
		ptr[i] = (*f)(i, ptr[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
