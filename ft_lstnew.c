/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:32:37 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/13 11:32:39 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	if (!(ptr = (t_list *)malloc(1 * sizeof(t_list *))))
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}