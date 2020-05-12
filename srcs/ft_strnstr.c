/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:33:14 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 02:40:29 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *bg, const char *ltle, size_t len)
{
	const char	*ch_bg;
	const char	*ch_ltle;
	const char	*ch_litinbg;

	ch_bg = bg;
	ch_ltle = ltle;
	if (*ltle == '\0')
		return ((void*)ch_bg);
	while (*ch_bg != *ch_ltle && len && ch_bg != '\0')
	{
		ch_bg++;
		len--;
	}
	ch_litinbg = ch_bg;
	while (*ch_ltle == *ch_bg && len && *ch_ltle != '\0')
	{
		ch_ltle++;
		ch_bg++;
		len--;
	}
	if (*ch_ltle == '\0')
		return ((char*)ch_litinbg);
	return (0);
}
