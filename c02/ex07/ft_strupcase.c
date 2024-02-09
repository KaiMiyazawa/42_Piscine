/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:29:00 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 18:33:42 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*p;
	int		count;

	count = 0;
	p = str;
	while (p[count] != '\0')
	{
		if (p[count] >= 'a' && p[count] <= 'z')
		{
			p[count] -= 32;
		}
	count ++;
	}
	return (str);
}

/*
#include<stdio.h>

int main(void)
{
	char a[] = "abCd5fg";
	printf("%s\n", a);

	printf("%s\n", ft_strupcase(a));
}
*/
