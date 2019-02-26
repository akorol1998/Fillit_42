/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:21:38 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:08:23 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countofwordsc(char const *s, char c)
{
	int		counter;
	int		result;

	counter = 0;
	result = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] != c)
			result++;
		while (s[counter] != '\0' && s[counter] != c)
			counter++;
		if (s[counter] != '\0')
			counter++;
	}
	return (result);
}

static int		ft_strcsplit(char **word, char const *s, char c, int *lbound)
{
	int		rbound;
	int		counter;
	int		size;

	rbound = *lbound;
	while (s[rbound] != '\0' && s[rbound] != c)
		rbound++;
	rbound--;
	size = rbound - *lbound + 1;
	*word = (char *)malloc(sizeof(char) * (size + 1));
	if (*word == NULL)
		return (*lbound);
	counter = 0;
	while (counter < size)
	{
		(*word)[counter] = s[*lbound];
		(*lbound)++;
		counter++;
	}
	(*word)[counter] = '\0';
	return (*lbound);
}

char			**ft_strsplit(char const *s, char c)
{
	int		lbound;
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	result = (char **)malloc(sizeof(char *) * (ft_countofwordsc(s, c) + 1));
	if (result == NULL)
		return (NULL);
	result[ft_countofwordsc(s, c)] = NULL;
	lbound = 0;
	while (s[lbound] != '\0')
	{
		if (s[lbound] != c)
		{
			lbound = ft_strcsplit(&result[i], s, c, &lbound);
			i++;
		}
		else
			lbound++;
	}
	return (result);
}
