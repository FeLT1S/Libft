/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 09:24:42 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/11 17:58:08 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	t_list	*newlst;
	int		size;

	if (!lst)
		return (0);
	newlst = lst;
	size = 0;
	while (newlst->next != NULL)
	{
		size++;
		newlst = newlst->next;
	}
	return (size + 1);
}
