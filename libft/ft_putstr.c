/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:37:03 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:12:42 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		counter;

	if (s)
	{
		counter = 0;
		while (s[counter] != '\0')
		{
			ft_putchar(s[counter]);
			counter++;
		}
	}
}
