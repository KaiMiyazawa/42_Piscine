/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:43:02 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 22:55:29 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	check_dict(const char *buff)
{
	int	count;

	count = 0;
	while (buff[count] != '\0')
	{
		while (buff[count] == ' ' || (buff[count] >= 9 && buff[count] <= 13))
			count++;
		if (buff[count] == '\n')
			return (0);
		while (buff[count] >= '0' && buff[count] <= '9')
			count++;
		if ((buff[count] != ':' && buff[count] != ' '
				&& (buff[count] < 9 || buff[count] > 13)))
		{
			return (1);
		}
		while (buff[count] == ' ' || (buff[count] >= 9 && buff[count] <= 13))
			count++;
		if (buff[count] != ':')
		{
			return (1);
		}
		count++;
		while (buff[count] == ' ' || (buff[count] >= 9 && buff[count] <= 13))
			count++;
		while (ft_char_is_unprintable(buff[count]) == 1)
			count++;
		if (buff[count] == '\n')
			count++;
		else if (buff[count] == '\0')
			return (0);
		else
		{
			return (1);
		}
		count++;
	}
	return (0);
}
