# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thduong <thduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 21:21:19 by lonnguye          #+#    #+#              #
#    Updated: 2021/06/16 06:24:35 by thduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = ./srcs/main.c ./srcs/process_map.c ./srcs/bsq_solver.c \
		./srcs/solver_utils.c ./srcs/read_stdin.c 

INCL = ./includes/

OBJS = main.o process_map.o read_stdin.o bsq_solver.o solver_utils.o 

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCL)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all
									