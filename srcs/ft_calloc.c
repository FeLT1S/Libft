/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 03:12:13 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 00:47:14 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*newmem;

	// if (!(size + 1) || !(nmemb + 1))
	// 	return (0); stupid!!! ПРОВЕРКА НЕ ИМЕЕТ СМЫСЛА!
	newmem = (void*)malloc(nmemb * size);
	if (!newmem)
		return (0);
	ft_memset(newmem, 0, nmemb * size);
	return (newmem);
}
