/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:24:10 by mpacor            #+#    #+#             */
/*   Updated: 2020/08/31 15:24:17 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_src = 0;
	len_dest = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	i = len_dest;
	while (size && src[i - len_dest] != '\0' && i < (size - 1))
	{
		dest[i] = src[i - len_dest];
		i++;
	}
	if (len_dest < size)
		dest[i] = '\0';
	return (len_dest + len_src);
}
