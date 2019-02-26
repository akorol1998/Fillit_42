/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:22:31 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 13:51:32 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cr;

	if ((s1 == s2) || n == 0)
		return (0);
	cr = 0;
	while (cr < n)
	{
		if (((unsigned char *)s1)[cr] != ((unsigned char *)s2)[cr])
			return (((unsigned char *)s1)[cr] - ((unsigned char *)s2)[cr]);
		cr++;
	}
	return (0);
}
