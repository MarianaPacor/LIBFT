/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:30:36 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/13 22:06:10 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*ans;

	if (lst == NULL || f == NULL)
		return (NULL);
	ans = NULL;
	while (lst != NULL)
	{
		aux = ft_lstnew((*f)(lst->content));
		if (!(aux))
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, aux);
		lst = lst->next;
	}
	return (ans);
}
