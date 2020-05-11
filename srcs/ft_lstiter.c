/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 11:51:13 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/11 17:54:54 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*newlst;

	if (!lst || !f)
		return ;
	newlst = lst;
	while (newlst)
	{
		(*f)(newlst->content);
		newlst = newlst->next;
	}
}
