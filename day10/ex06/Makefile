# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thduong <thduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 00:06:39 by thduong           #+#    #+#              #
#    Updated: 2021/06/08 13:03:11 by thduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ./srcs/main.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c \
		./srcs/select_operator.c ./srcs/operator.c

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
