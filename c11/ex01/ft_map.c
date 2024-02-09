/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:04:16 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/01 17:34:19 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	count;
	int	*result;

	result = (int *)malloc(sizeof(int) * length);
	count = 0;
	while (length--)
	{
		result[count] = f(tab[count]);
		count++;
	}
	return (result);
}

/*
int	num_is_high_or_low(int num)
{
	if (num > 10)
		return (1);
	else if (num < 10)
		return (-1);
	else
		return (0);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		result = nb + 48;
		write(1, &result, 1);
	}
}

int	main()
{
	int	a[5] = {-1, 5, 10, 22, 15};
	int	*result = ft_map(a, 5, &num_is_high_or_low);
	int count = 0;
	while (count < 5)
	{
		ft_putnbr(result[count++]);
		write(1, "\n", 1);
	}
}
*/
