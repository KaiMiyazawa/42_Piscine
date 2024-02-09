/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:15:29 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/01 17:33:47 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	count;

	count = 0;
	while (length--)
		f(tab[count++]);
}

/*
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

int	main(void)
{
	int tab[5] = {12, 234, 4567, 2147483647, 43566};

	ft_foreach(tab, 5, &ft_putnbr);
}
*/
