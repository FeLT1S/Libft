/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:31:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/02 01:17:16 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t				ft_strlen(const char *s)
{
	const unsigned char		*ch;
	unsigned long	oct_byte;

	ch = s;
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0)
	{
		if (*ch == '\0')
			return (ch - s);
		ch++;
	}
	oct_byte = *((const unsigned long *)ch);
	while (((oct_byte - 0x0101010101010101) & ~oct_byte & 0x8080808080808080) == 0)
	{
		ch = ch + sizeof(long);
		oct_byte = *((const unsigned long *)ch);
	}
	while (*ch)
		ch++;
	return (ch - s);
}
