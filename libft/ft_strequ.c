/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:55:38 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:48:04 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		counter;

	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 && s2)
	{
		counter = 0;
		while (s1[counter] != '\0' && s2[counter] != '\0'
				&& s1[counter] == s2[counter])
			counter++;
		if (s1[counter] == '\0' && s2[counter] == '\0')
			return (1);
	}
	return (0);
}
