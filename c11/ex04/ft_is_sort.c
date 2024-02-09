/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:15:12 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 12:37:45 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	ascending;
	int	descending;

	ascending = 0;
	descending = 0;
	count = -1;
	while (++count < length - 1)
	{
		if (f(tab[count], tab[count + 1]) <= 0)
			ascending++;
		if (f(tab[count], tab[count + 1]) >= 0)
			descending++;
	}
	if (ascending == count || descending == count)
		return (1);
	return (0);
}

/*
int	ft_comp(int one, int two)
{
	return (one - two);
}

#include<stdio.h>
int	main(void)
{
	int x[6] = {1, 1, 2, 4, 5, 6};
	int e = ft_is_sort(x, 6, &ft_comp);
	printf("%d", e);
}
*/
