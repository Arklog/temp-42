/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:21:18 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/13 14:21:26 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char a)
{
	const char	*buff = "0123456789abcdef";
	char		b[2];

	b[0] = buff[(a / 16) % 16];
	b[1] = buff[a % 16];
	write (1, b, 2);
}

void	ft_print_addr(void	*addr)
{
	char			*ptr;
	unsigned int	i;

	ptr = (char*)(&addr);
	i = 0;
	while (i < sizeof(void*))
		ft_print_hex(ptr[sizeof(void*) - 1 - i++]);
}
