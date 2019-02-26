/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:10:17 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:57:27 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		counter;

	counter = 0;
	while ((unsigned char)(s1[counter]) != '\0'
			&& (unsigned char)(s2[counter]) != '\0'
			&& (unsigned char)(s1[counter]) == (unsigned char)(s2[counter]))
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
