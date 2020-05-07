/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 00:13:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/07 04:36:41 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned long		*long_dst;
	const unsigned long	*long_src;
	unsigned char		*mod_dst;
	const unsigned char	*mod_src;

	if (dst < src)
		return (ft_memcpy(dst, src, n));
	long_dst = (unsigned long*)(dst + n);
	long_src = (const unsigned long*)(src + n);
	while (n > sizeof(long))
	{
		*(--long_dst) = *(--long_src);
		n = n - sizeof(long);
	}
	mod_dst = (unsigned char*)long_dst;
	mod_src = (const unsigned char*)long_src;
	while (n + 1 != 0)
	{
		*(--mod_dst) = *(--mod_src);
		n--;
	}
	return (dst);
}
