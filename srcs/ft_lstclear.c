/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 10:45:54 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 00:26:00 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*it;
	t_list	*tmp;

	if (!lst)
		return ;
	it = *lst;
	while (it)
	{
		tmp = it;
		it = it->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}
