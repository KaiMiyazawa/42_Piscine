/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:06:48 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:14:51 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

t_dict	*make_struct(char *buff, int row_num)
{
	int		count;
	int		struct_count;
	t_dict	*dict_strc;
	int		count_line;

	count_line = 0;
	dict_strc = malloc(sizeof(t_dict) * row_num + 10);
	if (dict_strc == NULL)
		printf("malloc Error\n");
	count = 0;
	struct_count = 0;
	while (row_num - 3)
	{
		dict_strc[struct_count].key = ft_atoi(&buff[count]);
		while (buff[count] != ':')
			count++;
		count++;
		while (buff[count] == ' ' || (buff[count] >= 9 && buff[count] <= 13))
			count++;
		(dict_strc[struct_count].str) = (char *)malloc(sizeof(char)
				* ft_strlen(&buff[count]) + 10);
		dict_strc[struct_count].str = ft_strdup(&buff[count]);
		while (buff[count] != '\n' && buff[count] != '\0')
			count++;
		if (buff[count] == '\0')
			break ;
		struct_count++;
		count_line++;
		row_num--;
	}
	dict_strc[struct_count].key = ft_atoi(&buff[count]);
	while (buff[count] != ':')
		count++;
	count++;
	while (buff[count] == ' ' || (buff[count] >= 9 && buff[count] <= 13))
		count++;
	(dict_strc[struct_count].str) = (char *)malloc(sizeof(char)
			* ft_normal_strlen(&buff[count]) + 10);
	dict_strc[struct_count].str = ft_unique_strdup(&buff[count + 1]);
	dict_strc[struct_count].str = 0;
	return (&dict_strc[0]);
}

void	ft_show_dict(t_dict *buff)
{
	int	count;

	count = 0;
	while (buff[count].str != NULL)
	{
		printf("%d\n", buff[count].key);
		printf("%s\n", buff[count].str);
		count++;
	}
}
