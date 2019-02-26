/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:33:00 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:03:35 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	counter;
	int	counter2;

	counter = 0;
	while (s1[counter] != '\0')
		counter++;
	counter2 = 0;
	while (s2[counter2] != '\0')
	{
		s1[counter] = s2[counter2];
		counter++;
		counter2++;
	}
	s1[counter] = '\0';
	return (s1);
}
