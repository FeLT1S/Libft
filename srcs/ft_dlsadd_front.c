/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:43:52 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:37:49 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsadd_front(t_dls *dls, void *cont)
{
	t_dls *new_elem;
	t_dls *tmp;

	if (!(new_elem = (t_dls*)malloc(sizeof(t_dls))))
		return (NULL);
	tmp = dls->next;
	dls->next = new_elem;
	new_elem->cont = cont;
	new_elem->next = tmp;
	new_elem->prev = dls;
	if (tmp)
		tmp->prev = new_elem;
	return (new_elem);
}
