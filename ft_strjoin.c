/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:12:45 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/12 21:12:48 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	if (!(ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i <= (len_s1 + len_s2))
	{
		ptr[i] = s2[i - len_s1];
		i++;
	}
	return (ptr);
}