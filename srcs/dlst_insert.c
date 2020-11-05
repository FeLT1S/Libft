/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodet_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:44:27 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/02 20:03:16 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				nodet_insert(t_node **node, t_node *new_elem)
{
	t_node *tmp;

	tmp = (*node)->next;
	(*node)->next = new_elem;
	new_elem->next = tmp;
	new_elem->prev = *node;
	if (tmp)
		tmp->prev = new_elem;
}