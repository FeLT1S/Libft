/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:15:22 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/05 16:22:40 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				dlst_size(t_node **root)
{
	size_t len;
	t_node *tmp;

	if (!*root)
		return (0);
	len = 1;
	tmp = *root;
	while (tmp->next)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}