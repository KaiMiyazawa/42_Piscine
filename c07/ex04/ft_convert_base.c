/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:21 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/28 19:51:44 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		atoi_base(char *str, char *base);
int		str_len(char *str);
int		p_n(int a, int b);
int		char_check(char cha[]);
int		ft_putnbr_base(int num, char *nb, char *result_char, int b);

/*
int	main(void)
{
	char	a[] = "    \n         -+-+++---abcdefgfbb";
	char	b[] = "abcdefghij";
	char	c[] = "0123456789";
	printf("%s\n", ft_convert_base(a, b, c));
	return (0);
}
*/

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		b;
	char	*result_char;
	int		count;

	count = 0;
	b = 0;
	while ((9 <= nbr[count] && nbr[count] <= 13) || nbr[count] == 32)
		count++;
	while (nbr[count] == '-' || nbr[count] == '+')
	{
		if (nbr[count] == '-')
			b += 1;
		count++;
	}
	result_char = malloc(1);
	ft_putnbr_base(atoi_base(&nbr[count], base_from), base_to, result_char, b);
	return (result_char);
}

int	atoi_base(char *str, char *base)
{
	int	count;
	int	cou;
	int	result;

	result = 0;
	count = 0;
	while (count < str_len(base))
	{
		cou = 0;
		while (str[cou])
			if (str[cou] == base[count])
				result += p_n(str_len(base), str_len(str) - cou++ - 1) * count;
		count++;
	}
	return (result);
}

int	char_check(char cha[])
{
	int	count;
	int	count2;

	count = 0;
	while (count < str_len(cha))
	{
		if (cha[count] == '+' || cha[count] == '-')
			return (1);
		count2 = count + 1;
		while (count2 < str_len(cha))
			if (cha[count++] == cha[count2++])
				return (1);
	}
	return (0);
}
