/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:59:30 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:07:23 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H
# include "include/types.h"
# include "include/check.h"

int	ft_solve(struct s_data data, t_size_t x);
/**
 * Check if current position is valid in column
 *
 * @param data
 * @param pos	Position to check
 *
 * @return 1 if true, 0 else
 */
int	ft_check_col_top(struct s_data data, t_size_t pos);
int	ft_check_col_bottom(struct s_data data, t_size_t pos);

/**
 * Get value at given position
 *
 * @param data
 * @param pos	Position of value
 */
int	ft_get_value(struct s_data data, t_size_t column, t_size_t row);

/**
 * Get parameter of row
 *
 * @param data
 * @param pos	Current position
 * @param top	Require top row
 *
 * @return int	Return the value of the top row if top is true else
 *				return the value of the bottom one
 */
int	ft_get_col_param(struct s_data data, t_size_t pos, t_bool top);

/**
 * Get parameter of column
 *
 * @param data
 * @param pos	Current position
 * @param left	Require left column
 *
 * @return int	Return the value of the left column if top is true else
 *				return the value of the right one
 */
int	ft_get_row_param(struct s_data data, t_size_t pos, t_bool left);

#endif
