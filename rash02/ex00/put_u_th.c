/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_u_th.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:50:17 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:20:28 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	put_u_th(int u_hundred_num, t_dict *dict_struct)
{
	int	count;
	int	could_print_flag;
	int	print_hund_flag;

	count = 0;
	could_print_flag = 0;
	print_hund_flag = 0;
	if (u_hundred_num / 100 > 0)
	{
		while (dict_struct[count].str != '\0')
		{
			if (dict_struct[count].key == (u_hundred_num / 100))
			{
				printf("%s ", dict_struct[count].str);
				could_print_flag = 1;
				break ;
			}
			count++;
		}
		could_print_flag = 0;
		count = 0;
		while (dict_struct[count].str != '\0')
		{
			if (dict_struct[count].key == 100)
			{
				printf("%s ", dict_struct[count].str);
				could_print_flag = 1;
				break ;
			}
			count++;
		}
		u_hundred_num -= ((u_hundred_num / 100) * 100);
		print_hund_flag = 1;
	}
	could_print_flag = 0;
	if (u_hundred_num / 10 > 0)
	{
		count = 0;
		while (dict_struct[count].str != '\0')
		{
			if (dict_struct[count].key == u_hundred_num)
			{
				printf("%s ", dict_struct[count].str);
				return ;
			}
			count++;
		}
		count = 0;
		while (dict_struct[count].str != '\0')
		{
			if (dict_struct[count].key == (u_hundred_num / 10) * 10)
			{
				printf("%s ", dict_struct[count].str);
				could_print_flag = 1;
				break ;
			}
			count++;
		}
		u_hundred_num -= (u_hundred_num / 10) * 10;
	}
	count = 0;
	could_print_flag = 0;
	if (u_hundred_num >= 0)
	{
		if (u_hundred_num == 0 && print_hund_flag == 1)
			return ;
		while (dict_struct[count].str != '\0')
		{
			if (dict_struct[count].key == u_hundred_num)
			{
				printf("%s ", dict_struct[count].str);
				could_print_flag = 1;
				break ;
			}
			count++;
		}
	}
}
