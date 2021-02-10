/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:32:02 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/10 21:36:48 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	index;

	dest = (char *)dst;
	source = (char *)src;
	index = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (source < dest)
	{
		while (++index <= len)
			dest[len - index] = source[len - index];
	}
	else
		while (len > 0)
		{
			*dest = *source;
			dest++;
			source++;
			len--;
		}
	return (dst);
}
