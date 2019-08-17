	NAME = ft_display_file

	LIB = ft_display_file.a

	SRCS = ./main.c ./ft_putstr.c ./ft_putchar.c ./ft_is_error.c

	OBJ = ${SRCS:.c=.o}

	FLAG = -Wall -Wextra -Werror
	CC = gcc
	INCLUDES = ./

all: $(OBJ)
	${CC} ${FLAG} ${OBJ} -I $(INCLUDES) -o ${NAME}
	ar rc $(LIB) ${OBJ}
	ranlib $(LIB)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(LIB)
