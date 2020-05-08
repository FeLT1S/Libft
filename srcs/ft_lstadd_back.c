/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 09:39:09 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 10:17:03 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlst;

	if (!lst)
		return ;
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