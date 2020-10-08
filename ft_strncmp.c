/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:59:22 by mpacor            #+#    #+#             */
/*   Updated: 2020/08/31 14:59:29 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (i < n && !diff && s1[i] != '\0' && s2[i] != '\0')
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
