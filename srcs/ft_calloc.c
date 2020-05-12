/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 03:12:13 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/12 20:21:14 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*newmem;

	newmem = (void*)malloc(nmemb * size);
	if (newmem)
		return (newmem);
	ft_memset(newmem, 0, nmemb * size);
	return (0);
}
