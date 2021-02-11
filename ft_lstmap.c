/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor <mpacor@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:30:36 by mpacor            #+#    #+#             */
/*   Updated: 2021/02/11 18:37:14 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list **tmp;
	t_list *def;

	def = NULL;
	tmp = &def;
	while (lst)
	{
		*tmp = NULL;
		if (!(*tmp = (*f)(lst)))
			return (NULL);
		tmp = &((*tmp)->next);
		lst = lst->next;
	}
	return (def);
}
