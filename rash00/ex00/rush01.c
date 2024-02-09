/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:16:54 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/12 13:28:00 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	rush(int w, int h)
{
	int	n;

	n = 1;
	while (n <= w * h)
	{
		if (n == 1)
			ft_putchar('/');
		else if (n == w || n == (w * h - w + 1))
			ft_putchar('\\');
		else if (n == w * h)
			ft_putchar('/');
		else if ((n < w && n > 1) || (n < w * h && n > (w * h - w + 1)))
			ft_putchar('*');
		else if ((n > w && n <= w * h - w) && (n % w == 1 || n % w == 0))
			ft_putchar('*');
		else
			ft_putchar(' ');
		if (n % w == 0)
			ft_putchar('\n');
		n++;
	}
}
