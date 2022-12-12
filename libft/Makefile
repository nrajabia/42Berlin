# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fben-amo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 20:04:29 by fben-amo          #+#    #+#              #
#    Updated: 2022/10/31 20:04:30 by fben-amo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

SRCS	= *.c
OBJS	= $(SRCS:.c=.o)
CC	= cc
CFLAGE	= -Wall -Werror -Wextra
INCS	= includes
NAME	= libft.a


.c.o:
	$(CC) $(CFLAGE) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
