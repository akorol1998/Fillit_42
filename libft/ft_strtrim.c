/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:06:33 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:03:57 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		lbound;
	int		rbound;
	char	*result;
	int		counter;

	if (!s)
		return (NULL);
	lbound = 0;
	rbound = ft_strlen(s) - 1;
	while ((s[lbound] == ' ' || s[lbound] == '\n'
				|| s[lbound] == '\t') && lbound <= rbound)
		lbound++;
	while ((s[rbound] == ' ' || s[rbound] == '\n'
				|| s[rbound] == '\t') && rbound >= 0 && lbound != rbound + 1)
		rbound--;
	result = (char *)malloc(sizeof(char) * (rbound - lbound + 2));
	if (result == NULL)
		return (NULL);
	result[rbound - lbound + 1] = '\0';
	counter = 0;
	while (lbound <= rbound)
		result[counter++] = s[lbound++];
	return (result);
}
