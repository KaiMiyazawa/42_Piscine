/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:03:56 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 16:43:37 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	judge_minus(char *str, int count)
{
	if (str[count] == '-')
		return (1);
	return (0);
}

int	add_minus(int minus_count)
{
	if (minus_count % 2 == 1)
		return (-1);
	return (1);
}

int	make_num(char *str, int count, int num)
{
	while ((str[count] >= '0' && str[count] <= '9'))
	{
		num *= 10;
		num += str[count] - '0';
		count++;
	}
	return (num);
}

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
	{
		minus_count += judge_minus(str, count);
		count++;
	}
	if ((str[count] >= '0' && str[count] <= '9'))
	{
		num = make_num(str, count, num);
		num *= add_minus(minus_count);
	}
	return (num);
}

//int	ft_atoi(char *str)
//{
//	int	num;
//	int	count;
//	int	minus_count;

//	num = 0;
//	count = 0;
//	minus_count = 0;
//	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
//		count++;
//	while (str[count] == '-' || str[count] == '+' )
//	{
//		minus_count += judge_minus(str, count);
//		count++;
//	}
//	if ((str[count] >= '0' && str[count] <= '9'))
//	{
//		num = make_num(str, count, num);
//		num *= add_minus(minus_count);
//	}
//	return (num);
//}
