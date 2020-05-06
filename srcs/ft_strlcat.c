/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:42:53 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/07 00:42:49 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*len_src;

	if (size)
	{
		len_src = (char*)src + ft_strlen(src);
		ft_memcpy(len_src, dst, size - 1);
		*(len_src + size) = '\0';
		return (ft_strlen(src));
	}
	else
	{
		*dst = '\0';
		return (0);
	}
}
