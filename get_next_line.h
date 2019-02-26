/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:07:15 by akreidun          #+#    #+#             */
/*   Updated: 2019/02/08 18:00:53 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 1000

int				get_next_line(const int fd, char **line);

typedef struct	s_node
{
	int				content_fd;
	char			*content;
	struct s_node	*next;
	struct s_node	*start;
}				t_node;

#endif
