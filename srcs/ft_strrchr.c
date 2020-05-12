/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:05:12 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/12 21:23:36 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

char					*ft_strrchr(const char *str, int c)
{
	const unsigned char	*ch;
	const unsigned long	*long_ch;
	const unsigned long	long_c = (unsigned long)c * LOWBITS;

	ch = (unsigned char*)str + ft_strlen(str);
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 &&
	ch != (unsigned char*)str)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch--;
	}
	long_ch = (const unsigned long*)ch;
	while (((((*(long_ch - 1) ^ long_c) - LOWBITS) & ~(*(long_ch - 1) ^ long_c)
	& HIGHBITS) == 0) && (ch - (unsigned char*)str > (long int)sizeof(long)))
		--long_ch;
	ch = (const unsigned char*)long_ch;
	while (*ch != (unsigned char)c && (unsigned char*)str != ch)
		ch--;
	if (*ch == (const unsigned char)c)
		return ((void *)ch);
	return (0);
}
