/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:34:18 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/10 21:38:09 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_strings(size_t i1, size_t len, char *s1, char *s2)
{
	size_t		remember;
	size_t		i2;
	int			flag;

	i2 = 0;
	remember = i1;
	while ((s2[i2]) && s2[i2] == s1[i1])
	{
		flag = 1;
		i1++;
		i2++;
		if ((s2[i2] != s1[i1] && s2[i2] != '\0') || remember + i2 > len)
			flag = 0;
	}
	return (flag);
}

char		*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t		index1;
	size_t		remember;
	size_t		flag;

	index1 = 0;
	if (!str1)
		return (NULL);
	if (str2 == NULL || ft_strlen(str2) == 0)
		return ((char *)str1);
	while (str1[index1] && index1 < len)
	{
		if (str1[index1] == str2[0])
		{
			remember = index1;
			flag = check_strings(index1, len, (char *)str1, (char *)str2);
			if (flag == 1)
				return ((char *)&str1[remember]);
		}
		index1++;
	}
	return (NULL);
}