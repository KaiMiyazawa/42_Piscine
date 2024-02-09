/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:55:36 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 20:50:42 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count1] != '\0')
	{
		while (str[count1 + count2] != '\0'
			&& str[count1 + count2] == to_find[count2])
			count2++;
		if (to_find[count2] == '\0')
			return (str + count1);
	count2 = 0;
	count1++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{

	char *p;

	p = ft_strstr("abcdefghijk", "f");

	printf("検索文字列が見つかった場所から表示→ %s\n",p);

	return 0;
}
*/
