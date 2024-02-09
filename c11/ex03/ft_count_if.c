/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:13:16 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 19:00:18 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	while (count < length)
	{
		if (f(tab[count]) != 0)
			result++;
		count++;
	}
	return (result);
}

/*
int	ft_str_is_lowercase(char *str)
{
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (*str < 'a' || *str > 'z')
				return (0);
			str++;
		}
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	char *x[5] = {"ASDFGH", "ZXCVBN", "gvftyehdf", "agthdjgf", NULL};
	int e = ft_count_if(x, 4, &ft_str_is_lowercase);
	printf("%d", e);
}
*/
