/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:34:39 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 20:30:58 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	calculate(int left, char operater, int right)
{
	int	(*calculate_array[5])(int, int);

	calculate_array[0] = &add_cal;
	calculate_array[1] = &sub_cal;
	calculate_array[2] = &div_cal;
	calculate_array[3] = &mult_cal;
	calculate_array[4] = &rim_cal;
	if (operater == '+')
		return ((*calculate_array[0])(left, right));
	else if (operater == '-')
		return ((*calculate_array[1])(left, right));
	else if (operater == '/')
		return ((*calculate_array[2])(left, right));
	else if (operater == '*')
		return ((*calculate_array[3])(left, right));
	else
		return ((*calculate_array[4])(left, right));
}

int	main(int argc, char *argv[])
{
	char	operator;

	operator = check_and_change(argv[2]);
	if (argc == 4)
	{
		if (operator == '1')
			ft_putnbr(0);
		else if (ft_atoi(argv[3]) == 0 && operator == '/')
			write(1, "Stop : division by zero", 23);
		else if (ft_atoi(argv[3]) == 0 && operator == '%')
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(calculate(ft_atoi(argv[1]), operator, ft_atoi(argv[3])));
		write(1, "\n", 1);
	}
}
