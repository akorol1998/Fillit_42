# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akreidun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/09 17:38:02 by akreidun          #+#    #+#              #
#    Updated: 2019/02/09 17:38:04 by akreidun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wextra -Wall -Werror
NAME = fillit
LIB = libft.a

ADD_LIB = $(addprefix libft/, libft.a)

SRC = fillit.c \
	  get_next_line.c \
	  solving.c \
	  validation.c \
	  work_with_list.c \
	  work_with_map.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(ADD_LIB) $(OBJ)
	gcc $(FLAGS) $(OBJ) -I fillit.h -I get_next_line.h -I libft/libft.h libft/libft.a -o $@

$(OBJ):%.o:%.c
	gcc $(FLAGS) -c $< -o $@

$(ADD_LIB):
	make -C libft/

clean:
	rm -rf *.o
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: clean fclean re all
