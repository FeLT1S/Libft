/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 00:55:34 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 00:46:07 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Названия переменных хуевые, Есть бесполезный код, сам код не читабелен

int				ft_atoi(const char *nptr)
{
	int			atoint;
	int			sign;
	int			pnb;

	sign = 1;
	if ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		return (ft_atoi(nptr + 1)); // error!!!
	if (*nptr == '-')
		sign = -1;
	// if ((*nptr >= '0' && *nptr <= '9') || (*nptr == '+'))
	// 	sign = 1;
	if ((*nptr == '+') || (*nptr == '-'))
		nptr++;
	atoint = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		pnb = atoint;
		atoint = atoint * 10 - '0' + *nptr++;
		if (pnb != atoint / 10 && (atoint & 0x7FFF))
			return ((sign > 0) ? -1 : 0);
	}
	return (atoint * sign);
}
