/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:34:06 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/02 20:36:54 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node				*dlst_elem(void *content)
{
	t_node	*dls;

	if (!(dls = (t_node*)malloc(sizeof(t_node))))
		return (NULL);
	dls->content = content;
	dls->next = NULL;
	dls->prev = NULL;
	return (dls);
}