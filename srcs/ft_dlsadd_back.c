/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:08:32 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:37:41 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsadd_back(t_dls *dls, void *cont)
{
	t_dls *new_elem;
	t_dls *tmp;

	if (!(new_elem = (t_dls*)malloc(sizeof(t_dls))))
		return (NULL);
	tmp = dls->prev;
	dls->prev = new_elem;
	new_elem->cont = cont;
	new_elem->next = dls;
	new_elem->prev = tmp;
	if (tmp)
		tmp->next = new_elem;
	return (new_elem);
}
