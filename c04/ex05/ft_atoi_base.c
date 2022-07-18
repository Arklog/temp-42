/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:10:50 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/18 18:22:25 by pducloux         ###   ########.fr       */
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

int	ft_base_is_valid(char *base, int blen)
{
	int	i;
	int	j;

	if (blen <= 1)
		return (0);
	i = 0;
	while (i < blen - 1)
	{
		j = i + 1;
		while (j < blen)
		{
			if (base[i] == base[j])
				return (0);
			else if (base[j] == '-' || base[j] == '+')
				return (0);
			++j;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		++i;
	}
	return (1);
}

int	base_value(char a, char *base)
{
	int i;

	i = 0;
	while (base[i] != a)
		++i;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	negative;
	int	nlen;
	int blen;

	blen = 0;
	while(base[blen])
		++blen;
	if (!ft_base_is_valid(base, blen))
		return (0);
	result = 0;
	negative = 0;
	while (*str && *str == ' ')
		++str;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			negative = !negative;
	nlen = ft_ndigits(str);
	while (nlen)
		result += base_value(*str++, base) * ft_pow(blen, nlen--);
	if (negative)
		return (-result);
	return (result);
}
