# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 11:36:03 by ercordho          #+#    #+#              #
#    Updated: 2019/08/17 19:18:25 by mderoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
LIB = rush-02.a
SRCS = ./ft_putstr.c ./main.c
OBJ = $(SRCS:.c=.o)
HEADER = dictionary.h
FLAG = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		gcc $(FLAG) $(OBJ) -I $(HEADER) -o $(NAME)
		ar rc $(LIB) $(OBJ)
		ranlib $(LIB)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(LIB) $(NAME)

