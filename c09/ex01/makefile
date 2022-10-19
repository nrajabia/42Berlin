SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= allfts

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${cc} ${CFLAG}

${NAME}:	${OBJS}
	gcc -o allfts ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
