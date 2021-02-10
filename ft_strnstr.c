/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:18 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/10 21:27:29 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!haystack && !len)
		return (NULL);
	i = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
