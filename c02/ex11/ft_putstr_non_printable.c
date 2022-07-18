/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:46:22 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/12 14:55:48 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char str)
{
	const char	*buff = "0123456789abcdef";
	char		a[3];

	a[0] = '\\';
	a[1] = buff[(str / 16) % 16];
	a[2] = buff[str % 16];
	write (1, a, 3);
}

int	ft_is_printable(char a)
{
	return (a >= 32 && a <= 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			a;

	i = 0;
	a = str[i];
	while (a)
	{
		if (ft_is_printable(a))
			write(1, &a, 1);
		else
			ft_print_hex(a);
		a = str[++i];
	}
}
