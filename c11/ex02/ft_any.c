/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:39:36 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/01 17:42:01 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (tab[count] != '\0')
	{
		if (f(tab[count]) != 0)
			return (1);
		count++;
	}
	return (0);
}

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

/*
#include<stdio.h>
int	main(void)
{
	char *x[5] = {"ASDFGH", "ZXCVBN", "QWERTYUI", "agthdjgf", NULL};
	int e = ft_any(x, &ft_str_is_lowercase);
	printf("%d", e);
}
*/