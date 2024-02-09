/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:57:19 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 09:20:12 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include<stdio.h>

int main(void)
{
  char dest[16];
  char src[16];

  printf("Please input a string: ");
  scanf("%s", src);

  ft_strcpy(dest, src);

  printf("src  = %s\n", src);
  printf("dest = %s\n", dest);

  return 0;
}
*/
