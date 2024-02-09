/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:24:04 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:15:14 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	check_arg_num(char *argv_num)
{
	int	count;
	int	argv_num_size;

	count = 0;
	argv_num_size = ft_normal_strlen(argv_num);
	if (argv_num[0] == '0' && argv_num_size > 1)
		return (1);
	while (argv_num[count] != '\0')
	{
		if (argv_num[count] < '0' || argv_num[count] > '9')
			return (1);
		count++;
	}
	return (0);
}
