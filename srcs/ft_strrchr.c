/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:05:12 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/25 06:00:24 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strrchr(const char *str, int c)
{
	const char *sym = ft_strchr(str, c);
	const char *tmp = NULL;

	if (!c)
		return (str + ft_strlen(str));
	while(sym)
	{
		tmp = sym;
		sym = ft_strchr(sym + 1, c);
	}
	return ((char *)tmp);
}
