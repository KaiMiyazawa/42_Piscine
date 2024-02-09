/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:02:42 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/14 13:19:13 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int a, int b, int c, int d)
{
	while (d <= '9')
	{
		if (!(a == c && b == d))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (!(a == '9' && c == '9' && d == '9' && b == '8'))
			{
				write(1, ", ", 2);
			}
		}
	d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				d = b;
				write_num(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
	return ;
}
