/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 23:55:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/04 22:32:12 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)

void					*ft_memset(void *s, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*ch;
	unsigned long		*long_ch;
	const unsigned long	long_c = (unsigned long)c * LOWBITS;

	ch = s;
	long_ch = (unsigned long*)ch;
	i = 0;
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0)
	{
		if (*ch == '\0')
			return (s);
		ch++;
	}
	while (i++ < n / sizeof(long))
		*long_ch++ = long_c;
	i = 0;
	ch = (unsigned char*)long_ch;
	while (i++ < n % sizeof(long))
		*ch++ = c;
	return (s);		
}

int main (void)
{
	unsigned char src[15]= "1234567890";
	printf ("src: %s\n",ft_memset (src, 'A', 10));
	return 0;
}