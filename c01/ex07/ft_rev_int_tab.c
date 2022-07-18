/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:17:04 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/08 00:17:29 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n2;
	int	tmp;

	if (tab == 0 || size <= 1)
		return ;
	n2 = size / 2;
	i = 0;
	while (i < n2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = tmp;
		++i;
	}
}
