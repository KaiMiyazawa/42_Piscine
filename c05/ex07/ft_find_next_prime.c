/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 05:51:11 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 21:26:01 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(-2147483647));
	printf("%d★\n", ft_find_next_prime(2140000000));
	printf("%d\n", ft_find_next_prime(-4));
	printf("%d\n", ft_find_next_prime(-3));
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d★\n", ft_find_next_prime(2));
	printf("%d★\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d★\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d★\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d★\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
}
*/
