/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:33:14 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/14 01:10:27 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *bg, const char *ltle, size_t len)
{
	const char	*ch_litinbg;

	if (*ltle == '\0')
		return ((void*)bg);
	while (*bg != *ltle && len && *bg != '\0')
	{
		bg++;
		len--;
	}
	ch_litinbg = bg;
	while (*ltle == *bg && len && *ltle != '\0')
	{
		ltle++;
		bg++;
		len--;
	}
	if (*ltle == '\0')
		return ((char*)ch_litinbg);
	return (0);
}
