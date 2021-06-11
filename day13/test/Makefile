NAME = libtest13.a

SRCS = ./srcs/create_node.c ./srcs/free_tree.c \
		./srcs/putstr.c ./srcs/sample_tree.c ./srcs/ft_strcmp.c

IDIR = .
OBJS = create_node.o putstr.o free_tree.o sample_tree.o ft_strcmp.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(IDIR)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all