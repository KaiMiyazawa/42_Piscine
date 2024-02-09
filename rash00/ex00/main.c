/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:10:30 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/12 16:25:38 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int width, int height);

int	my_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			num = 0;
			return (num);
		}
		num += *str - 48;
		num *= 10;
		str++;
	}
	num /= 10;
	return (num);
}

int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	if (argc != 3)
	{
		write(1, "Invalid Input\n", 14);
		return (1);
	}
	width = my_atoi(argv[1]);
	height = my_atoi(argv[2]);
	if (width == 0 || height == 0)
	{
		write(1, "Invalid Input\n", 14);
		return (1);
	}
	rush(width, height);
	return (0);
}
