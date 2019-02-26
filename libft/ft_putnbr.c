/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:44:36 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:14:26 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	result;

	if (n < 0)
	{
		result = -n;
		ft_putchar('-');
	}
	else
		result = n;
	if (n / 10 != 0)
	{
		ft_putnbr(result / 10);
		ft_putchar(result % 10 + '0');
	}
	else
		ft_putchar(result + '0');
}
