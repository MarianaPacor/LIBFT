/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:32:02 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/13 19:38:39 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dst;

	p_src = (const unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (p_src < p_dst)
	{
		p_src += len - 1;
		p_dst += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
