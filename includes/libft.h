/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:15:17 by mpacor            #+#    #+#             */
/*   Updated: 2020/10/14 14:15:24 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include "ft_tests.h"
#include "ft_puts.h"
#include "ft_mems.h"
#include "ft_strs.h"
// #include "ft_glsts.h"
// #include "ft_t_strs.h"
// #include "ft_lsts.h"

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

int		ft_tolower(int c);
int		ft_toupper(int c);

// int		ft_getnextline(int const fd, t_str **line);

#endif