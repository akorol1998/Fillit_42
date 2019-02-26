/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:19:13 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:02:12 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	counter;

	counter = 0;
	while (counter < len && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	while (counter < len)
	{
		dst[counter] = '\0';
		counter++;
	}
	return (dst);
}
