/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:47:38 by lbrochar          #+#    #+#             */
/*   Updated: 2022/07/17 22:52:24 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "include/functions_init.h"
#include "include/types.h"
#include "include/algo.h"
#include "include/aff.h"
#include "include/memfunc.h"

int	main(int argc, char **argv)
{
	struct s_data	data;

	if (!ft_check_argv(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_init_data(argv[1], &data);
	if (data.ncol == 0 || data.ncol < 4 || data.ncol > 9)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!ft_solve(data, 0))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_print_result(&data, 1);
	ft_free_data(&data);
	return (0);
}
