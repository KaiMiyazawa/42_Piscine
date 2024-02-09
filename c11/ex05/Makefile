CC=gcc
CFLAG=-Wall -Wextra -Werror
SRC=srcs/do_op.c srcs/check_and_change.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/four_ope.c
OBJ=srcs/do_op.o srcs/check_and_change.o srcs/ft_atoi.o srcs/ft_putnbr.o srcs/four_ope.o
NAME=do-op

.c.o:
	$(CC) $(CFLAG) -c $< -o $@ -I includes

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all