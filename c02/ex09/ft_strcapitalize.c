/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:42:11 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/14 22:21:16 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char a)
{
	if (!(a >= 'A' && a <= 'Z') && !(a >= 'a' && a <= 'z')
		&& !(a >= '0' && a <= '9'))
		return (0);
	return (1);
}

unsigned int	ft_wordlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (ft_str_is_alphanum(str[i]))
		++i;
	return (i);
}

void	ft_capitalize_word(char *str, unsigned int n)
{
	char			a;
	unsigned int	i;

	if (*str >= 'a' && *str <= 'z')
		*str = (*str) - 32;
	i = 1;
	while (i < n)
	{
		a = str[i];
		if (a >= 'A' && a <= 'Z')
			str[i] += 32;
		++i;
	}
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	n;
	char			a;

	i = 0;
	a = str[i];
	while (a != '\0')
	{
		if (ft_str_is_alphanum(a))
		{
			n = ft_wordlen(str + i);
			ft_capitalize_word(str + i, n);
			i += n;
		}
		else
			++i;
		a = str[i];
	}
	return (str);
}
