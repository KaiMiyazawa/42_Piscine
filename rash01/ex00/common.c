#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count++);
}



/*ここからatoi*/

int	judge_minus(char *str, int count)
{
	if (str[count] == '-')
		return (1);
	return (0);
}

int	add_minus(int minus_count)
{
	if (minus_count % 2 == 1)
		return (-1);
	return (1);
}

int	make_num(char *str, int count, int num)
{
	while ((str[count] >= '0' && str[count] <= '9'))
	{
		num *= 10;
		num += str[count] - '0';
		count++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	num;
	int	count;
	int	minus_count;

	num = 0;
	count = 0;
	minus_count = 0;
	while (str[count] == ' ')
		count++;
	while (str[count] == '-' || str[count] == '+' )
	{
		minus_count += judge_minus(str, count);
		count++;
	}
	if ((str[count] >= '0' && str[count] <= '9'))
	{
		num = make_num(str, count, num);
		num *= add_minus(minus_count);
	}
	return (num);
}


/*ここまでatoi*/

/*ここからputnbr*/

#include <unistd.h>

void	print_num(int nb)
{
	char	ptnb[13];
	int		count;

	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		ptnb[count] = nb % 10 + '0';
		count++;
		nb /= 10;
	}
	count--;
	while (count >= 0)
	{
		write(1, &ptnb[count], 1);
		count--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 12);
	else
	{
		print_num(nb);
	}
	write(1, "\n", 1);
}



/*ここまでputnbr*/


