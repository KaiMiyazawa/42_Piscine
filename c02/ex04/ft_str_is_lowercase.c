/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:30:24 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 15:43:06 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (*str < 'a' || *str > 'z')
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

	printf("%d\n", ft_str_is_lowercase(a));
}
*/
