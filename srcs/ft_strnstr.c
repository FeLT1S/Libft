/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:33:14 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/07 07:25:00 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ch_big;
	const char	*ch_little;
	const char	*ch_litinbig;

	ch_big = big;
	ch_little = little;
	if (*little == '\0')
		return ((void*)ch_big);
	while (*ch_big != *ch_little && len--)
		ch_big++;
	ch_litinbig = ch_big;
	while (*ch_little == *ch_big && len)
	{
		ch_little++;
		ch_big++;
		len--;
	}
	if (*ch_little == '\0')
		return ((char*)ch_litinbig);
	return (0);
}
