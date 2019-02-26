/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:53:54 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:41:19 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		counter;

	result = NULL;
	if (s && f)
	{
		counter = 0;
		result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (result == NULL)
			return (NULL);
		while (s[counter] != '\0')
		{
			result[counter] = f(counter, s[counter]);
			counter++;
		}
		result[counter] = '\0';
	}
	return (result);
}
