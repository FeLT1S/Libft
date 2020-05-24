/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 04:22:41 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/24 20:08:55 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

static unsigned long	*long_memchr(size_t long_c, size_t *long_ch, size_t n)
{
	while (((((*long_ch ^ long_c) - LOWBITS) & ~(*long_ch ^ long_c) \
	& HIGHBITS) == 0) && (n > sizeof(long)))
	{
		n = n - sizeof(long);
		long_ch++;
	}
	return(long_ch);
}

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch = s;
	const unsigned long	*long_ch;
	const unsigned long	long_c = (unsigned char)c * LOWBITS;

	if (!n)
		return (NULL);
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 && n)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch++;
		n--;
	}
	long_ch = (unsigned long*)ch;
	ch = (unsigned char*)long_memchr(long_c, long_ch, n);
	while (*ch != (unsigned char)c && n)
	{
		ch++;
		n--;
	}
	return ((void *)(!n ? NULL : ch));
}
