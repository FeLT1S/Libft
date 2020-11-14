/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:11:57 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/14 16:43:39 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				dlst_del(t_node **root, t_del_func deletor)
{
	t_node *tmp;

	while ((*root)->next)
	{
		tmp = (*root)->next;
		dlst_del_elem(*root, deletor);
		*root = tmp;
	}
	dlst_del_elem(*root, deletor);
	*root = NULL;
}
