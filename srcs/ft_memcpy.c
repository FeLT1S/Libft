/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:24:44 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/02 00:24:23 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long		*long_dst;
	const unsigned long	*long_src;
	unsigned char		*mod_dst;
	const unsigned char	*mod_src;
	unsigned long		i;

	if (dst - src < (long)n && src - dst < (long)n)
		return (0);
	long_dst = (unsigned long*)dst;
	long_src = (const unsigned long*)src;
	i = 0;
	while (i++ < (unsigned long)n / sizeof(long))
		*long_dst++ = *long_src++;
	mod_dst = (unsigned char*)long_dst;
	mod_src = (const unsigned char*)long_src;
	i = 0;
	while (i++ < (unsigned long)n % sizeof(long))
		*mod_dst++ = *mod_src++;
	return (dst);
}

int main()
{
	char *str;
	char str2[14];
	str = "HelloKitty";
	printf("%s\n",memcpy(str2, str, 2));
	printf("%s\n",ft_memcpy(str2, str, 2));
}
