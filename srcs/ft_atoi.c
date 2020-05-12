/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 00:55:34 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/12 12:18:45 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *nptr)
{
	int			atoint;
	const char	*ch;
	int			sign;
	int			pnb;

	ch = nptr;
	sign = 0;
	if ((*ch >= 9 && *ch <= 13) || *ch == ' ')
		return (ft_atoi(ch + 1));
	if (*ch == '-')
		sign = -1;
	if ((*ch >= '0' && *ch <= '9') || (*ch == '+'))
		sign = 1;
	if ((*ch == '+') || (*ch == '-'))
		ch++;
	atoint = 0;
	while (*ch >= '0' && *ch <= '9')
	{
		pnb = atoint;
		atoint = atoint * 10 - '0' + *ch++;
		if (pnb != atoint / 10 && (atoint + 1))
			return ((sign > 0) ? -1 : 0);
	}
	return (atoint * sign);
}
