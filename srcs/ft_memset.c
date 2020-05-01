/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 23:55:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/02 01:23:11 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ch;
	unsigned long	*long_ch;
	unsigned long	long_c;

	ch = s;
	long_ch = (unsigned long*)ch;
	long_c = c * 0x101010101010101;
	i = 0;
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