/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 10:45:54 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/11 17:05:53 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	newlst = *lst;
	while (newlst)
	{
		tmp = newlst;
		newlst = newlst->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}
