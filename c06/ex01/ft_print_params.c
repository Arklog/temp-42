/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:17:55 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/18 04:21:43 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write (1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
