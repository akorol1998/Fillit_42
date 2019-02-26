/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:25:15 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/26 17:34:45 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned long	counter;
	int				iterator;
	unsigned long	size1;
	unsigned long	size2;

	result = NULL;
	if (s1 && s2)
	{
		size1 = ft_strlen(s1);
		size2 = ft_strlen(s2);
		result = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
		if (result == NULL)
			return (NULL);
		result[size1 + size2] = '\0';
		counter = -1;
		iterator = 0;
		while (++counter < (size1 + size2 + 1)
				&& s1[counter] != '\0')
			result[counter] = s1[counter];
		while (counter < (size1 + size2 + 1)
				&& s2[iterator] != '\0')
			result[counter++] = s2[iterator++];
	}
	return (result);
}
