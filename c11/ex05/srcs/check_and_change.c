/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_change.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:07:05 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 18:33:07 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++ != '\0')
	{
		length++;
	}
	return (length);
}

char	check_and_change(char *ope)
{
	char	x;

	x = ope[0];
	if (ft_strlen(ope) == 1
		&& (x == '+' || x == '-' || x == '*' || x == '/' || x == '%'))
		return (x);
	return ('1');
}
