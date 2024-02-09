CC=cc
CCFLAG=-Wall -Wextra -Werror -o
SRCGROUP=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJGROUP=srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@ -I includes

all: libft.a

libft.a: $(OBJGROUP)
	ar rucs libft.a $(OBJGROUP)
	ranlib libft.a

clean:
	rm -f $(OBJGROUP)

fclean: clean
	rm -f libft.a

re: fclean all
