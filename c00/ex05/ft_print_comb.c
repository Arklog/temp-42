/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:24:37 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/07 20:31:38 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int *first, int i, int j, int k)
{
	if (!(*first))
		write(1, ", ", 2);
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	first = 0;
}

void	ft_print_comb(void)
{
	int	first;
	int	i;
	int	j;
	int	k;

	first = 1;
	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				write_comb (&first, i, j, k);
				++k;
			}
			++j;
		}
		++i;
	}
}
