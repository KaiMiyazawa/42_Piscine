/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:06:36 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 15:43:29 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;

	result = 1;
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (*str < '0' || *str > '9')
			{
				result = 0;
				break ;
			}
			else
			{
				result = 1;
			}
			str++;
		}
	}
	return (result);
}

/*
#include<stdio.h>
int main(void)
{
	char a[] = "";

	printf("%d\n", ft_str_is_numeric(a));
}
*/
