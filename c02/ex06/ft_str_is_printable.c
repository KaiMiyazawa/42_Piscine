/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:25:38 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 17:50:06 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	if (*str != 0)
	{
		while (*str != '\0')
		{
			if (!(*str > 31 && *str < 127))
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

	printf("%d\n", ft_str_is_printable(a));
}
*/
