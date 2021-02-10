/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:31:53 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/10 21:37:16 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (!num || destptr == srcptr)
		return (destptr);
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	while (num)
	{
		*dest++ = *src++;
		num--;
	}
	return (destptr);
}
