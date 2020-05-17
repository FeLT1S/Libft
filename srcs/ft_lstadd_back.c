/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 09:39:09 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 00:28:18 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlst;

	newlst = *lst;
	if (*lst)
	{
		while (newlst->next != NULL)
			newlst = newlst->next;
		newlst->next = new;
	}
	else
		*lst = new;
}
