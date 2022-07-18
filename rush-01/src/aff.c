/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachaban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:10:11 by zachaban          #+#    #+#             */
/*   Updated: 2022/07/17 21:51:13 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/aff.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_rush01_aff(int ***table, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			ft_putchar(table[0][i][j] + '0');
			if (j != size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_put_decimal(int a)
{
	char	b;

	b = a + '0';
	if (a > 9 || a < 0)
		return ;
	else
		write (1, &b, 1);
}

void	ft_print_result(struct s_data *data, t_bool newline)
{
	unsigned int	i;

	i = 0;
	while (i < data->tablen)
	{
		if (i != 0 && (i % data->ncol) == 0)
			ft_putchar('\n');
		ft_put_decimal(data->tab[i % data->ncol][i / data->ncol]);
		++i;
	}
	if (newline)
		ft_putstr("\n");
}
