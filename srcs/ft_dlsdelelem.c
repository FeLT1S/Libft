/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdelelem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <kostbg1@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:31:13 by jiandre           #+#    #+#             */
/*   Updated: 2020/10/31 17:45:34 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsdelelem(t_dls *node)
{
	t_dls	*prev;
	t_dls	*next;

	prev = node->prev;
	next = node->next;
	if (prev)
		prev->next = node->next;
	if (next)
		next->prev = node->prev;
	free(node);
	return (prev);
}
