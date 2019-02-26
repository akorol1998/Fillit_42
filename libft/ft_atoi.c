/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:03:49 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 15:11:00 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	result;
	int					counter;
	int					minus;

	minus = 1;
	counter = 0;
	while (str[counter] == '\t' || str[counter] == '\n' || str[counter] == '\r'
		|| str[counter] == '\v' || str[counter] == '\f' || str[counter] == ' ')
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		minus = (str[counter] == '+') - (str[counter] == '-');
		counter++;
	}
	result = 0;
	while (str[counter] <= '9' && str[counter] >= '0' && str[counter] != '\0')
	{
		result = result * 10 + (str[counter] - '0');
		if (result >= 9223372036854775807 && minus == 1)
			return (-1);
		else if (result > 9223372036854775807 && minus == -1)
			return (0);
		counter++;
	}
	return ((int)(result * minus));
}
