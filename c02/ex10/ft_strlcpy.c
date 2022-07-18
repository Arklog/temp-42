/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:58:50 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/14 20:14:53 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = ft_strlen (src);
	i = 0;
	while (i < srclen && i < n - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (srclen);
}
