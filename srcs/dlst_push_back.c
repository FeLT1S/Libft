/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_push_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:05:06 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/02 20:14:57 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				dlst_push_back(t_node **root, t_node *new_elem)
{
	t_node *tmp;

	tmp = *root;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_elem;
	new_elem->prev = tmp;
}