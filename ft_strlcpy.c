/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:14:46 by mpacor            #+#    #+#             */
/*   Updated: 2020/08/31 14:14:54 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		src[i] = dest[i];
		i++;
	}
	while (dest[i] < dest[size])
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}
