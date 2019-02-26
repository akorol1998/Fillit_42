/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:48:18 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:25:02 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		counter;

	counter = 0;
	ch = (char)c;
	while (s[counter] && s[counter] != ch)
		counter++;
	if (s[counter] == ch)
		return ((char *)s + counter);
	return (NULL);
}
