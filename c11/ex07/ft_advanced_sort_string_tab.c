/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:57:11 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 10:07:50 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	count_len(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != NULL)
		count++;
	return (count);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		count;
	int		size;
	char	*tmp;

	count = 0;
	size = count_len(tab);
	while (size - 1)
	{
		count = 0;
		while ((size - 1) > count)
		{
			if (cmp(tab[count], tab[count + 1]) > 0)
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
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

int	main(void)
{
	int	count;

	count = 0;
	char	*a[5] = {"abcc", "aaa", "112", "111", NULL};
	ft_advanced_sort_string_tab(a, &ft_strcmp);
	while (a[count])
		printf("%s ", a[count++]);
}
*/
