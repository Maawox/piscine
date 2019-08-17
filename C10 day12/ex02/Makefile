	NAME = ft_tail

	LIB = ft_tail.a

	SRCS = ./main.c ./ft_display_file.c ./ft_is_error.c \
			./ft_putchar.c ./ft_putstr.c ./ft_stdinput.c \
			./ft_strcmp.c ./ft_strlen.c ./ft_atoi.c \
			./ft_str_is_numeric.c ./ft_strdup.c ./ft_strcpy.c

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
