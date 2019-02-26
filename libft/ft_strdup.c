/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:57:45 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 13:58:57 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	counter;
	char	*result;
	size_t	size;

	size = ft_strlen(s1);
	counter = 0;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	while (counter < size)
	{
		result[counter] = s1[counter];
		counter++;
	}
	return (result);
}
