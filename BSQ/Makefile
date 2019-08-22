	NAME = BSQ

	LIB = libbsq.a

	SRCS = ./main.c ./ft_split.c ./ft_putchar.c ./ft_is_error.c ./set_pos_and_length.c ./ft_strdup.c ./ft_strcpy.c ./ft_strlen.c ./fill_map.c ./ft_read_map.c ./display_map.c

	OBJ = ${SRCS:.c=.o}

	FLAG = -Wall -Wextra -Werror
	CC = gcc
	INCLUDES = ./

all: $(OBJ)
	${CC} ${FLAG} ${OBJ} -I $(INCLUDES) -o ${NAME}
	ar rc $(LIB) ${OBJ}
	ranlib $(LIB)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(LIB)

re : fclean all