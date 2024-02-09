/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:25:42 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 06:28:39 by kmiyazaw         ###   ########.fr       */
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

	count = 1;
	if (!(argc == 1))
	{
		while (argv[count] != '\0')
		{
			write(1, argv[count], ft_strlen(argv[count]));
			write(1, "\n", 1);
			count++;
		}
	}
}
