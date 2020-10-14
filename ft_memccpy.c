/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:36:23 by mpacor            #+#    #+#             */
/*   Updated: 2020/10/14 14:36:25 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	cur;

	if (s1 == s2 || n == 0)
		return (s1);
	cur = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
			return (c1 + cur + 1);
		cur++;
	}
	return (NULL);
}