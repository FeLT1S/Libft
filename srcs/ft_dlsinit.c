/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:16:46 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:19:02 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsinit(void *cont)
{
	t_dls	*dls;

	if (!(dls = (t_dls*)malloc(sizeof(t_dls))))
		return (NULL);
	dls->cont = cont;
	dls->next = NULL;
	dls->prev = NULL;
	return (dls);
}
