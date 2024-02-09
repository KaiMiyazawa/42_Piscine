/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 04:24:40 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 21:27:12 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	high;
	long int	low;
	long int	middle;

	high = 46341;
	low = 0;
	middle = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (middle * middle != nb)
	{
		middle = (high + low) / 2;
		if (middle * middle < nb)
			low = middle;
		else if (middle * middle > nb)
			high = middle;
		if (high - low == 1)
			return (0);
	}
	return (middle);
}

/*
#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(17));
	printf("%d\n", ft_sqrt(-17));
	printf("%d\n", ft_sqrt(0));
	printf("%d★\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d★\n", ft_sqrt(2147395600));
	printf("%d★\n", ft_sqrt(25));
	printf("%d★\n", ft_sqrt(16));
}
*/
