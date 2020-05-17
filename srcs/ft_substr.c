/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 04:47:34 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/17 14:43:02 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;

	if (!s || !(len + 1) || len > ft_strlen(s) - start)
		return (0);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
