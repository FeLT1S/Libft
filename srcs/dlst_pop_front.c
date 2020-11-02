/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_pop_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:28:57 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/02 20:32:02 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node		*dlst_pop_front(t_node **root)
{
	t_node	*tmp;
	tmp = *root;
	*root = (*root)->next;
	(*root)->prev = NULL;
	return (tmp);
}