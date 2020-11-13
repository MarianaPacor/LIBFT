/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:32:14 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/13 11:32:16 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return (NULL);
	if (!(ptr = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&ptr, del);
		return (NULL);
	}
	ptr->next = ft_lstmap(lst->next, f, del);
	return (ptr);
}