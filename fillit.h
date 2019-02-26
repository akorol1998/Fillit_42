/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreidun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 15:46:04 by akreidun          #+#    #+#             */
/*   Updated: 2019/01/14 16:04:41 by akreidun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include "get_next_line.h"

typedef struct	s_part
{
	char			*content;
	int				**coord;
	struct s_part	*next;
	char			sign;
}				t_part;

t_part			*validation(int fd, t_part *list);
int				validator_shape(int fd, char **rem, int status, char **line);
int				check_line(char *line, int four);
int				deep(t_part *list);
int				checking(char *str, int	i, int *tags);
void			create(t_part **list, char *rem, char a);
void			ft_clean(t_part *list);
void			solving(t_part *list, int i, int j);
int				filling(char **arr, t_part *list, int i, int j);
void			ft_cleaning(char **arr, char a, int size);
int				ft_size(int num);
char			**ft_create_map(int size);
void			delete_map(char **arr, int size);
void			delete_list(t_part *list, int check);
int				ft_quantity(t_part *list, int counter);
void			add_coords(t_part *list);
void			ft_cleaning2(char **arr, t_part *list, int size);

#endif
