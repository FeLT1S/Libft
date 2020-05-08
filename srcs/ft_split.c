/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:43:45 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 03:12:57 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long			ft_words(char const *s, char c, long words)
{
	const char *d;

	d = s;
	while (d)
	{
		while (*d == c)
			d++;
		if (*d == '\0')
			return (words);
		d = strchr(d, c);
		words++;
	}
	return (words);
}

char			**ft_wordsplit(size_t words, char c, char const *s, char **out)
{
	size_t		wordlen;
	char const	*tmps;
	char const	*dtemp;

	tmps = s;
	while (words--)
	{
		while (*tmps == c)
			tmps++;
		dtemp = tmps;
		tmps = ft_strchr(tmps, c);
		if (tmps)
			wordlen = tmps - dtemp + 1;
		if (!tmps)
			wordlen = ft_strchr(dtemp, '\0') - dtemp + 1;
		*out = (char *)malloc(sizeof(char) * wordlen);
		if (!out)
			return (0);
		ft_strlcpy(*out, dtemp, wordlen);
		out++;
	}
}

char			**ft_split(char const *s, char c)
{
	char		**out;
	size_t		words;
	char		**tmpout;

	words = 0;
	words = ft_words(s, c, words);
	out = (char **)malloc(sizeof(char*) * (words + 1));
	if (!out)
		return (0);
	tmpout = out;
	ft_wordsplit(words, c, s, out);
	return (tmpout);
}
