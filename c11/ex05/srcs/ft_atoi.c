/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:27:30 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 18:32:07 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	ft_atoi(char *str)
{
	int	num;
	int	count;
	int	minus_count;

	num = 0;
	count = 0;
	minus_count = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '-' || str[count] == '+' )
		if (str[count++] == '-')
			minus_count++;
	if ((str[count] >= '0' && str[count] <= '9'))
	{
		while ((str[count] >= '0' && str[count] <= '9'))
		{
			num *= 10;
			num += str[count] - '0';
			count++;
		}
		if (minus_count % 2 == 1)
			num = -num;
	}
	return (num);
}
