/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:15:11 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:09:55 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbdigit(int n)
{
	int		result;

	if (n == 0)
		return (1);
	result = 0;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		size;
	int		counter;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_nbdigit(n);
	if (n < 0)
		size++;
	if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	result[size] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		result[0] = '-';
	counter = size - 1;
	while (n != 0)
	{
		if (n < 0)
			n *= -1;
		result[counter--] = n % 10 + 48;
		n /= 10;
	}
	return (result);
}
