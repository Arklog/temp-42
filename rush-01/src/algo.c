/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:51:41 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:15:22 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/algo.h"
#include "include/aff.h"

int	ft_solve(struct s_data data, t_size_t pos)
{
	t_size_t	i;
	t_bool		check;
	t_bool		solve;

	i = 1;
	solve = 0;
	while (i <= data.ncol && !solve)
	{
		data.tab[pos % data.ncol][pos / data.ncol] = i;
		check = ft_check(data, pos);
		if (check && pos < data.tablen - 1)
		{
			solve = ft_solve(data, pos + 1);
		}
		else if (check && pos == data.tablen - 1)
		{
			return (1);
		}
		++i;
	}
	if (!solve)
		data.tab[pos % data.ncol][pos / data.ncol] = 0;
	return (solve);
}

int	ft_check_col_top(struct s_data data, t_size_t pos)
{
	int	i;
	int	n;
	int	max;
	int	top;

	if (pos / data.ncol != data.ncol - 1)
		return (1);
	top = ft_get_col_param(data, pos, 1);
	i = 0;
	n = 0;
	max = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[pos % data.ncol][i] > max)
		{
			max = data.tab[pos % data.ncol][i];
			++n;
		}
		++i;
	}
	if (n != top)
	{
		return (0);
	}
	return (1);
}

int	ft_check_col_bottom(struct s_data data, t_size_t pos)
{
	int	i;
	int	n;
	int	max;
	int	bottom;

	if (pos / data.ncol != data.ncol - 1)
		return (1);
	bottom = ft_get_col_param(data, pos, 0);
	i = 0;
	n = 0;
	max = 0;
	while ((t_size_t)i < data.ncol)
	{
		if (data.tab[pos % data.ncol][data.ncol - i - 1] > max)
		{
			max = data.tab[pos % data.ncol][data.ncol - i - 1];
			++n;
		}
		++i;
	}
	if (n != bottom)
	{
		return (0);
	}
	return (1);
}

int	ft_get_row_param(struct s_data data, t_size_t pos, t_bool left)
{
	if (left)
		return (data.argv[(pos / data.ncol) + data.ncol * 2]);
	else
		return (data.argv[(pos / data.ncol) + (data.ncol * 3)]);
}

int	ft_get_col_param(struct s_data data, t_size_t pos, t_bool top)
{
	if (top)
		return (data.argv[pos % data.ncol]);
	else
		return (data.argv[(pos % data.ncol) + data.ncol]);
}
