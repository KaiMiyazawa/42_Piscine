/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:24:34 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 15:43:37 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	result;

	result = 1;
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (*str < 'A' || (*str > 'Z' && *str < 'a' ) || *str > 'z')
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

	printf("%d\n", ft_str_is_alpha(a));
}
*/
