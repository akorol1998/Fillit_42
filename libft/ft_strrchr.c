/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:01:38 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 14:29:26 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	char	ch;

	ch = (char)c;
	counter = 0;
	while (s[counter] != '\0')
		counter++;
	while (counter >= 0 && s[counter] != ch)
		counter--;
	if (s[counter] == ch)
		return ((char *)s + counter);
	return (NULL);
}
