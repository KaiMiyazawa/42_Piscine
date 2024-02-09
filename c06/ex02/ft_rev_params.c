/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:34:19 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 11:33:34 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		count--;
	}
}

/*
	int		count;
	int		command_size;
	char	*tmp;
	int		nb;

	tmp = NULL;
	command_size = argc - 1;
	count = 0;
	nb = 0;
	if (!(argc == 1))
	{
		while (argc > nb)
		{
			count = 0;
			while (count < argc)
			{
				if (argv[count][0] > argv[count + 1][0])
				{
					*tmp = *argv[count];
					*argv[count] = *argv[count + 1];
					*argv[count + 1] = *tmp;
				}
				count++;
			}
			nb++;
		}
		count = 0;
		while (argv[count] != '\0')
		{
			write(1, &argv[count][0], ft_strlen(argv[count]));
			write(1, "\n", 1);
			command_size--;
			count++;
		}
	}
*/
