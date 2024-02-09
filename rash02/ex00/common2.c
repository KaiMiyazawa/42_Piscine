/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:35:16 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:24:24 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

char	*ft_unique_strdup(char *str)
{
	int		count;
	char	*ptr;

	count = ft_normal_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (0);
	ft_unique_strcpy(ptr, str);
	return (ptr);
}

int	ft_char_is_unprintable(char letter)
{
	if (!(letter > 31 && letter < 127))
		return (0);
	return (1);
}

//void	ft_putstr(char *str)
//{
//	int		n;
//	char	tmp;

//	n = 0;
//	while (str[n] != '\n' && str[n] != '\0')
//	{
//		tmp = str[n];
//		write(1, &tmp, 1);
//		n++;
//	}
//}

void	add_null(char *buff, int size)
{
	buff[size] = '\n';
	buff[size + 1] = '\0';
}

int	char_count(void)
{
	char	buf[100];
	int		n;
	int		i;
	int		fd;
	int		count;

	count = 0;
	fd = open (DICT, O_RDONLY);
	n = read(fd, buf, sizeof(buf));
	while (n > 0)
	{
		i = 0;
		while (i < n)
		{
			if (buf[i++] != '\0')
				count++;
		}
		n--;
	}
	close (fd);
	return (count);
}
