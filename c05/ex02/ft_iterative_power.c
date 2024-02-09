/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:39:08 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 20:12:53 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("(-2461,-2070)=%d\n", ft_iterative_power(-2461,-2070));
	printf("(0,0)=%d\n", ft_iterative_power(0,0));
	printf("(716,0)=%d\n", ft_iterative_power(716,0));
	printf("(2155,1)=%d\n", ft_iterative_power(2155,1));
	printf("(0,2)=%d\n", ft_iterative_power(0,2));
	printf("(1,4)=%d\n", ft_iterative_power(1,4));
	printf("(2,5)=%d\n", ft_iterative_power(2,5));
	printf("(4,-6)=%d\n", ft_iterative_power(4,-6));
	printf("(8,7)=%d\n", ft_iterative_power(8,7));
	printf("(-7,9)=%d\n", ft_iterative_power(-7,9));
	printf("(-1,10)=%d\n", ft_iterative_power(-1,10));
}
*/
