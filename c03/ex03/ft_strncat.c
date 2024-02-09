/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:02:30 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 20:49:58 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		count1;
	unsigned int		count2;

	count1 = ft_strlen(dest);
	count2 = 0;
	while (src[count2] != '\0' && count2 < nb)
	{
		dest[count1 + count2] = src[count2];
		count2++;
	}
	dest[count1 + count2] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int	main(void)
{
	char a[40] = "aiueo";
	char b[30] = "kakikukeko";
	printf("%s\n", ft_strncat(a, b, 20));
}
*/
