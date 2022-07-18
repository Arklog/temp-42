/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memfunc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:11:06 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:18:42 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMFUNC_H
# define MEMFUNC_H
# include "include/types.h"
# include "include/functions_init.h"

void	ft_memset(char *ptr, char val, t_size_t len);
void	ft_init_data(char *argv, struct s_data *data);
void	ft_free_data(struct s_data *data);

#endif
