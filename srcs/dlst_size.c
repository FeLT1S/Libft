/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:15:22 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/14 16:43:06 by jiandre          ###   ########.fr       */
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
