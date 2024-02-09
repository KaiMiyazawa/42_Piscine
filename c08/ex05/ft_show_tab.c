/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:18:47 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 11:06:37 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include"ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	int		n;
	char	tmp;

	n = 0;
	while (str[n] != '\0')
	{
		tmp = str[n];
		write(1, &tmp, 1);
		n++;
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;

	count = 0;
	while (par[count].str != NULL)
	{
		ft_putstr(par[count].str);
		write(1, "\n", 1);
		ft_putnbr(par[count].size);
		write(1, "\n", 1);
		ft_putstr(par[count].copy);
		write(1, "\n", 1);
		count++;
	}
}

/*
int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/
