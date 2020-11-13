/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:12:22 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/12 21:12:27 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	strlen;

	if (!s || !(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ptr[0] = '\0';
	strlen = ft_strlen(s);
	if (start > strlen)
		start = strlen;
	if (start + len > strlen)
		len = strlen - start;
	ptr[len] = '\0';
	while (len > 0)
	{
		ptr[len - 1] = ((char *)s)[start + len - 1];
		len--;
	}
	return (ptr);
}
