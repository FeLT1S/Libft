/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 04:22:41 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/04 23:21:43 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	const unsigned long	*long_ch;
	const unsigned long	long_c = (unsigned long)c * LOWBITS;

	ch = s;
	while (((unsigned long)ch & (sizeof(long) - 1)) != 0 && n--)
	{
		if (*ch == '\0')
			return ((void *)ch);
		ch++;
	}
	long_ch = (unsigned long*)ch;
	while (((((*long_ch ^ long_c) - LOWBITS) & ~(*long_ch ^ long_c)
	& HIGHBITS) == 0) && (n > sizeof(long)))
	{
		n = n - sizeof(long);
		long_ch++;
	}
	ch = (unsigned char*)long_ch;
	while (*ch != (char)c && n--)
		ch++;
	if (n + 1)
		return ((void *)ch);
	return (0);
}

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = ft_memchr (src, '', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

   return 0;
}