/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:19:58 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 18:43:33 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*p;
	int		count;

	count = 0;
	p = str;
	while (p[count] != '\0')
	{
		if (p[count] >= 'A' && p[count] <= 'Z')
		{
			p[count] += 32;
		}
	count ++;
	}
	return (str);
}

/*
#include<stdio.h>
int	main(void)
{
	char a[] = "AB5DeFG";
	printf("%s\n", a);

	printf("%s\n", ft_strlowcase(a));
}
*/
