/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:18:16 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/11 21:42:14 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (str == 0)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		++i;
	}
}
