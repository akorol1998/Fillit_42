/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 19:02:54 by akreidun          #+#    #+#             */
/*   Updated: 2018/12/04 16:16:03 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		list->content = NULL;
	}
	else
	{
		list->content = malloc(sizeof(void) * content_size);
		if (list->content == NULL)
			return (NULL);
		ft_memcpy(list->content, (void *)content, content_size);
	}
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
