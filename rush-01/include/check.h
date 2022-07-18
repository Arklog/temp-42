/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:03:38 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:08:13 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "include/algo.h"
# include "include/types.h"

/**
 * Check if current position is valid
 *
 * @param data
 * @param pos	Position to check
 *
 * @return 1 if position is valid, 0 else
 */
int	ft_check(struct s_data data, t_size_t pos);

int	ft_in_row(struct s_data data, t_size_t pos);
int	ft_in_col(struct s_data data, t_size_t pos);

/**
 * Check if current position is valid in row
 *
 * @param data
 * @param pos	Position to check
 *
 * @return 1 if true, 0 else
 */
int	ft_check_row_left(struct s_data data, t_size_t pos);
int	ft_check_row_right(struct s_data data, t_size_t pos);

#endif
