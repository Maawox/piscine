	NAME = libft

	LIB = libft.a

	SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

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

re: fclean all