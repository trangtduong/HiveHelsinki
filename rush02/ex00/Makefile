# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 15:58:37 by aristov           #+#    #+#              #
#    Updated: 2021/06/13 18:27:08 by rvuorenl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
IDIR = ./includes/
SOURCE = ./srcs/
SOURCEFILES = $(SOURCE)main.c \
			$(SOURCE)read_input_to_linkedlist.c \
			$(SOURCE)free.c \
			$(SOURCE)str_funcs.c \
			$(SOURCE)str_funcs_malloc.c \
			$(SOURCE)read_lines.c $(SOURCE)rush00_versions.c \
			$(SOURCE)shape_detector.c $(SOURCE)rush0n_printer.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

O_FILES = main.o read_input_to_linkedlist.o free.o \
		str_funcs.o str_funcs_malloc.o read_lines.o rush00_versions.o \
		shape_detector.o rush0n_printer.o
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCEFILES) -I $(IDIR)
	$(CC) $(CFLAGS) $(O_FILES) -o $(NAME)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
