/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:25:18 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/13 14:25:20 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j])
	{
		(dest + i)[j] = src[j];
		++j;
	}
	dest[i + j] = 0;
	return (dest);
}
