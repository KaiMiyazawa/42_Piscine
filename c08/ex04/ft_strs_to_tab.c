/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:33:46 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/22 11:35:23 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include"ft_stock_str.h"

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
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (0);
	ft_strcpy(ptr, str);
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			count;
	t_stock_str	*struct_arr_from_arg;

	struct_arr_from_arg = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!struct_arr_from_arg)
		return (NULL);
	count = 0;
	while (count < ac)
	{
		struct_arr_from_arg[count].size = ft_strlen(av[count]);
		struct_arr_from_arg[count].str = av[count];
		struct_arr_from_arg[count].copy = ft_strdup(av[count]);
		count++;
	}
	struct_arr_from_arg[count].str = 0;
	return (struct_arr_from_arg);
}
