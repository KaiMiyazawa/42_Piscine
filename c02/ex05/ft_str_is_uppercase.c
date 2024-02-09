/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:23:11 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 15:17:08 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (*str < 'A' || *str > 'Z')
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

	printf("%d\n", ft_str_is_uppercase(a));
}
*/
