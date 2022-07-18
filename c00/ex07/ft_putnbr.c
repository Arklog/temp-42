/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:46:52 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/07 21:28:42 by pducloux         ###   ########.fr       */
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

int	get_pow(int n)
{
	int	decimal;

	decimal = 1;
	while (n / decimal)
	{
		decimal *= 10;
	}
	return (decimal);
}

void	ft_putnbr(int nb)
{
	int		decimal;
	int		n;
	char	a;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	nb = is_negative (nb);
	while (nb >= 10)
	{
		decimal = get_pow(nb);
		n = nb / decimal;
		a = n + 48;
		write (1, &a, 1);
		nb -= n * decimal;
	}
	a = nb + 48;
	write (1, &a, 1);
	write (1, "\n", 1);
}
