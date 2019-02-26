/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:38:28 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:00:08 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
			&& (unsigned char)(s1[counter]) == (unsigned char)(s2[counter])
			&& counter < n)
		counter++;
	if (counter == n)
		return (0);
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
