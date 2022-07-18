/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:33:38 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/07 01:17:35 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct s_numbers
{
	char	a;
	char	b;
	char	c;
	char	d;
};

void	write_cmb(int first, struct s_numbers n)
{
	if (!first)
		write (1, ", ", 2);
	write (1, &n.a, 1);
	write (1, &n.b, 1);
	write (1, " ", 1);
	write (1, &n.c, 1);
	write (1, &n.d, 1);
}

void	jevite_des_lignes(int *first, struct s_numbers *n)
{
	while (n->d <= '9')
	{
		write_cmb (*first, *n);
		*first = 0;
		++n->d;
	}
}

void	ft_print_comb2(void)
{
	int					first;
	struct s_numbers	n;

	first = 1;
	n.a = '0';
	while (n.a <= '9')
	{
		n.b = '0';
		while (n.b <= '9')
		{
			n.c = '0';
			while (n.c <= '9')
			{
				n.d = '0';
				jevite_des_lignes (&first, &n);
				++n.c;
			}
			++n.b;
		}
		++n.a;
	}
}
