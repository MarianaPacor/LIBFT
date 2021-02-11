/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:32:02 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/11 18:32:02 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *aux_dst;
	char *aux_src;

	aux_dst = dst;
	aux_src = (char *)src;
	if (dst > src)
	{
		aux_dst = aux_dst + len - 1;
		aux_src = aux_src + len - 1;
		while (len >= 1)
		{
			*aux_dst = *aux_src;
			aux_dst--;
			aux_src--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
