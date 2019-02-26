/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:46:39 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 13:47:54 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			counter;
	unsigned char	ch;

	ch = (unsigned char)c;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	counter = 0;
	while (counter < n)
	{
		dest[counter] = source[counter];
		if (dest[counter] == ch)
			return ((void *)(dest + counter + 1));
		counter++;
	}
	return (NULL);
}
