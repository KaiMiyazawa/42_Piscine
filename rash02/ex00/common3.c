/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:42:18 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 23:12:55 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	row_count(void)
{
	int		fd;
	char	buf[100];
	int		count;
	int		n;
	int		i;

	count = 0;
	fd = open (DICT, O_RDONLY);
	n = read(fd, buf, sizeof(buf));
	while (n > 0)
	{
		i = 0;
		while (i < n)
			if (buf[i++] == '\n')
				count++;
	}
	close (fd);
	return (count + 1);
}
