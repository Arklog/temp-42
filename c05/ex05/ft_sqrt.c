/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:31:07 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/14 16:31:10 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0)
		return 0;
	if (!nb && !power)
		return 1;
	i = 1;
	while (power)
	{
		i *= nb;
		--power;
	}
	return (i);
}

int	ft_sqrt(int	nb)
{
	int	i;

	i = 1;
	while (ft_iterative_power(i, 2) <= nb)
	{
		if(nb == ft_iterative_power(i, 2))
			return (i);
		++i;
	}
	return (0);
}
