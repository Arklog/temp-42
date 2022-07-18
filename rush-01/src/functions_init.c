/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:23:52 by lbrochar          #+#    #+#             */
/*   Updated: 2022/07/17 23:00:33 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/functions_init.h"

int	ft_sqrt(int nb)
{
	int	test;
	int	i;

	test = 0;
	i = 1;
	while (i <= 46340)
	{
		test = (i * i) + ((2 * i) + 1);
		i++;
		if (test == nb)
			return (i);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	*ft_put_argvint(char *argv, t_size_t len)
{
	int	i;
	int	j;
	int	*arr;

	arr = malloc(sizeof(int) * len);
	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			arr[j] = argv[i] - '0';
			j++;
		}
		i++;
	}
	return (arr);
}

int	ft_argvlen(char *argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			j++;
		i++;
	}
	return (j);
}

int	ft_check_argv(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) < 31 || ft_strlen(argv[1]) > 71)
		return (0);
	while (argv[1][i] != '\0')
	{
		if (((i % 2) == 0) && !(argv[1][i] > '0' && argv[1][i] <= '9'))
			return (0);
		else if (((i % 2) == 1) && !(argv[1][i] == ' '))
			return (0);
		i++;
	}
	return (1);
}
