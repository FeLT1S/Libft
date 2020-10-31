/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdelroot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:45:16 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:52:33 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsdelroot(t_dls *node)
{
	t_dls	*tmp;

	while (node->prev)
		node = node->prev;
	tmp = node->next;
	tmp->prev = NULL;
	free(node);
	return (tmp);
}