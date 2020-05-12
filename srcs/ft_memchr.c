/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 04:22:41 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 01:18:31 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	const unsigned long	*long_ch;
	const unsigned long	long_c = (unsigned char)c * LOWBITS;

	ch = s;
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 && n != 1)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch++;
		n--;
	}
	long_ch = (unsigned long*)ch;
	while (((((*long_ch ^ long_c) - LOWBITS) & ~(*long_ch ^ long_c) \
	& HIGHBITS) == 0) && (n > sizeof(long)))
	{
		n = n - sizeof(long);
		long_ch++;
	}
	ch = (unsigned char*)long_ch;
	while (*ch != (unsigned char)c && n-- != 1)
		ch++;
	if (*ch == (const unsigned char)c)
		return ((void *)ch);
	return (0);
}
