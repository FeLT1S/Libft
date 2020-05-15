/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 09:32:24 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/14 10:18:18 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nmb)
{
	int start;
	int end;

	start = 1;
	end = nmb / 2;
	while (start < end)
	{
	    if (((end + start) / 2) * ((end + start) / 2) == nmb)
	        return ((end + start) / 2);
	    else if (start + 2 == end || start + 1 == end)
	        return (start + 1);
		else if (((end + start) / 2) * ((end + start) / 2) > nmb)
			    end = (end + start) / 2;
		else if (((end + start) / 2) * ((end + start) / 2) < nmb)
			    start = (end + start) / 2;
	    
	}
	if (nmb == 1)
	    return (1);
	return (0);
}