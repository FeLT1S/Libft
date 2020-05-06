/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:21:31 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/06 03:26:11 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size)
	{
		ft_memcpy(dst, src, size - 1);
		*(dst + size - 1) = '\0';
		return (ft_strlen(src));
	}
	else
	{
		*dst = '\0';
		return (0);
	}
}
