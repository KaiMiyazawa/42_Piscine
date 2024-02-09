/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:47:13 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 20:15:10 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("(-2461,-2070)=%d\n", ft_recursive_power(-2461,-2070));
	printf("(0,0)=%d\n", ft_recursive_power(0,0));
	printf("(716,0)=%d\n", ft_recursive_power(716,0));
	printf("(2155,1)=%d\n", ft_recursive_power(2155,1));
	printf("(0,2)=%d\n", ft_recursive_power(0,2));
	printf("(1,4)=%d\n", ft_recursive_power(1,4));
	printf("(2,5)=%d\n", ft_recursive_power(2,5));
	printf("(4,6)=%d\n", ft_recursive_power(4,6));
	printf("(8,7)=%d\n", ft_recursive_power(8,7));
	printf("(-7,9)=%d\n", ft_recursive_power(-7,9));
	printf("(-1,10)=%d\n", ft_recursive_power(-1,10));
}
*/
