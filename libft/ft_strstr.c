/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:12:12 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:49:42 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hk, const char *ndle)
{
	int		counter;
	int		result;

	counter = 0;
	if (ndle[0] == '\0')
		return ((char *)hk);
	while (hk[counter] != '\0')
	{
		if (hk[counter] == ndle[0])
		{
			result = 0;
			while (hk[counter + result] == ndle[result]
					&& hk[counter + result] && ndle[result])
				result++;
			if (ndle[result] == '\0')
				return ((char *)(hk + counter));
		}
		counter++;
	}
	return (NULL);
}
