/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:18 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/11 18:35:24 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char*)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i] && i < len)
		{
			i++;
			j++;
			if (!to_find[j])
				return ((char*)&str[i - j]);
			if (to_find[j] != str[i])
			{
				i = i - j;
				j = 0;
				break ;
			}
		}
		i++;
	}
	return (NULL);
}
