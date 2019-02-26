/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:26:38 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:40:20 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		counter;

	result = NULL;
	counter = 0;
	if (s && f)
	{
		result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (result == NULL)
			return (NULL);
		while (s[counter] != '\0')
		{
			result[counter] = f(s[counter]);
			counter++;
		}
		result[counter] = '\0';
	}
	return (result);
}
