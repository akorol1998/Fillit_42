/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:58:56 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:08:11 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	counter2;
	size_t	size;

	size = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0 || dstsize - 1 < ft_strlen(dst))
		size = ft_strlen(src) + dstsize;
	counter = 0;
	while (dst[counter] != '\0')
		counter++;
	if (dstsize != 0 && dstsize != 1)
	{
		counter2 = 0;
		while (src[counter2] && counter < dstsize - 1)
		{
			dst[counter] = src[counter2];
			counter++;
			counter2++;
		}
		dst[counter] = '\0';
	}
	return (size);
}
