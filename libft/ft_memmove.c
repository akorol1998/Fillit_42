/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:58:51 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 13:48:34 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	counter = 0;
	if (dst < src)
	{
		while (counter < len)
		{
			((char *)dst)[counter] = ((char *)src)[counter];
			counter++;
		}
	}
	else
	{
		while (len != 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return ((void *)dst);
}
