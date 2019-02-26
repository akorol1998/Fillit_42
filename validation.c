/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 17:33:58 by akreidun          #+#    #+#             */
/*   Updated: 2019/01/17 17:37:38 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		checking(char *str, int i, int *tags)
{
	while (i < 16)
	{
		if (str[i] == '#')
		{
			str[i] = 'x';
			(*tags)++;
			if (i > 0 && str[i - 1] == '#')
				checking(str, i - 1, tags);
			if (i > 3 && str[i - 4] == '#')
				checking(str, i - 4, tags);
			if (i < 15 && str[i + 1] == '#')
				checking(str, i + 1, tags);
			if (i < 12 && str[i + 4] == '#')
				checking(str, i + 4, tags);
			if (*tags != 4)
				return (-1);
		}
		i++;
	}
	if (*tags != 4)
		return (-1);
	return (0);
}

int		deep(t_part *list)
{
	int		tags;

	while (list)
	{
		tags = 0;
		if (checking(list->content, 0, &tags) == -1)
			return (-1);
		list = list->next;
	}
	return (0);
}

int		check_line(char *line, int four)
{
	int		counter;
	int		size;

	counter = -1;
	size = ft_strlen(line);
	if (size != 4 && size != 0)
	{
		free(line);
		return (-1);
	}
	if ((line[0] == '\0' && four != 5) || (line[0] != '\0' && four == 5))
	{
		free(line);
		return (-1);
	}
	while (++counter < size)
		if (line[counter] != '.' && line[counter] != '#')
		{
			free(line);
			return (-1);
		}
	return (0);
}

int		validator_shape(int fd, char **rem, int status, char **line)
{
	int		four;
	char	*help;

	four = 1;
	while (status == 1)
	{
		status = get_next_line(fd, line);
		if (status == 1)
			four++;
		else if (four != 4 || check_line(*line, 4) == -1)
			return (-1);
		else
			break ;
		if (check_line(*line, four) == -1)
			return (-1);
		if (four == 5)
			four = 0;
		help = *rem;
		*rem = ft_strjoin(help, *line);
		free(help);
		free(*line);
	}
	return (0);
}

t_part	*validation(int fd, t_part *list)
{
	char	*line;
	char	*rem;

	line = NULL;
	if (get_next_line(fd, &line) != 1 || check_line(line, 1) == -1)
		return (NULL);
	rem = ft_strdup(line);
	free(line);
	if (validator_shape(fd, &rem, 1, &line) == -1 || ft_strlen(rem) > 416)
	{
		free(rem);
		return (NULL);
	}
	create(&list, rem, 'A');
	free(rem);
	if (deep(list) == -1)
	{
		delete_list(list, 0);
		return (NULL);
	}
	add_coords(list);
	return (list);
}
