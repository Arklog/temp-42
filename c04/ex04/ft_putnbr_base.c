/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 03:38:22 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/15 07:47:20 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (i < ft_strlen(base) - 1)
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			else if (base[j] == '-' || base[j] == '+')
				return (0);
			++j;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		++i;
	}
	return (1);
}

void	ft_putnbr_base(int n, char *alphabet)
{
	int		base;
	char	a;

	if (!ft_base_is_valid(alphabet))
		return ;
	base = ft_strlen(alphabet);
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n >= base)
		ft_putnbr_base(n / base, alphabet);
	a = alphabet[n % base];
	write (1, &a, 1);
}
