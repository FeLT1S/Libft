/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_pop_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:15:21 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/02 20:17:30 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node				*dlst_pop_back(t_node **root)
{
	t_node *tmp;

	tmp = *root;
	while (tmp->next)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}