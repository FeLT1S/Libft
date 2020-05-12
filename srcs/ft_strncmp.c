/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 00:38:47 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 02:31:02 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

int						ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *ch_s1;
	const unsigned char *ch_s2;

	ch_s1 = (const unsigned char*)s1;
	ch_s2 = (const unsigned char*)s2;
	while (*ch_s1 == *ch_s2 && n && *ch_s1 != '\0')
	{
		n--;
		ch_s1++;
		ch_s2++;
	}
	if (!n)
		return (0);
	return (*ch_s1 - *ch_s2);
}
