/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:31:53 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/10 17:24:02 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;

	i = 0;
	des = dest;
	sr = src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < (int)n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
