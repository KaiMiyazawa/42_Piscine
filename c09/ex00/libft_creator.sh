gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c
gcc -Wall -Wextra -Werror -c -o ft_putstr.o ft_putstr.c
gcc -Wall -Wextra -Werror -c -o ft_strcmp.o ft_strcmp.c
gcc -Wall -Wextra -Werror -c -o ft_strlen.o ft_strlen.c
gcc -Wall -Wextra -Werror -c -o ft_swap.o ft_swap.c
ar rucs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
