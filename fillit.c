/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:05:50 by akreidun          #+#    #+#             */
/*   Updated: 2019/02/20 13:09:04 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_part	*list;

	if (argc != 2)
	{
		ft_putstr("usage: sosiPISOS\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	list = NULL;
	list = validation(fd, list);
	if (list == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	solving(list, 0, 0);
	close(fd);
	return (0);
}
