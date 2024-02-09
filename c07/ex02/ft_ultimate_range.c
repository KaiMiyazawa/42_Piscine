/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:25:43 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/23 18:15:47 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	*range_two;

	count = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	range_two = (int *)malloc((sizeof(int) * (max - min)));
	if (range_two == NULL)
		return (-1);
	*range = range_two;
	while (min + count < max)
	{
		range_two[count] = min + count;
		count ++;
	}
	return (max - min);
}

/*
int	main(void)
{
	int	max;
	int	min;
	int	*range;
	int	count;
	int	size;

	max = 19;
	min = -11;
	size = ft_ultimate_range(&range, min, max);
	if (size <= 0)
	{
		printf("NULL");
		return (0);
	}
	count = 0;
	printf("%d\n", size);
	while ((max - min))
	{
		printf("%d  ", range[count]);
		count++;
		max--;
	}
	free(range);
}
*/
