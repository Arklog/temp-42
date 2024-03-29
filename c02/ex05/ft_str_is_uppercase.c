/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:00:14 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/12 12:02:24 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	a;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (!(a >= 65 && a <= 90))
			return (0);
		++i;
	}
	return (1);
}
