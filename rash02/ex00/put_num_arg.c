/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_num_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:12:07 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:15:34 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

void	ft_putstr(char *str)
{
	int		n;
	char	tmp;

	n = 0;
	while (str[n] != '\n' && str[n] != '\0')
	{
		tmp = str[n];
		write(1, &tmp, 1);
		n++;
	}
}

int	power_count(int arg_num)
{
	int	count;

	count = 0;
	while (arg_num / 1000)
	{
		arg_num /= 1000;
		count++;
	}
	return (count);
}

unsigned int	ft_recursive_power(int nb, int power)
{
	unsigned int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

void	put_one_dict_words(int num, t_dict *dict_struct)
{
	int	could_print_flag;
	int	count;

	could_print_flag = 0;
	count = 0;
	while (dict_struct[count].str != '\0')
	{
		if (dict_struct[count].key == num)
		{
			ft_putstr(dict_struct[count].str);
			could_print_flag = 1;
			break ;
		}
		count++;
	}
}

void	put_num_arg(int arg_num, t_dict *dict_struct)
{
	int				put_hun_num;
	int				tmp;
	unsigned int	to_make_hundred;

	put_hun_num = power_count(arg_num) + 1;
	to_make_hundred = 0;
	if (arg_num == 0)
		put_u_th(arg_num, dict_struct);
	while (put_hun_num)
	{
		to_make_hundred = ft_recursive_power(1000, (put_hun_num - 1));
		if (to_make_hundred == 0)
			break ;
		tmp = arg_num / to_make_hundred;
		if (tmp != 0)
			put_u_th(tmp, dict_struct);
		if (put_hun_num != 1 && tmp != 0)
			put_one_dict_words(to_make_hundred, dict_struct);
		arg_num -= (arg_num / to_make_hundred * to_make_hundred);
		put_hun_num--;
	}
}
