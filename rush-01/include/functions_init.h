/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_init.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:01:29 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:10:09 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_INIT_H
# define FUNCTIONS_INIT_H
# include <stdlib.h>
# include "include/aff.h"
# include "include/types.h"

int		ft_check_argv(int argc, char **argv);
int		ft_argvlen(char *argv);
int		*ft_put_argvint(char *argv, t_size_t len);
int		ft_strlen(char *str);
int		ft_sqrt(int nb);

#endif
