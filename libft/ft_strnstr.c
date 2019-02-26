/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:56:13 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:55:02 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hk, const char *ndle, size_t len)
{
	size_t		counter;
	size_t		counter2;

	counter = 0;
	if (((char *)ndle)[0] == '\0')
		return ((char *)hk);
	while (hk[counter] != '\0' && counter < len)
	{
		if (hk[counter] == ndle[0])
		{
			counter2 = 0;
			while (hk[counter + counter2] == ndle[counter2]
					&& hk[counter + counter2] && ndle[counter2]
					&& len > counter + counter2)
				counter2++;
			if (ndle[counter2] == '\0')
				return ((char *)(hk + counter));
		}
		counter++;
	}
	return (NULL);
}
