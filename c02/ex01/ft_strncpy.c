/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:58:38 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/16 09:20:39 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*
#include<stdio.h>

int main(void)
{
  char dest[16], src[16];
  size_t n;

  printf("Please input a string: ");
  scanf("%s", src);
  printf("Please input a byte: ");
  scanf("%zu", &n);

  ft_strncpy(dest, src, n);
  dest[n] = '\0';

  printf("src  = %s\n", src);
  printf("dest = %s\n", dest);

  return 0;
}
*/
