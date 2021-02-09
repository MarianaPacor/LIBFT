/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:33:32 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/09 21:35:40 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		src[i] = dest[i];
		i++;
	}
	while (dest[i] < dest[size])
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}
