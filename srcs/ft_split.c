/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:43:45 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 02:48:29 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long ft_words(char const *s, char c, long words)
{
    const char *d;

    d = s;
    while (d)
    {
        while (*d == c)
          d++;
		if (*d == '\0')
			return(words);
        d = strchr(d, c);
        words++;
    }
    return (words);
}

char    **ft_split(char const *s, char c)
{
    char **out;
    char const *d;
    char const *dtemp;
    long words;
    long wordlen;
	char **tmpout;

    d = s;
	words = 0;
    words = ft_words(s, c, words);
    out = (char **)malloc(sizeof(char*) * (words + 1));
    if(!out)
      return (0);
	tmpout = out;
    while (words--)
    {
      while (*d == c)
        d++;
      dtemp = d;
      d = ft_strchr(d,c);
      if (d)
        wordlen = d - dtemp + 1;
      if (!d)
        wordlen = ft_strchr(dtemp,'\0') - dtemp + 1;
      *out = (char *)malloc(sizeof(char) * wordlen);
      if (!out)
        return (0);
      ft_strlcpy(*out,dtemp, wordlen);
      out++;
    }
    return (tmpout);
}