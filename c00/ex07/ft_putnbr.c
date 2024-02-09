/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:05:52 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/14 13:19:51 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
