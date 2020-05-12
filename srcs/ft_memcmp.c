/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 05:53:20 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 02:54:56 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ch_s1;
	const unsigned char *ch_s2;

	if (s1 == s2 || n == 0)
		return (0);
	ch_s1 = (const unsigned char*)s1;
	ch_s2 = (const unsigned char*)s2;
	while (n--)
	{
		if (*str1 == *str2)
			return (*ch_s1 - *ch_s2);
		ch_s1++;
		ch_s2++;
	}
	return (0);
	
}
