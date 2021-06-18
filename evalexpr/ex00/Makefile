# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thduong <thduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 06:31:22 by thduong           #+#    #+#              #
#    Updated: 2021/06/13 20:00:29 by thduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = ./srcs/main.c ./srcs/ft_putnbr.c ./srcs/eval_expr.c \
		./srcs/ft_strlen.c ./srcs/ft_putchar.c ./srcs/eval_utils.c

IDIR = ./includes/

OBJS = main.o ft_putnbr.o eval_expr.o ft_strlen.o ft_putchar.o eval_utils.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(IDIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
