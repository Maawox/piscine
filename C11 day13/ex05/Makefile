	NAME = do-op

	SRCS = ./main.c ./ft_atoi.c ./ft_putnbr.c ./ft_putchar.c ./ft_op.c ./is_error.c ./do_op.c

	OBJ = ${SRCS:.c=.o}

	FLAG = -Wall -Wextra -Werror
	CC = gcc
	INCLUDES = ./do_op.h

all: $(OBJ)
	${CC} ${FLAG} ${OBJ} -I $(INCLUDES) -o ${NAME}

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(LIB)
