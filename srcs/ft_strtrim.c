/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 05:47:02 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/12 12:04:52 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			setchecker(char const *s1, char const *set, size_t start)
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
			if (set[i] == s1[start])
				check = 1;
			i++;
		}
		if (check)
			start++;
	}
	return (start);
}

int			setrchecker(char const *s1, char const *set, size_t finish)
{
	int		check;
	int		i;

	check = 1;
	i = 0;
	while (check)
	{
		i = 0;
		check = 0;
		while (set[i] != '\0')
		{
			if (set[i] == s1[finish])
				check = 1;
			i++;
		}
		if (check)
			finish--;
	}
	return (finish);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	start = setchecker(s1, set, start);
	end = setrchecker(s1, set, end) + 1;
	if (end < start)
	{
		if(!(dst = (char *)malloc(sizeof(char))))
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
