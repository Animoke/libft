/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:10:01 by gpatingr          #+#    #+#             */
/*   Updated: 2020/05/01 22:19:49 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == ' ') ? 1 : 0);
}
