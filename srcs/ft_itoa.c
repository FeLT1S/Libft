/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 18:47:49 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/17 19:45:21 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_len(int n)
{
	int		len;

	len = 0;
	while (n > 9 || n < -9)
	{
		len++;
		n = n / 10;
	}
	if (n <= 9 && n >= -9)
		len++;
	if (n < 0)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	m;

	m = (long)n;
	len = ft_itoa_len(n);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	*(str + len) = '\0';
	if (m < 0)
	{
		*str = '-';
		m = m / -1;
	}
	(m == 0) ? (*str = '0') : (0);
	while (m != 0)
	{
		*(str + (len-- - 1)) = m % 10 + '0';
		m = m / 10;
	}
	return (str);
}
