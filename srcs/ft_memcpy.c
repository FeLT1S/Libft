/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:24:44 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/12 21:12:18 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long		*long_dst;
	const unsigned long	*long_src;
	unsigned char		*ch_dst;
	const unsigned char	*ch_src;
	unsigned long		i;

	if (!dst && !src)
		return (0);
	long_dst = (unsigned long*)dst;
	long_src = (const unsigned long*)src;
	i = 0;
	while (i++ < (unsigned long)n / sizeof(long) &&
	((*long_src - LOWBITS) & ~*long_src & HIGHBITS) == 0)
		*long_dst++ = *long_src++;
	ch_dst = (unsigned char*)long_dst;
	ch_src = (const unsigned char*)long_src;
	i = 0;
	while (i++ < (unsigned long)n % sizeof(long))
		*ch_dst++ = *ch_src++;
	return (dst);
}
