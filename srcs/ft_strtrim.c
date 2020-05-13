/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 05:47:02 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 04:49:13 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			setchecker(char const *s1, char const *set, size_t brd, int sg)
{
	int		check;
	int		i;

	check = 1;
	i = 0;
	while (check)
	{
		check = 0;
		i = 0;
		while (set[i] != '\0')
		{
			if (set[i] == s1[brd])
				check = 1;
			i++;
		}
		if (check)
			brd += sg;
	}
	return (brd);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	start = setchecker(s1, set, start, 1);
	end = setchecker(s1, set, end, -1) + 1;
	if (end < start)
	{
		if (!(dst = (char *)malloc(sizeof(char))))
			return (0);
	}
	else
	{
		if (!(dst = (char *)malloc(sizeof(char) * (end - start + 1))))
			return (0);
		ft_strlcpy(dst, s1 + start, end - start + 1);
	}
	return (dst);
}
