/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_push_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:12:05 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/13 02:29:30 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				dlst_push_front(t_node **root, t_node *new_elem)
{

	new_elem->next = *root;
	(*root)->prev = new_elem;
	*root = new_elem;
}