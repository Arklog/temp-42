/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:08:45 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:17:50 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/check.h"

int	ft_check(struct s_data data, t_size_t pos)
{
	int	top;
	int	bottom;
	int	left;
	int	right;

	if (ft_in_row(data, pos) || ft_in_col(data, pos))
		return (0);
	top = ft_check_col_top(data, pos);
	bottom = ft_check_col_bottom(data, pos);
	left = ft_check_row_left(data, pos);
	right = ft_check_row_right(data, pos);
	return (top && bottom && right && left);
}

int	ft_in_row(struct s_data data, t_size_t pos)
{
	int	i;
	int	value;

	value = data.tab[pos % data.ncol][pos / data.ncol];
	i = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[i][pos / data.ncol] == value
				&& (t_size_t)i != (pos % data.ncol))
		{
			return (1);
		}
		++i;
	}
	return (0);
}

int	ft_in_col(struct s_data data, t_size_t pos)
{
	int	i;
	int	value;

	value = data.tab[pos % data.ncol][pos / data.ncol];
	i = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[pos % data.ncol][i] == value
				&& (t_size_t)i != (pos / data.ncol))
		{
			return (1);
		}
		++i;
	}
	return (0);
}

int	ft_check_row_left(struct s_data data, t_size_t pos)
{
	int	i;
	int	n;
	int	left;
	int	max;

	if (pos % data.ncol != data.ncol - 1)
		return (1);
	left = ft_get_row_param(data, pos, 1);
	i = 0;
	n = 0;
	max = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[i][pos / data.ncol] > max)
		{
			max = data.tab[i][pos / data.ncol];
			++n;
		}
		++i;
	}
	if (n != left)
		return (0);
	return (1);
}

int	ft_check_row_right(struct s_data data, t_size_t pos)
{
	int	i;
	int	n;
	int	max;
	int	right;

	if (pos % data.ncol != data.ncol - 1)
		return (1);
	right = ft_get_row_param(data, pos, 0);
	i = 0;
	n = 0;
	max = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[data.ncol - i - 1][pos / data.ncol] > max)
		{
			max = data.tab[data.ncol - i - 1][pos / data.ncol];
			++n;
		}
		++i;
	}
	if (n != right)
		return (0);
	return (1);
}
