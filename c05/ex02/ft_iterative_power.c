/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:44:52 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/14 15:44:56 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0)
		return (0);
	if (!nb && !power)
		return (1);
	i = 1;
	while (power)
	{
		i *= nb;
		--power;
	}
	return (i);
}
