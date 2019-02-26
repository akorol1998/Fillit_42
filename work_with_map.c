/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:13:52 by akreidun          #+#    #+#             */
/*   Updated: 2019/01/30 13:13:53 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_size(int num)
{
	int		counter;

	counter = 2;
	while (counter * counter < num)
		counter++;
	return (counter);
}

char	**ft_create_map(int size)
{
	char	**result;
	int		counter;
	int		counter2;

	result = (char **)malloc(sizeof(char *) * size);
	counter = 0;
	while (counter < size)
	{
		result[counter] = (char *)malloc(sizeof(char) * (size + 1));
		counter2 = -1;
		while (++counter2 < size)
			result[counter][counter2] = '.';
		result[counter][size] = '\n';
		counter++;
	}
	return (result);
}

void	delete_map(char **arr, int size)
{
	int		counter;

	counter = 0;
	while (counter < size)
	{
		free(arr[counter]);
		counter++;
	}
	free(arr);
}
