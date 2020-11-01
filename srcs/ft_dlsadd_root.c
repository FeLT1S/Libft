/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsadd_root.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:01:20 by jiandre           #+#    #+#             */
/*   Updated: 2020/11/01 18:22:06 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dls	*ft_dlsadd_root(t_dls **root, t_dls *node, void *cont)
{
	if (!node)
		node = *root;
	while (node->prev)
		node = node->prev;
	if (root)
	{
		*root = ft_dlsadd_back(node, cont);
		return (*root);
	}
	else
		node = ft_dlsadd_back(node, cont);
	return (node);
}
