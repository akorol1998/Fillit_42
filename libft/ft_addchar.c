/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:15:30 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:25:15 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchar(char *s, char c)
{
	int		size;
	char	*result;
	int		counter;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	if (*s == '\0')
		size = 1;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		result[counter] = s[counter];
		counter++;
	}
	result[counter] = c;
	result[counter + 1] = '\0';
	return (result);
}
