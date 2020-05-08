/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 07:25:17 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 08:09:25 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	symb;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n / -1, fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		symb = (n % 10) + '0';
		write(fd, &symb, 1);
	}
	if (n >= 0 && n <= 9)
	{
		symb = n + '0';
		write(fd, &symb, 1);
	}
}
