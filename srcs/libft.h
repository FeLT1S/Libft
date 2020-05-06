/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 20:44:17 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/06 02:39:45 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

int						ft_atoi(const char *ch);
void					ft_bzero(void *s, size_t n);
void					*ft_memccpy(void *dst, const void *src, int c, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t n);
void					*ft_memset(void *s, int c, size_t n);
size_t					ft_strlen(const char *s);

#endif