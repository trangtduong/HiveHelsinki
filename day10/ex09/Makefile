# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thduong <thduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 12:03:01 by thduong           #+#    #+#              #
#    Updated: 2021/06/08 13:06:38 by thduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRCS = ./srcs/ft_add.c ./srcs/ft_sub.c ./srcs/ft_mul.c ./srcs/ft_div.c \
		./srcs/ft_mod.c ./srcs/ft_putnbr.c\
		./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_atoi.c \
		./srcs/ft_advanced_do_op.c ./srcs/main.c

IDIR = ./includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -I $(IDIR) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all
