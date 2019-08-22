# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 11:36:03 by ercordho          #+#    #+#              #
<<<<<<< HEAD:ex00/Erwann/Makefile
<<<<<<< HEAD:ex00/Makefile
#    Updated: 2019/08/17 19:18:25 by mderoir          ###   ########.fr        #
=======
#    Updated: 2019/08/17 22:26:58 by ercordho         ###   ########.fr        #
>>>>>>> 3b926e5503e39affddffbff7ec6354d980209c15:ex00/Erwann/Makefile
=======
#    Updated: 2019/08/18 21:38:52 by ercordho         ###   ########.fr        #
>>>>>>> b18843871455fc060112bd5546ad1aa6328d6b72:ex00/Makefile
#                                                                              #
# **************************************************************************** #

NAME = rush-02
LIB = rush-02.a
SRCS =	./ft_putstr.c ./ft_split.c ./ft_error.c ./ft_read_argv.c ./ft_strlen.c ./ft_strcpy.c ./ft_nblen.c ./ft_split_nb.c ./ft_strcat.c ./ft_find_lenght.c ./main.c
OBJ = $(SRCS:.c=.o)
HEADER = dictionary.h
FLAG = -Wall -Wextra -Werror

all : ${NAME}

$(NAME): $(OBJ)
		gcc $(FLAG) $(OBJ) -I $(HEADER) -o $(NAME)
		ar rc $(LIB) $(OBJ)
		ranlib $(LIB)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(LIB)

