/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 00:55:34 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/06 02:42:07 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *nptr)
{
	int			atoint;
	const char	*ch;
	int			sign;

	ch = nptr;
	sign = 1;
	if (*ch == '+' && *(ch + 1) == '+' || *ch == '-' && *(ch + 1) == '-' || \
		*ch == '+' && *(ch + 1) == '-' || *ch == '-' && *(ch + 1) == '+')
		return (0);
	if (*ch == '-')
		sign = -1;
	if ((*ch >= 9 && *ch <= 13) || *ch == ' ' || *ch == '+' || *ch == '-')
		return (ft_atoi(ch + 1));
	atoint = 0;
	while (*ch >= '0' && *ch <= '9')
		atoint = atoint * 10 - '0' + *ch++;
	return (atoint * sign);
}
