/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:51:42 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 11:58:37 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++ != '\0')
		length++;
	return (length);
}
/*strlenはNULLを含めない*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	max;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	max = size - dest_len - 1;
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (i < max && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}

/*
#include<stdio.h>

int main(void)
{
	char a[] = "aiueo";
	char b[] = "1234";
	printf("%d\n", ft_strlcat(a, b, 2));
	printf("%s\n", a);
}
*/
