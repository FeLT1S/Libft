/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:43:45 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/18 13:35:54 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		ft_words(char const *s, char c, long words)
{
	while (s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (words);
		s = ft_strchr(s, c);
		words++;
	}
	return (words);
}

static void		splitfree(char **out)
{
	size_t		i;

	i = 0;
	while (out[i])
	{
		free(out[i]);
		i++;
	}
	free(out);
}

static void		ft_wordsplit(size_t words, char c, char const *s, char **out)
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
			splitfree(tmpout);
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

	words = 0;
	words = ft_words(s, c, words);
	out = (char **)malloc(sizeof(char*) * (words + 1));
	if (!out)
		return (0);
	ft_wordsplit(words, c, s, out);
	if (!out)
		return (0);
	return (out);
}
