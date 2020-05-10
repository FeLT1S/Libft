/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:43:45 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/11 01:31:45 by jiandre          ###   ########.fr       */
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

void			splitfree(char **tmpout, char **out)
{
	while (tmpout != out)
	{
		free(*tmpout);
		tmpout++;
	}
	free(out);
}

void			ft_wordsplit(size_t words, char c, char const *s, char **out)
{
	size_t		wordlen;
	char		**tmpout;
	char const	*oldplc;

	tmpout = out;
	while (words--)
	{
		while (*s == c)
			s++;
		oldplc = s;
		s = ft_strchr(s, c);
		if (s)
			wordlen = s - oldplc + 1;
		if (!s)
			wordlen = ft_strchr(oldplc, '\0') - oldplc + 1;
		*out = (char *)malloc(sizeof(char) * wordlen);
		if (!out)
		{
			splitfree(tmpout, out);
			return ;
		}
		ft_strlcpy(*out, oldplc, wordlen);
		out++;
	}
	*out = 0;
}

char			**ft_split(char const *s, char c)
{
	char		**out;
	size_t		words;
	char		**tmpout;
	char const	*tmps;

	words = 0;
	words = ft_words(s, c, words);
	out = (char **)malloc(sizeof(char*) * (words + 1));
	if (!out)
		return (0);
	tmpout = out;
	tmps = s;
	ft_wordsplit(words, c, tmps, out);
	if (!tmpout)
		return (0);
	return (tmpout);
}
