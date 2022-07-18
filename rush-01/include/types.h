/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:07:26 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:02:57 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef unsigned int	t_size_t;

typedef unsigned char	t_bool;

struct s_data {
	int			**tab;
	int			*argv;
	t_size_t	tablen;
	t_size_t	argvlen;
	t_size_t	ncol;
};

#endif
