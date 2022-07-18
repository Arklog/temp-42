/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:11:39 by zachaban          #+#    #+#             */
/*   Updated: 2022/07/17 21:59:03 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFF_H
# define AFF_H
# include <unistd.h>
# include "include/types.h"
# include "include/aff.h"

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_print_result(struct s_data *data, t_bool newline);

void	ft_put_decimal(int a);

#endif
