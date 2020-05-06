/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:05:12 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/07 00:44:35 by jiandre          ###   ########.fr       */
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
		if (*ch == (char)c)
			return ((void *)ch);
		ch++;
	}
	long_ch = (unsigned long*)ch;
	long_ch--;
	while (((((*long_ch ^ long_c) - LOWBITS) & ~(*long_ch ^ long_c)
	& HIGHBITS) == 0) && (ch - str > (long int)sizeof(long)))
		long_ch--;
	ch = (const char*)long_ch;
	while (*ch != (char)c && str != ch)
		ch--;
	if (*ch == (char)c)
		return ((void *)ch);
	return (0);
}
