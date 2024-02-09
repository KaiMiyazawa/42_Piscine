/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:29:22 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/28 20:07:50 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*my_strcat(char *dest, char *src)
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
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*result;
	int		all_strs_size;
	int		all_char;

	all_strs_size = 1;
	count = 0;
	while (size - count)
		all_strs_size += ft_strlen(strs[count++]);
	all_char = (all_strs_size + ((size - 1) * ft_strlen(sep)));
	result = (char *)malloc(sizeof(*result) * all_char);
	count = 0;
	while (size - 1)
	{
		my_strcat(result, strs[count]);
		my_strcat(result, sep);
		count++;
		size--;
	}
	my_strcat(result, strs[count]);
	result[all_char] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	*a[3];
	char	*b;

	a[0] = "asd";
	a[1] = "fgh";
	a[2] = "jkl";
	b = ft_strjoin(3, a, ", ");
	printf("%s\n", b);
	if (b[13] == '\0')
		printf("null!!!");
	free(b);
}
*/
