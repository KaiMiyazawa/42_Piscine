CC=cc
CCFLAG=
CCFLAG=-Wall -Wextra -Werror
SRCGROUP=*.c
NAME=rush-02
OBJGROUP=*.o

all: $(NAME)

$(NAME): $(SRCGROUP)
	$(CC) $(CCFLAG) -o $(NAME) $(SRCGROUP)

fclean: clean

clean:
	rm -f $(NAME)

re: fclean all