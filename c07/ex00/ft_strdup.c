/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:35:04 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/27 15:50:45 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int		count;
	char	*ptr;

	count = ft_strlen(str);
	if (str == '\0')
	{
		return (0);
	}
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	count = 0;
	if (ptr != NULL)
	{
		while (str[count] != '\0')
		{
			ptr[count] = str[count];
			count++;
		}
		ptr[count] = '\0';
	}
	return (ptr);
}

/*
int	main(void)
{
	char	a[] = "asdfghjkl";
	char	*b;
	int		count;

	b = ft_strdup(a);
	printf("%s\n", b);
	count = 0;
	free(b);
}
*/
