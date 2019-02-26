/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:45:48 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:06:44 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	counter;
	size_t	counter2;

	counter = 0;
	while (s1[counter] != '\0')
		counter++;
	counter2 = 0;
	while (s2[counter2] != '\0' && counter2 < n)
	{
		s1[counter] = s2[counter2];
		counter++;
		counter2++;
	}
	s1[counter] = '\0';
	return (s1);
}
