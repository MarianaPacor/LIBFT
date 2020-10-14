/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpacor </var/mail/mpacor>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:16:03 by mpacor            #+#    #+#             */
/*   Updated: 2020/10/14 14:16:06 by mpacor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TESTS_H
# define FT_TESTS_H

typedef enum		e_bool
{
	false,
	true
}					t_bool;

t_bool	ft_isspace(int c);
t_bool	ft_isalnum(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isprint(int c);

#endif