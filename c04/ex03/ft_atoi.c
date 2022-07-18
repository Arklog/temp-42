/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:56:40 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/18 15:26:59 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int n, int pow)
{
	int	i;
	int	retv;

	i = 1;
	retv = 1;
	while (i < pow)
	{
		retv *= n;
		++i;
	}
	return (retv);
}

int	ft_ndigits(char *str)
{
	char	*s;

	s = str;
	while (*str >= '0' && *str <= '9')
		++str;
	return (str - s);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;
	int	nlen;

	result = 0;
	negative = 0;
	while (*str && *str == ' ')
		++str;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			negative = !negative;
	nlen = ft_ndigits(str);
	while (nlen)
		result += (*str++ - '0') * ft_pow(10, nlen--);
	if (negative)
		return (-result);
	return (result);
}
