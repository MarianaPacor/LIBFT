/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:14:48 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/12 21:14:51 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen((char *)s);
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (i >= 0)
	{
		ptr[i] = f((unsigned int)i, (char)s[i]);
		i--;
	}
	return (ptr);
}

