/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:18 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/11 18:48:04 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s_big, const char *s_small, size_t len)
{
	size_t	len_small;

	if (!*s_small)
		return ((char *)s_big);
	len_small = ft_strlen(s_small);
	while (*s_big && len >= len_small)
	{
		if (*(s_big) == *s_small && !ft_memcmp(s_big, s_small, len_small))
			return ((char *)(s_big));
		s_big++;
		len--;
	}
	return (NULL);
}
