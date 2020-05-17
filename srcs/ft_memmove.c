/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 00:13:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/17 23:49:04 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

void					*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned long		*long_dst;
	const unsigned long	*long_src;
	unsigned char		*mod_dst;
	const unsigned char	*mod_src;

	if ((!dst && !src) || (!dst && !src && !n))
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	long_dst = (unsigned long*)(dst + n);
	long_src = (const unsigned long*)(src + n);
	while (n > sizeof(long))
	{
		*(--long_dst) = *(--long_src);
		n = n - sizeof(long);
	}
	mod_dst = (unsigned char*)long_dst - 1;
	mod_src = (const unsigned char*)long_src - 1;
	while (n--)
		*mod_dst-- = *mod_src--;
	return (dst);
}
