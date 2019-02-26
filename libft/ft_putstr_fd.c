/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:47:35 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:12:44 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		counter;

	if (s)
	{
		counter = 0;
		while (s[counter] != '\0')
		{
			ft_putchar_fd(s[counter], fd);
			counter++;
		}
	}
}
