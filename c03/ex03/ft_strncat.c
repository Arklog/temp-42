/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:25:37 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/13 14:25:39 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j] && j < n)
	{
		(dest + i)[j] = src[j];
		++j;
	}
	dest[i + j] = 0;
	return (dest);
}
