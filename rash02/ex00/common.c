/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:13:09 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 22:44:42 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\n')
	{
		len++;
	}
	return (len);
}

int	ft_normal_strlen(char *str)
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
	while (src[count] != '\n')
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
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (0);
	ft_strcpy(ptr, str);
	return (ptr);
}

char	*ft_unique_strcpy(char *dest, char *src)
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
