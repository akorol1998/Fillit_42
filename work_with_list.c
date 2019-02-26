/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 17:38:00 by akreidun          #+#    #+#             */
/*   Updated: 2019/01/17 17:38:01 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	add_coords(t_part *list)
{
	int		counter;
	int		cr;

	while (list)
	{
		counter = 0;
		cr = 0;
		list->coord = (int **)malloc(sizeof(int *) * 2);
		(list->coord)[0] = (int *)malloc(sizeof(int) * 4);
		(list->coord)[1] = (int *)malloc(sizeof(int) * 4);
		while (counter < 16)
		{
			if (list->content[counter] == 'x')
			{
				(list->coord)[0][cr] = counter / 4;
				(list->coord)[1][cr] = counter % 4;
				cr++;
			}
			counter++;
		}
		list = list->next;
	}
}

void	create(t_part **list, char *rem, char a)
{
	t_part	*remem;
	t_part	*new;
	int		start;

	start = 0;
	*list = (t_part *)malloc(sizeof(t_part));
	(*list)->content = ft_strsub(rem, start, 16);
	(*list)->sign = a;
	(*list)->next = NULL;
	remem = *list;
	start = 16;
	a++;
	while (rem[start] != '\0')
	{
		new = (t_part *)malloc(sizeof(t_part));
		new->content = ft_strsub(rem, start, 16);
		new->sign = a;
		a++;
		new->next = NULL;
		(*list)->next = new;
		*list = (*list)->next;
		start += 16;
	}
	*list = remem;
}

void	delete_list(t_part *list, int check)
{
	t_part	*rem;

	while (list)
	{
		free(list->content);
		if (check != 0)
		{
			free(list->coord[0]);
			free(list->coord[1]);
			free(list->coord);
		}
		rem = list->next;
		free(list);
		list = rem;
	}
}

int		ft_quantity(t_part *list, int counter)
{
	while (list)
	{
		counter++;
		list = list->next;
	}
	return (counter);
}
