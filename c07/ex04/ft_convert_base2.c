/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:42:15 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/28 13:12:37 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		atoi_base(char *str, char *base);
int		str_len(char *str);
int		p_n(int a, int b);
int		char_check(char cha[]);
int		ft_putnbr_base(int num, char *nb, char *result_char, int b);

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_putnbr_base(int num, char *nb, char *result_char, int b)
{
	long	eito[3];

	eito[2] = 0;
	if (b % 2 == 1)
		result_char[eito[2]++] = '-';
	eito[0] = 1;
	while (num / eito[0] != 0)
		eito[0] = eito[0] * str_len(nb);
	eito[0] = eito[0] / str_len(nb);
	while (eito[0] > 0)
	{
		eito[1] = num / eito[0];
		result_char[eito[2]] = nb[eito[1]];
		num = num % eito[0];
		eito[0] = eito[0] / str_len(nb);
		eito[2]++;
	}
	result_char[eito[2]] = '\0';
	return (0);
}

int	p_n(int a, int b)
{
	int	num;

	num = 1;
	while (b--)
		num *= a;
	return (num);
}
