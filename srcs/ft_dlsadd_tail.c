/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsadd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:08:21 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/01 18:21:44 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsadd_tail(t_dls *node, void *cont)
{
	while (node->next)
		node = node->next;
	ft_dlsadd_front(node, cont);
	return (node);
}
