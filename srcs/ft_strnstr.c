/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:33:14 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 00:22:56 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *bg, const char *ltle, size_t len)
{
	const char	*ch_litinbg;
	size_t ltle_len;

	ltle_len = ft_strlen(ltle);
	if (!ltle[0])
		return ((char*)bg);
	while (*bg && ltle_len <= len--)
	{
		if (*bg == *ltle && !ft_strncmp(bg, ltle, ltle_len))
			return ((char *)bg);
		bg++;
	}
	return (0);
}
