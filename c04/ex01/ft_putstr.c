/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:32:58 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 02:25:44 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		n;
	char	tmp;

	n = 0;
	while (str[n] != '\0')
	{
		tmp = str[n];
		write(1, &tmp, 1);
		n++;
	}
}

/*
#include <unistd.h>

int main(void)
{
	ft_putstr("aiueo");
}
*/
