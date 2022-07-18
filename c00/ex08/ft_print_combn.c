/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:08:37 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/07 17:17:31 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_negative(int n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int		decimal;
	int		n;
	char	a;

	nb = is_negative (nb);
	while (nb >= 10)
	{
		decimal = 1;
		while (nb / decimal >= 10)
		{
			decimal *= 10;
		}
		n = nb / decimal;
		a = n + 48;
		write (1, &a, 1);
		nb -= n * decimal;
	}
	a = nb + 48;
	write (1, &a, 1);
}

void	print_trailing_zeros(int nnumbers, int val)
{
	int	decimal;
	int	tmp;

	decimal = 1;
	while (val >= 10)
	{
		decimal++;
		val /= 10;
	}
	tmp = nnumbers - decimal;
	while (tmp > 0)
	{
		write (1, "0", 1);
		--tmp;
	}
}

void	print_n(int nnumbers, int val, int first)
{
	if (!first)
	{
		write (1, ", ", 2);
	}
	print_trailing_zeros(nnumbers, val);
	ft_putnbr(val);
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;
	int	first;

	if (n <= 0)
		return ;
	i = 0;
	max = 1;
	while (i < n)
	{
		max *= 10;
		++i;
	}
	first = 1;
	i = 0;
	while (i < max)
	{
		print_n(n, i, first);
		first = 0;
		++i;
	}
}
