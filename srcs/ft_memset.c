/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 23:55:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/05 21:21:24 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)

void					*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*ch;
	unsigned long		*long_ch;
	const unsigned long	long_c = (unsigned long)c * LOWBITS;

	ch = s;
	long_ch = (unsigned long*)ch;
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 && n)
	{
		if (*ch == '\0')
			return (s);
		*(ch)++ = c;
		n--;
	}
	while (n > sizeof(long))
	{
		*long_ch++ = long_c;
		n -= sizeof(long);
	}
	ch = (unsigned char*)long_ch;
	while (n--)
		*ch++ = c;
	return (s);
}
