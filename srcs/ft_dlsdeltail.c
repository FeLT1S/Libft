/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdeltail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:49:39 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:55:47 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsdeltail(t_dls *node)
{
	t_dls *tmp;

	while (node->next)
		node = node->next;
	tmp = node->prev;
	tmp->next = NULL;
	free(node);
	return (tmp);
}
