/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:57:21 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 11:57:21 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		dest[count2 + count1] = src[count2];
		count2++;
	}
	dest[count2 + count1] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int	main(void)
{
	char a[30] = "aiueo";
	char b[30] = "kakikukeko";
	printf("%s\n", ft_strcat(a, b));
}
*/
