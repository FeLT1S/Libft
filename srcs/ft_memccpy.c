/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 02:26:52 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/05 06:25:52 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const void	*src2;

	if ((src2 = ft_memchr(src, c, n)))
	{
		ft_memcpy(dst, src, src2 - src + 1);
		return (dst + (src2 - src + 1));
	}
	ft_memcpy(dst, src, n);
	return (0);
}
