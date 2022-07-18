/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memfunc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:13:16 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/17 22:19:41 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/memfunc.h"

void	ft_memset(char *ptr, char val, t_size_t len)
{
	t_size_t	i;

	i = 0;
	while (i < len)
		ptr[i++] = val;
}

void	ft_init_data(char *argv, struct s_data *data)
{
	t_size_t	i;

	data->argvlen = ft_argvlen(argv);
	data->ncol = ft_sqrt(data->argvlen);
	data->tablen = data->ncol * data->ncol;
	data->argv = ft_put_argvint(argv, data->argvlen);
	data->tab = malloc(sizeof(int *) * data->ncol);
	i = 0;
	while (i < data->ncol)
	{
		data->tab[i] = malloc(sizeof(int) * data->ncol);
		++i;
	}
	if (!data->argv || !data->tab)
		return ;
}

void	ft_free_data(struct s_data *data)
{
	t_size_t	i;

	i = 0;
	while (i < data->ncol)
		free(data->tab[i++]);
	free(data->tab);
	free(data->argv);
}
