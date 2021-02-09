/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:29:18 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/09 21:35:40 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int i;

	i = 0;
	if (n == 0)
	{
		i++;
		return (i);
	}
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		j;

	i = ft_len(n);
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i] = '\0';
	i--;
	j = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_substr("-2147483648", 0, 11));
		n = n * (-1);
		ptr[0] = '-';
		j++;
	}
	while (i >= j)
	{
		ptr[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (ptr);
}