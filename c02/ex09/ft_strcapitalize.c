/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:52:30 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/15 18:43:16 by kmiyazaw         ###   ########.fr       */
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
			p[count] += 32;
		count ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*p;
	int		count;
	int		n;

	p = str;
	ft_strlowcase(p);
	count = 0;
	n = 1;
	while (p[count] != '\0')
	{
		if (p[count] <= 'z' && p[count] >= 'a')
		{
			if (n == 1)
			{
				p[count] -= 32;
				n = 0;
			}
		}
		else if (p[count] <= '9' && p[count] >= '0')
			n = 0;
		else
			n = 1;
		count++;
	}
	return (str);
}

/*
#include<stdio.h>
int main(void)
{
	char a[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", a);

	printf("%s\n", ft_strcapitalize(a));
}
*/
