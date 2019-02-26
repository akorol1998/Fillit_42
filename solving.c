/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 04:33:53 by akreidun          #+#    #+#             */
/*   Updated: 2019/01/26 04:33:55 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_fill(char **arr, t_part *list, int i, int j)
{
	int		size;
	int		cr;
	int		j1;
	int		cr1;

	size = 0;
	while (arr[0][size] != '\n')
		size++;
	j1 = 0;
	while (++j1 < 4)
	{
		cr = list->coord[0][j1] - list->coord[0][0];
		cr1 = list->coord[1][j1] - list->coord[1][0];
		if (i + cr < 0 || i + cr >= size || j + cr1 < 0
			|| j + cr1 >= size || arr[i + cr][j + cr1] != '.'
			|| arr[i][j] != '.')
			return (-1);
	}
	arr[i][j] = list->sign;
	j1 = 0;
	while (++j1 < 4)
		arr[i + list->coord[0][j1] - list->coord[0][0]][j +
			list->coord[1][j1] - list->coord[1][0]] = list->sign;
	return (1);
}

void	ft_cleaning2(char **arr, t_part *list, int size)
{
	char	a;
	int		i;
	int		j;

	a = list->sign;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i][j] == a)
				arr[i][j] = '.';
			j++;
		}
		i++;
	}
}

int		filling(char **arr, t_part *list, int i, int j)
{
	int		size;

	if (list == NULL)
		return (0);
	size = 0;
	while (arr[0][size] != '\n')
		size++;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (check_fill(arr, list, i, j) == 1)
			{
				if (filling(arr, list->next, 0, 0) == 0)
					return (0);
				ft_cleaning2(arr, list, size);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

void	solving(t_part *list, int i, int j)
{
	int		num_of_tetri;
	int		size;
	char	**arr;

	num_of_tetri = ft_quantity(list, 0);
	size = ft_size(num_of_tetri * 4);
	arr = ft_create_map(size);
	while (filling(arr, list, 0, 0) == -1)
	{
		delete_map(arr, size);
		arr = ft_create_map(++size);
	}
	delete_list(list, 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j <= size)
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		i++;
	}
	delete_map(arr, size);
}
