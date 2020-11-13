/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:30:02 by mpacor            #+#    #+#             */
/*   Updated: 2020/11/13 11:30:05 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp_n;
	t_list *temp;

	temp = *lst;
	while (temp)
	{
		temp_n = temp->next;
		del(temp->content);
		free(temp);
		temp = temp_n;
	}
	*lst = NULL;
}