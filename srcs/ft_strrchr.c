/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:05:12 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/24 20:40:31 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

char					*ft_strrchr(const char *str, int c)
{
	const char			*ch;
	const unsigned long	*long_ch;
	const unsigned long	long_c = (unsigned long)c * LOWBITS;

	ch = str + ft_strlen(str);
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 && ch != str)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch--;
	}
	long_ch = (unsigned long*)(ch + 1);
	while (((((*(long_ch - 1) ^ long_c) - LOWBITS) & ~(*(long_ch - 1) ^ long_c)
	& HIGHBITS) == 0) && (ch - str > (long int)sizeof(long)))
	{
		if (*long_ch & HIGHBITS)
			return (0);
		--long_ch;
	}
	ch = (const char*)long_ch - 1;
	while (*ch != (char)c && str != ch)
		ch--;
	return ((*ch == (char)c ? NULL : ch));
}
