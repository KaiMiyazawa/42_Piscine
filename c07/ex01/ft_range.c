/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:33:56 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/25 01:49:40 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*range;

	count = 0;
	if (max <= min)
		return (NULL);
	else
	{
		range = (int *)malloc((sizeof(int) * (max - min)));
		while (min + count < max)
		{
			range[count] = min + count;
			count ++;
		}
	}
	return (range);
}

/*
int	main(void)
{
	int	max;
	int	min;
	int	*range;
	int	count;

	max = 19;
	min = -11;
	range = ft_range(min, max);
	count = 0;
	if (range == NULL)
		printf("NULL");
	else
	{
		while ((max - min))
		{
			printf("%d  ", range[count]);
			count++;
			max--;
		}
	}
	free(range);
}
*/
