/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:40:42 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:13:27 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

void	put_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buff[1000000];
	int		byte_num;
	int		row_num;
	t_dict	*dict_struct;

	fd = 0;
	if (argc == 2 || argc == 3)
	{
		if (argc == 3)
		byte_num = char_count() + 1;
		row_num = row_count();
		fd = open(DICT, O_RDONLY);
		if (fd == -1)
			return (1);
		read(fd, &buff[0], 1000);
		if (byte_num == -1)
			return (1);
		if (check_dict(buff) != 0)
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
		add_null(&buff[0], byte_num);
		if (check_arg_num(argv[argc - 1]) != 0)
		{
			put_error();
			return (1);
		}
		dict_struct = make_struct(&buff[0], row_num + 1);
		put_num_arg(ft_atoi(argv[argc - 1]), &dict_struct[0]);
		fd = 0;
		while (dict_struct[fd].str != 0)
		{
			free(dict_struct[fd].str);
			fd++;
		}
		free(dict_struct);
	}
	else
		printf("Arg Error\n");
	close(fd);
}
