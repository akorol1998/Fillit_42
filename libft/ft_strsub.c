/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:15:56 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:51:21 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	counter;

	result = NULL;
	if (s)
	{
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (result == NULL)
			return (NULL);
		counter = 0;
		while (counter < len)
		{
			result[counter] = s[start];
			counter++;
			start++;
		}
		result[counter] = '\0';
	}
	return (result);
}
