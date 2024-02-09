/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 05:41:07 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 21:26:32 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%d★\n", ft_is_prime(2140000007));
	printf("%d\n", ft_is_prime(-2147483647));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d★\n", ft_is_prime(2));
	printf("%d★\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d★\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
	printf("%d★\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d★\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(12));
}
*/
