/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:28:15 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 18:38:57 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

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
