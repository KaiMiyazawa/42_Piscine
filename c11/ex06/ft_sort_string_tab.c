/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:33:41 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/01 17:40:25 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	len(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != NULL)
		count++;
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

void	ft_sort_string_tab(char **tab)
{
	int		count;
	int		size;
	char	*tmp;

	count = 0;
	size = len(tab);
	while (size - 1)
	{
		count = 0;
		while ((size - 1) > count)
		{
			if (ft_strcmp(tab[count], tab[count + 1]) > 0)
			{
				tmp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = tmp;
			}
			count++;
		}
		size --;
	}
}

/*
int	main(void)
{
	int	count;

	count = 0;
	char	*a[5] = {"abcc", "aaa", "112", "111", NULL};
	ft_sort_string_tab(a);
	while (a[count])
		printf("%s ", a[count++]);
}
*/