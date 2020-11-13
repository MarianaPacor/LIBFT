/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:17:14 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/12 21:17:18 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
		return ;
	}
	else
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}