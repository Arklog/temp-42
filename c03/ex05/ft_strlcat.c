/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:32:11 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/14 21:59:25 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen2(src);
	destlen = ft_strlen2(dest);
	i = 0;
	while (i + 1 + destlen < size && src[i])
	{
		dest[i + destlen] = src[i];
		++i;
	}
	if (size <= destlen)
		return (srclen + size);
	else
		return (srclen + destlen);
}
