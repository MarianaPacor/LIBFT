/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:13:26 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/12 21:13:30 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_rm_beginning(char *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int		ft_rm_end(char *s1, char const *set)
{
	int	i;
	int j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0 && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = ft_rm_beginning((char *)s1, set);
	end = ft_rm_end((char *)s1, set);
	if (end >= start)
		len = end - start + 1;
	else
		len = 0;
	ptr = ft_substr(s1, (unsigned int)start, (size_t)len);
	return (ptr);
}