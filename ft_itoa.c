/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:16:13 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/14 17:29:47 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	int		i;
	int		nbcpy;
	char	num[12];

	nbcpy = nb;
	i = 10;
	num[11] = 0;
	num[10] = '0';
	if (nb == -2147483648)
		num[i--] = '8';
	if (nb == -2147483648)
		nb /= 10;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		num[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	if (nbcpy < 0)
		num[i] = '-';
	else if (nbcpy != 0)
		i++;
	return (ft_strdup(&num[i]));
}
