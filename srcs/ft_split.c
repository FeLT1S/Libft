/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:43:45 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 03:08:15 by jiandre          ###   ########.fr       */
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
	char const	*d;
	char const	*dtemp;

	d = s;
	while (words--)
	{
		while (*d == c)
			d++;
		dtemp = d;
		d = ft_strchr(d, c);
		if (d)
			wordlen = d - dtemp + 1;
		if (!d)
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
