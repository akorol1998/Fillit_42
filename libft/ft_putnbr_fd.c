/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:49:08 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:13:35 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	result;

	if (n < 0)
	{
		result = -n;
		ft_putchar_fd('-', fd);
	}
	else
		result = n;
	if (n / 10 != 0)
	{
		ft_putnbr_fd(result / 10, fd);
		ft_putchar_fd(result % 10 + '0', fd);
	}
	else
		ft_putchar_fd(result + '0', fd);
}
